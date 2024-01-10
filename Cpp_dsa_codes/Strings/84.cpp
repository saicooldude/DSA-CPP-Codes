string secFrequent (string arr[], int n)
    {
        map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        auto it=mp.begin();
        int maxm=0;
        int smaxm=0;
        string str1="",str2="";
        for(auto x:mp)
        {
            if(x.second>maxm)
            {
                smaxm=maxm;
                maxm=x.second;
                str2=str1;
                str1=x.first;
                
            }
            else if(x.second<maxm && x.second >smaxm)
            {
                smaxm=x.second;
                str2=x.first;
            }
        }
        return str2;
        
    }