bool check(char *tmp, int cnt, char s){
    if(cnt==0) return false;
    if(s == ')'){
        if(tmp[cnt-1] == '(') return true;
        else return false;
    }
    else if(s == '}'){
        if(tmp[cnt-1] == '{') return true;
        else return false;
    }
    else if(s == ']'){
        if(tmp[cnt-1] == '[') return true;
        else return false;
    }
    else{
        return false;
    }
}

bool isValid(char * s){
    char *tmp = (char *)malloc(10000*sizeof(char));
    int cnt=0;
    
    for(int i=0;i<strlen(s);i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            tmp[cnt] = s[i];
            cnt++;
        }
        else{
            bool flag = check(tmp, cnt, s[i]);
            if(flag){
                cnt--;
            }
            else return false;
        }
    }
    
    if(cnt!=0) return false;
    return true;
}