#include<iostream>
using namespace std;
class time
{
    int h;
    int m;
    int s;
public:
    void settime(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void showtime()
    {
        cout<<h<<"hour "<<m<<"minute "<<s<<"second"<<endl;
    }
    time add(time w)
    {
        w.h=h+w.h;
        w.m=m+w.m;
        w.s=s+w.s;
        return w;

    }
};
int main()
{
    time c1,c2,c3;
    c1.settime(3,20,6);
    c2.settime(6,5,10);
    c3=c1.add(c2);
    c1.showtime();
    c2.showtime();
    c3.showtime();
    return 0;

}
