#include<iostream>
using namespace std;
int main ()
{
    float num1 , num2 ;
    char op;

    cin>>num1;
    cout<<endl;
    cin>>num2;
    cout<<endl;
    cin>>op;

    if(op=='+')
    {cout<<(num1 + num2);}
        else if(op=='-')
        {cout<<(num1 - num2);}
            else if(op=='x' || op=='*')
            {cout<<(num1*num2);}
                else if(op=='/')
                {cout<<(num1/num2);}
                    else if (op=='%')
                    {cout<<(num1 / num2);}
                        else 
                        {cout<<"Invalid op";}

    return 0;
}
