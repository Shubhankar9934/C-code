#include<bits/stdc++.h>
using namespace std;
//write a program to find the factors:
int main()
{
    int i,n,sum=0;
    cout<<("Enter a number:");
    cin>>n;
    cout<<("Factor of ")<<n<<(" is ")<<(" = ");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<("\t");
            sum=sum+i;
        }

    }
    cout<<("\nSum of all factors of ")<<n<<(" is ")<<sum;
    return 0;
}
