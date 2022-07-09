#include<bits/stdc++.h>
using namespace std;
//Write a program to find the factorial of a given number :
int main()
{
    long long int i,n,fact=1;
    cout<<("Enter a number:");
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<n<<"!="<<fact;
    return 0;

}
