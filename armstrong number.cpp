#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum=0,m,rem;
    cout<<("Enter a number:")<<endl;
    cin>>n;
    m=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==m)
    {
        cout<<("This is an armstrong number")<<endl;
    }
    else
    {
        cout<<("This is not an armstrong number")<<endl;
    }
   /* for(;n!=0;) //error in this code:
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(sum==m)
    {
        cout<<("This is an armstrong number")<<endl;
    }
    else
    {
        cout<<("This is an armstrong number")<<endl;
    }*/
    return 0;
}
