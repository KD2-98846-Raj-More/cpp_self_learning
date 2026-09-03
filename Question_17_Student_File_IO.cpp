#include<iostream>
#include<fstream>
using namespace std;

class Student
{
private:
    int rollNo;
    char name[50];
    float marks;

public:
    Student()
    {
        rollNo = 0;
        name[0] = '\0';
        marks = 0;
    }

    void accept()
    {
        cout << "Enter roll no: ";
        cin >> rollNo;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    void save()
    {
        ofstream fout("student.dat", ios::binary);
        fout.write((char*)this, sizeof(Student));
        fout.close();
    }

    void load()
    {
        ifstream fin("student.dat", ios::binary);
        fin.read((char*)this, sizeof(Student));
        fin.close();
    }
};

int main()
{
    Student s;

    cout << "Enter student information:" << endl;
    s.accept();

    s.save();

    Student s2;
    s2.load();

    cout << "\nStudent loaded from file:" << endl;
    s2.display();

    return 0;
}
