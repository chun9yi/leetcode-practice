/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    int **ans = (int **)malloc(sizeof(int *)*(rowIndex+1));
    
    for(int i=0;i<=rowIndex;i++){
        ans[i] = (int *)malloc(sizeof(int)*(i+1));
        ans[i][0] = 1;
        ans[i][i] = 1;
        
        if(i>1){
            for(int j=0;j<i-1;j++){
                ans[i][j+1] = ans[i-1][j] + ans[i-1][j+1];
            }
        }
    }
    
    *returnSize = rowIndex+1;
    return ans[rowIndex];
}