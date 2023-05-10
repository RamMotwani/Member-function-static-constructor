#include<iostream>
using namespace std;
class cube
{
    int a;
public:
    cube(int x)
    {
        a=x;
    }
    void showvolume()
    {
        cout<<"volume of cube is "<<a*a*a;
    }
};
int main()
{
    cube c1(5);
    c1.showvolume();
    return 0;

}
