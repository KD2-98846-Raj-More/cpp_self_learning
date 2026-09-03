#include<iostream>
using namespace std;

class Programmer
{
public:
    Programmer()
    {
        cout << "Programmer Constructor" << endl;
    }

    void work()
    {
        cout << "Programmer is working" << endl;
    }
};

class Teacher
{
public:
    Teacher()
    {
        cout << "Teacher Constructor" << endl;
    }

    void work()
    {
        cout << "Teacher is working" << endl;
    }
};

class ProgrammingTeacher : public Programmer, public Teacher
{
public:
    ProgrammingTeacher()
    {
        cout << "ProgrammingTeacher Constructor" << endl;
    }
};

int main()
{
    ProgrammingTeacher p;

    cout << "\nCalling Programmer work:" << endl;
    p.Programmer::work();

    cout << "\nCalling Teacher work:" << endl;
    p.Teacher::work();

    return 0;
}
