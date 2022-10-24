char * addBinary(char * a, char * b){
    int maxLen = strlen(a) > strlen(b) ? strlen(a):strlen(b);
    char* ans = (char *)malloc(sizeof(char)*(maxLen+2));
    int cnt_a = strlen(a)-1, cnt_b = strlen(b)-1;
    int tmp = 0, current = 0;
    while(cnt_a >=0 || cnt_b >= 0 || tmp != 0){
        int cnt = tmp;
        if(cnt_a >= 0){
            cnt += a[cnt_a] - '0';
            cnt_a--;
        }
        if(cnt_b>= 0){
            cnt += b[cnt_b] - '0';
            cnt_b--;
        }
        
        if(cnt > 1){
            ans[current] = cnt-2+'0';
            tmp = 1;
        }
        else{
            ans[current] = cnt+'0';
            tmp = tmp>0?tmp-1:0;
        }
        current++;
    }
    ans[current] = '\0';
    
    // reverse
    char* ans_ = (char *)malloc(sizeof(char)*(current+1));
    for(int i =0;i<current;i++){
        ans_[i] = ans[current-1-i];
    }
    ans_[current] = '\0';
    return ans_;
}