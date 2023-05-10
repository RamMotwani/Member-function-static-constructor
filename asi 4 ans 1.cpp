#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"real="<<a<<" imaginary="<<b<<endl;
    }
    complex add(complex c)
    {
        c.a=a+c.a;
        c.b=b+c.b;
        return c;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(5,3);
    c2.setdata(4,2);
    c3=c1.add(c2);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}

