#include<iostream>
using namespace std;

class Student
{
private:
    int rollNo;

public:
    Student()
    {
        rollNo = 0;
    }

    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
    }
};

class SmartPointer
{
private:
    Student *ptr;

public:
    SmartPointer(Student *ptr = NULL)
    {
        this->ptr = ptr;
    }

    Student* operator->()
    {
        return ptr;
    }

    Student& operator*()
    {
        return *ptr;
    }

    ~SmartPointer()
    {
        delete ptr;
    }
};

int main()
{
    try
    {
        SmartPointer s(new Student);

        s->setRollNo(101);
        s->display();

    }
    catch(...)
    {
        cout << "Invalid input" << endl;
    }

    return 0;
}
