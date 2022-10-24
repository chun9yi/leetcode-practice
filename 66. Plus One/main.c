/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int* ans = (int *)malloc(sizeof(int) * (digitsSize));
    int tmp = 1;
    for(int i=digitsSize-1;i>=0;i--){
        if(digits[i]+tmp <10){
            ans[i] = digits[i]+tmp;
            tmp=0;
        } 
        else{
            ans[i] = 0;
        }
    }
    *returnSize = digitsSize;
    if(tmp == 1){
        int* new_ans = (int *)malloc(sizeof(int) * (digitsSize+1));
        new_ans[0] = 1;
        for(int i=1;i<=digitsSize;i++){
            new_ans[i] = ans[i-1];
        }
        *returnSize = digitsSize+1;
        return new_ans;
    }
    return ans;
}