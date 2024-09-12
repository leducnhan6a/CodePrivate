int t;
    cin >> t;  
    while(t!=0){
        int n,s=1,j=1,res=1;
        cin >> n;
        while(s<n){
            if(s+j+2<=n){
                s+=j+2;
                j+=2;
                ++res;
            }
            else{
                s+=j+1;
                j+=1;
                ++res;
            }
        }
        cout << res << endl;
        --t;
    }