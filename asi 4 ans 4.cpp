#include<iostream>
using namespace std;
class counter
{
    static int c;
public:
    counter()
    {
        c++;
    }
    static void showcount()
    {
        cout<<"object form "<<c<<" times"<<endl;
    }

};
int counter::c;
int main()
{
    counter a1,a2,a3;

    counter::showcount();
}
