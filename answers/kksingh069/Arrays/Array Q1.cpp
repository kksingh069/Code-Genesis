#include<iostream>
using namespace std;
int main()
{   
    int n,i,j,c,target;
    cin>>n;

    int nums[n];

    //getting input from user 
    for (i =0; i <n; i++)
    {
        cin>>nums[i];
    }
    
        cin>>target;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((nums[i]+ nums[j] )== target)
            {
                cout<<i<<","<<j;
                c=1;
            }
            
        }
        if(c==1)
        break;
    }
    return 0;
}
