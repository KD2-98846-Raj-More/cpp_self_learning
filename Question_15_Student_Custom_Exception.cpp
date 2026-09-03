#include<iostream>
using namespace std;

class NegativeMarksException
{
public:
    void display()
    {
        cout << "Invalid marks! Marks cannot be negative." << endl;
    }
};

class Student
{
private:
    int rollNo;
    float marks;

public:
    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }

    void setMarks(float marks)
    {
        if(marks < 0)
            throw NegativeMarksException();

        this->marks = marks;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    try
    {
        s.setRollNo(1);

        float marks;
        cout << "Enter marks: ";
        cin >> marks;

        s.setMarks(marks);
        s.display();
    }
    catch(NegativeMarksException e)
    {
        e.display();
    }

    return 0;
}
