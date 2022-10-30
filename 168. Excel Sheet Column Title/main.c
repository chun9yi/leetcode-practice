char * convertToTitle(int columnNumber){
    char *ans = (char *)malloc(sizeof(char)*10);
    int cnt = 0;
    while(columnNumber > 0){
        int tmp = columnNumber % 26; 
        if(tmp == 0) tmp=26;
        ans[cnt] = 'A' + tmp - 1;
        columnNumber = (columnNumber - tmp) / 26;
        cnt++;
    }
    
    char *new_ans = (char *)malloc(sizeof(char)*(cnt+1));
    int tmp = 0;
    for(int i=cnt-1;i>=0;i--){
        new_ans[tmp] = ans[i];
        tmp++;
    }
    new_ans[cnt] = '\0';
    return new_ans;
}