 int ans = 1;
    //factorial in answer bucket
    for(int i = 2 ; i <= n ; i++){
        ans = ans * i;
    }
    return ans;