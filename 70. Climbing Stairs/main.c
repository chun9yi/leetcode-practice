int climbStairs(int n){
    int max = 46;
    int dict[max];
    dict[0] = 1;
    dict[1] = 1;
    
    for(int i=2;i<=n;i++){
        dict[i] = dict[i-1] + dict[i-2];
    }
    
    return dict[n];
}