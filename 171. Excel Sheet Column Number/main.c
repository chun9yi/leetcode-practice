int titleToNumber(char * columnTitle){
    int size = strlen(columnTitle);
    int cnt = 0, tmp = 0;
    for(int i=size-1;i>=0;i--){
        tmp = columnTitle[i]-'A';
        cnt += pow(26,size-i-1) * (tmp+1);
    }
    
    return cnt;
}