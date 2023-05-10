#include<iostream>
#include<string.h>
using namespace std;
class Bill
{
    char name[20];
    int bno;
    int unit;
    float rs;
public:
    Bill()
    {
    }
    Bill(char na[],int n,int u)
    {
        strcpy(name,na);
        bno=n;
        unit=u;
        if(unit==100)
        {
            rs=1.20*unit;
        }
        else if(unit>100 && unit<200)
        {
            rs=2*unit;
        }
        else if(unit==200)
        {
            rs=3*unit;
        }

    }
    void showbill()
    {
        cout<<"Name ="<<name<<endl<<"Bill no ="<<bno<<endl<<"Unit use ="<<unit<<endl<<"Total Bill ="<<rs<<endl<<endl;
    }
};
int main()
{
    Bill b1("dubey",1,100),b2("yogesh",2,170),b3("manu",3,200);
    b1.showbill();
    b2.showbill();
    b3.showbill();
    return 0;
}
