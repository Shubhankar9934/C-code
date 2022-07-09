#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,rem,reversed=0;
    cout<<("Enter a number:")<<endl;
    cin>>n;
    //Reversed a number using do while loops:
   /* do
    {
        rem=n%10;
        reversed=reversed*10+rem;
        n=n/10;

    }
    while(n!=0);*/
        //Reversed using for loop;
    /*for(;n!=0 ;)//for(n!=0;n%10;n/10)//This will also works;
    {
        reversed=reversed*10+n%10;
        n=n/10;
    }*/
    //reversed a number using while loop;
   /* while(n!=0)
    {
        rem=n%10;
        reversed=reversed*10+rem;
        n=n/10;
    }
    cout<<("Reversed number is ")<<reversed<<endl;*/

    //or
    while(n!=0)
    {
        rem=(n%10);
        n=n/10;
        cout<<rem;
    }
    cout<<(" is reversed number")<<endl;
    return 0;
}
