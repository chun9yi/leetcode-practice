bool isPalindrome(char * s){
    int size = strlen(s);
    int left = 0, right = size-1;
    bool flag = true;
    
    while(right>left){
        if(isalpha(s[left]) == 0 && isdigit(s[left]) == 0) left++;
        else if(isalpha(s[right]) == 0 && isdigit(s[right]) == 0) right--;
        else{
            if(tolower(s[left]) != tolower(s[right])){
                flag = false;
                break;
            }
            left++;
            right--;
        }
    }
    
    
    return flag;
}