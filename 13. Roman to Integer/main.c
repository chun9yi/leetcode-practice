int romanToInt(char * s){
    int tmp[100];
    tmp['I'] = 1;
    tmp['V'] = 5;
    tmp['X'] = 10;
    tmp['L'] = 50;
    tmp['C'] = 100;
    tmp['D'] = 500;
    tmp['M'] = 1000;
    
    int cnt = 0;
    for(int i=0; i<strlen(s);i++){
        if(i+1 < strlen(s)){
            if(tmp[s[i]] < tmp[s[i+1]]){
                cnt -= tmp[s[i]];
            }
            else{
                cnt += tmp[s[i]];
            }
        }
        else{
            cnt += tmp[s[i]];
        }
        
    }

    return cnt;
}