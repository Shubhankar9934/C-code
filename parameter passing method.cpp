/*Parameter Passing Methods
Three parameter passing methods are supported by C++
Pass-By-Value : values of Actual parameters are passed to formal parameters. Actual
parameters cannot be modified by function
Pass-By-Address: Address of Actual Parameters are passed to a function, formal
parameters must be pointers. Function can indirectly access actual parameters.
Pass-By-Reference: Actual parameters are passed as reference to formal parameters,
function can modify actual parameters.
Program for Call by Value
� Value of actual parameters are copied in formal parameters
� If any changes done to formal parameters in function, they will not modify actual
parameters*/
#include<bits/stdc++.h>
using namespace std;
int swap(int a, int b)
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
