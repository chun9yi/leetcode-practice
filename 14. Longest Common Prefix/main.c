char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize == 0) return "";
    if(strsSize == 1) return strs[0];
    
    int cnt=0, min=strlen(strs[0]);
    // find minimum
    for(int i=1;i<strsSize;i++){
        min = strlen(strs[i]) < min ? strlen(strs[i]) : min;
    }
    
    bool flag = false;
    for(int j=0;j<min;j++){
        flag=false;
        for(int i=0;i<strsSize-1;i++){
            if(strs[i][j] == strs[i+1][j]){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag){
            cnt++;
        }
        else break;
    }
    
    strs[0][cnt]='\0';
    return strs[0];
}