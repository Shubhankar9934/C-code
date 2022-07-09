#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1;
   /*cout<<("printing shubh 10 times using while loop:\n");
    while(i<=10)
    {
        cout<<i<< (" shubh\n");
        i++;
    }*/
    cout<<("printing shubh 10 times using do while loop:\n");
    do
    {
        cout<<i<<(" shubh\n");
         i++;
    }
    while(i<=10);
        cout<<("printing shubh 10 times using for loop:\n");
    for(n=1;n<=10;n++)
    {
        cout<<n<<(" shubh\n");
    }
    return 0;
}

