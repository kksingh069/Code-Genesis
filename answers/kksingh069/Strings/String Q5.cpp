int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int i=0,j=0;
        string p="",temp="party";
        while(j<n)
        {
            p+=s[j];
            if(j-i+1<5)
            j++;
            else if(j-i+1==5)
            {
                string cur=s.substr(i,5);
                if(cur.compare(temp)==0)
                {
                    s[i+2]='w';
                    s[i+3]='r';
                    s[i+4]='i';
                }
                p=p.substr(1);
                j++;
                i++;

            }
        }
        cout<<s<<"\n";
