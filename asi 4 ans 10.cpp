#include<iostream>
using namespace std;
class staticcount
{
    static int c;
public:
    void funcall()
    {
        cout<<"count check"<<endl;
        c++;
    }
    static void counter()
    {
        cout<<"function called "<<c<<" times"<<endl;
    }
};
int staticcount::c;
int main()
{
    staticcount a1;
    a1.funcall();
    a1.funcall();
    a1.funcall();
    staticcount::counter();
    return 0;
}
