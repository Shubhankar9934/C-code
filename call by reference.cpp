
#include<bits/stdc++.h>
using namespace std;
int swap(int &a, int &b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<("swapped number is ")<<a<<" "<<b<<endl;
}
int main()
{
int x, y;
cout<<("Enter two numbers:");
cin>>x>>y;
swap(x,y);
return 0;
}
/*Call by Reference
• Actual parameters are passed as reference
• Formal parameters can directly access actual parameters
• Function call is converted into inline function, if not possible it will become call by
address
• Reference don’t take extra memory
• Syntax is same as Call by Value except, formal parameters are reference*/
