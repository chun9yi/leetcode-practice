int removeDuplicates(int* nums, int numsSize){
    int cnt=0;
    
    if(numsSize==1) return numsSize;
    for(int i=1;i<numsSize;i++){
        if(nums[cnt] < nums[i]){
            cnt++;
        }
        else{
            for(int j=i;j<numsSize;j++){
                if(nums[cnt] < nums[j]){
                    nums[i] = nums[j];
                    cnt++;
                    break;
                }
            }
        }
    }
    
    return cnt+1;
}