
#include<bits/stdc++.h>
using namespace std;
//write a program to find the given number is perfect or not:
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
    if(sum==2*n)
    {

           cout<<("\nGiven number is perfect number.");
        }
    else
        {
            cout<<("\nGiven number is not perfect number.");
        }

    cout<<("\nSum of all factors of ")<<n<<(" is ")<<sum<<endl;
    return 0;
}
