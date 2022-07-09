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
  int a=20, b=45,c,d=10,e;
  float k=3.5, w=68.9, f;
  c=add(a,b);
  e=add(a,b,d);
  f=add(k,w);
  cout<<e<<endl;
  cout<<c<<endl;
  cout<<f<<endl;

  return 0;

}
