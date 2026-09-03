#include<iostream>
using namespace std;

class Person
{
protected:
    char name[50];
    int age;

public:
    Person()
    {
        name[0] = '\0';
        age = 0;
    }

    void setName(const char name[])
    {
        int i = 0;
        while(name[i] != '\0')
        {
            this->name[i] = name[i];
            i++;
        }
        this->name[i] = '\0';
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual void work() = 0;
};

class Student : public Person
{
private:
    float marks;

public:
    Student(float marks)
    {
        this->marks = marks;
    }

    void study()
    {
        cout << "Student is studying" << endl;
    }

    void work()
    {
        cout << "Student is doing academic work" << endl;
    }

    void displayStudent()
    {
        display();
        cout << "Marks: " << marks << endl;
    }
};

class Teacher : public Person
{
private:
    double salary;

public:
    Teacher(double salary)
    {
        this->salary = salary;
    }

    void teach()
    {
        cout << "Teacher is teaching" << endl;
    }

    void work()
    {
        cout << "Teacher is doing teaching work" << endl;
    }

    void displayTeacher()
    {
        display();
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student s(85);
    s.setName("Raj");
    s.setAge(21);

    Teacher t(50000);
    t.setName("Teacher");
    t.setAge(40);

    s.displayStudent();
    s.study();

    cout << endl;

    t.displayTeacher();
    t.teach();

    cout << "\nRuntime Polymorphism:" << endl;

    Person *p;

    p = &s;
    p->work();

    p = &t;
    p->work();

    return 0;
}
