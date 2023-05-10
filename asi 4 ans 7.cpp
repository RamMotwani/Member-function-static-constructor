#include<iostream>
using namespace std;
class box
{
    int length,breadth,height;
public:
    box()
    {

    }
    box(int l,int b,int h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    void showvolume()
    {
        cout<<"volume of the box is "<<length*breadth*height<<endl;
    }
};
int main()
{
    cout<<"enter length, breadth, height of the box to find the volume"<<endl;
    int x,y,z;
    cin>>x>>y>>z;
    box b1(x,y,z);
    b1.showvolume();
    return 0;
}
