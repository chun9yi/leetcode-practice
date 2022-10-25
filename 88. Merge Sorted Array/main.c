void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    if(m==0){
        for(int i=0;i<nums1Size;i++){
            nums1[i] = nums2[i];
        }
    }
    else{
        int tmp[m];
        if(m!=0){
            for(int i =0;i<m;i++){
                tmp[i] = nums1[i];
            }
        }


        int cnt1=0, cnt2=0;
        for(int i=0;i<nums1Size;i++){
            if(cnt1 == m){
                nums1[i] = nums2[cnt2];
                cnt2++;
            }
            else if(cnt2 == n){
                nums1[i] = tmp[cnt1];
                cnt1++;
            }
            else{ 
                if(tmp[cnt1] <= nums2[cnt2]){
                    nums1[i] = tmp[cnt1];
                    cnt1++;
                }
                else{
                    nums1[i] = nums2[cnt2];
                    cnt2++;
                }
            }
        }
    }
    
}