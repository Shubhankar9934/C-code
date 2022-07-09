#include<bits/stdc++.h>
using namespace std;
int swap(int *a, int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
cout<<("swapped number is ")<<*a<<" "<<*b<<endl;
}
int main()
{
int x, y;
cout<<("Enter two numbers:");
cin>>x>>y;
swap(&x,&y);
return 0;
}
/*Call by Address
• Address pf actual parameters are passed.
• Formal parameters must be pointers
• Formal parameters ca indirectly access actual parameters.
• Changes done using formal parameters will reflect in actual parameters*/
