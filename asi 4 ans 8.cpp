#include<iostream>
using namespace std;
class Bank
{
    int principal;
    float rate;
    int time;
public:
    Bank()
    {

    }
    Bank(int p, float r, int t)
    {
        principal=p;
        rate=r;
        time=t;
    }
    void si()
    {
        cout<<"S.I ="<<(principal*rate*time)/100<<endl;
    }
};
int main()
{
    int x,z;
    float y;
    cout<<"Enter Principal, Rate, Time to find Simple Interest"<<endl;
    cin>>x>>y>>z;
    Bank ac1(x,y,z);
    ac1.si();
    return 0;
}
