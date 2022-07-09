
#include<bits/stdc++.h>
using namespace std;
//write a program to find the given number is prime:
int main()
{
    int i,n,count=0,num1=0,num2=0;
    do
    {
    cout<<("\nEnter a number:\n");
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }

    }
    if(count==2)
    {
        cout<<n<<(" is prime number\n");
        num1++;
        cout<<num1;
    }
    else
    {
        cout<<n<<(" is composite\n");
        num2++;
    }

    cout<<num1<<("/")<<num2;
    }
    while(n!=-1);

    return 0;
}
