int lengthOfLastWord(char * s){
    int cnt = 0, tmp = 0;
    for(int i=strlen(s)-1;i>=0;i--){
        if(s[i]!=' ') cnt++;
        if(cnt!=0 && s[i] == ' ') break;
    }
    return cnt;
}