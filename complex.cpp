#include<bits/stdc++.h>
using namespace std;
class Complex
{
private:

        int real;
        int img;
public:
     Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    void getcomplex()
    {
        cout<<noshowpos<<real<<showpos<<img<<"i"<<endl;
    }
    Complex operator+(Complex c )
    {
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    Complex operator-(Complex c )
    {
        Complex temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }
    Complex operator*(Complex c )
    {
        Complex temp;
        temp.real=real*c.real-img*c.img;
        temp.img=real*c.img+img*c.real;
        return temp;
    }
};
int main()
{
    Complex c1(5,6);
    c1.getcomplex();
    Complex c2(-3,-5);
    c2.getcomplex();
    Complex c3,c4,c5;
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c3.getcomplex();
    c4.getcomplex();
    c5.getcomplex();

}

