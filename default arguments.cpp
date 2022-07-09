/*Default Arguments
• Parameters of a function can have default values
• If a parameter is default then , passing its value is options
• Function with default argument can be called with variable number of argument
• Default values to parameters must be given from right side parameter
• Default arguments are much useful in constructors
• Default arguments are useful for defining overloaded functions
Example of Default Arguments*/
#include <iostream>
using namespace std;
int max(int a=0,int b=0,int c=0)
{
return a>b&&a>c?a:(b>c?b:c);
}
int main()
{
 cout<<max(10,20,3)<<endl;
 cout<<max(12,18)<<endl;
 cout<<max(19)<<endl;
 cout<<max()<<endl;
return 0;
}
