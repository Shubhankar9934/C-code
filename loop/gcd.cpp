#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout<<("Enter two numbers:");
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else if(n>m)
            n=n-m;
    }
    cout<<("GCD is1 ")<<m<<endl;
    return 0;
}
