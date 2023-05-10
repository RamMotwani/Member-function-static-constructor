#include<iostream>
using namespace std;
class date
{
    int d,m,y;
public:
    date()
    {

    }
    date(int a, int b, int c)
    {
        d=a;
        m=b;
        y=c;
    }
    void showdate()
    {
        cout<<"today's date is "<<d<<"-"<<m<<"-"<<y<<endl;
    }

};
int main()
{
    date tue(28,2,2023);
    tue.showdate();
    return 0;
}
