#include<iostream>
using namespace std;
class student {
    private:
    int RollNo;
    string name;
    float marks;
    public:
    student(int r, string n, float m)
    {
        RollNo = r;
        name = n;
        marks = m;
    }
    void display()
    {
        cout<<RollNo<<" "<<name<<" "<<marks<<endl;
    }
};
int main()
{

    student s1(101,"glain",85.9);
    student s2(102,"ashwanth",80.10);
    s1.display();
    s2.display();
    return 0;
}