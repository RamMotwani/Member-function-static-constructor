#include<iostream>
using namespace std;
class student
{
    char name[10];
    int age;
    int rollno;
public:
    student(char a[],int b,int c)
    {
        int i=0;
        while(a[i]!='\0')
        {
            name[i]=a[i];
            i++;
        }
        age=b;
        rollno=c;
    }
    void showdata()
    {
        cout<<"student name is ="<<name<<endl<<"student age is ="<<age<<endl<<"student rollno. is ="<<rollno<<endl;
    }

};
int main()
{
    student s1("ram",22,102);
    s1.showdata();
}
