#include<iostream>
using namespace std;

namespace college
{
    class Student
    {
    private:
        int rollNo;
        char name[50];

    public:
        Student()
        {
            rollNo = 0;
            name[0] = '\0';
        }

        void setRollNo(int rollNo)
        {
            this->rollNo = rollNo;
        }

        int getRollNo()
        {
            return rollNo;
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

        char* getName()
        {
            return name;
        }

        void display()
        {
            cout << "Student Roll No: " << rollNo << endl;
            cout << "Student Name: " << name << endl;
        }
    };

    class Teacher
    {
    private:
        int id;
        char name[50];

    public:
        Teacher()
        {
            id = 0;
            name[0] = '\0';
        }

        void setId(int id)
        {
            this->id = id;
        }

        int getId()
        {
            return id;
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

        char* getName()
        {
            return name;
        }

        void display()
        {
            cout << "Teacher Id: " << id << endl;
            cout << "Teacher Name: " << name << endl;
        }
    };
}

int main()
{
    college::Student s;
    college::Teacher t;

    s.setRollNo(1);
    s.setName("Raj");
    s.display();

    cout << endl;

    t.setId(101);
    t.setName("Professor");
    t.display();

    return 0;
}
