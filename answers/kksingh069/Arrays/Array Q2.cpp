vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v{0};
        set<vector<int>>s;
        int n=nums.size();
        if(n<=3)
            return v;
        for(int i=0;i<n-1;i++)
        {
            int a=nums[i];
            
            for(int j=i+1;j<n;j++)
            {
               int b=nums[j];
                int c=target-a-b;
                int l=j+1,r=nums.size()-1;
                while(l<r)
                {
                   int x=nums[l];
                  int y=nums[r];
                    
                     if(x+y<c)
                        l++;
                  else if(x+y>c)
                        r--;
                   else
                    {
                        s.insert({a,b,x,y});
                       l++; r--;
                        
                    }
