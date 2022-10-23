int searchInsert(int* nums, int numsSize, int target){
    int left = 0, right = numsSize-1;
    int tmp =(left + right)/2;
    
    if(nums[left] >= target) return 0;
    if(nums[right] < target) return numsSize;
    
    while((right-left) > 1){
        tmp = (left + right)/2;
        if(nums[tmp] == target){
            return tmp;
        }
        else if(nums[tmp] > target) right = tmp;
        else left = tmp;
    }
    
    if(nums[tmp] > target) return tmp;
    else return tmp+1;
}