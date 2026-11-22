#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    void displayDetails()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(101, "Aslah", 85.5);

    s1.displayDetails();

    return 0;
}