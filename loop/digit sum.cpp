#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,sum=0;
    cout<<("Enter a number:");
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<("sum of entered digit is ")<<sum<<endl;
    return 0;

}
