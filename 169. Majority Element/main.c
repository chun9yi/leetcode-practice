int majorityElement(int* nums, int numsSize){
    int tmp = nums[0];
    int cnt = 1;
    for(int i=1;i<numsSize;i++){
        if(cnt == 0){
            cnt++;
            tmp = nums[i];
        }
        else if(tmp == nums[i]) cnt++;
        else{
            cnt--;
        }
    }
    
    return tmp;
}