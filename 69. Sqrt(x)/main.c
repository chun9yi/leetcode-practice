int mySqrt(int x){
    if(x<2) return x;
    int left = 0, right = x;
    long long tmp;
    
    while(right-left > 1){
        tmp = (left+right)/2;
        if(tmp*tmp == x) return tmp;
        else if(tmp*tmp > x) right = tmp;
        else left = tmp;
    }
    
    return left;
}