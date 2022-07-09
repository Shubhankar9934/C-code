//This type of function with same name but different argument called as function overloading.
#include<bits/stdc++.h>
using namespace std;
int add(int x, int y)
{
    return x+y;
}
int add(int x, int y, int z)
{
    return x+y+z;
}
float add(float x, float y)
{
    return x+y;
}
int main()
{
    cout<<add(36,44)<<endl;
    cout<<add(34,56,67)<<endl;
    cout<<add(45.8f,67.6f)<<endl;

  return 0;

}
