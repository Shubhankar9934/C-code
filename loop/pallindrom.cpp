#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,rev=0,rem;
    cout<<("Enter a number:");
    cin>>n;
    m=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(m==rev)
    {
        cout<<m<<(" is pallindrom number");
    }
    else
    {
        cout<<m<<(" is not a pallindrom number");
    }
    return 0;
}
