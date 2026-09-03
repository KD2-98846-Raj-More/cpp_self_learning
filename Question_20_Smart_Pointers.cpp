#include<iostream>
#include<memory>
using namespace std;

class Student
{
public:
    int rollNo;

    Student(int rollNo)
    {
        this->rollNo = rollNo;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    cout << "Unique ownership:" << endl;

    unique_ptr<Student> p1(new Student(101));
    p1->display();

    cout << "\nShared ownership:" << endl;

    shared_ptr<Student> p2(new Student(102));
    shared_ptr<Student> p3 = p2;

    p2->display();
    cout << "Reference count: " << p2.use_count() << endl;

    cout << "\nNon-owning reference:" << endl;

    weak_ptr<Student> p4 = p2;

    if(!p4.expired())
    {
        shared_ptr<Student> temp = p4.lock();
        temp->display();
    }

    return 0;
}
