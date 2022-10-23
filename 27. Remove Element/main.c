int removeElement(int* nums, int numsSize, int val){
    int cnt = 0, tmp = numsSize;
    while(numsSize>0){
        if(nums[cnt] != val){
            cnt++;
        }
        else{
            for(int j=cnt;j<tmp-1;j++){
                nums[j] = nums[j+1];
            }
        }
        numsSize--;
    }
    return cnt;
}