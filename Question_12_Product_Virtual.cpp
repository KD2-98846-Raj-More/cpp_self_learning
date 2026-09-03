#include<iostream>
using namespace std;

class Product
{
protected:
    char title[50];
    double price;

public:
    virtual void accept()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }

    virtual void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    virtual void displaySpecific() = 0;

    virtual ~Product() {}
};

class Book : public Product
{
private:
    int pages;

public:
    void accept()
    {
        Product::accept();
        cout << "Enter pages: ";
        cin >> pages;
    }

    void display()
    {
        Product::display();
        cout << "Pages: " << pages << endl;
    }

    void displaySpecific()
    {
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Product
{
private:
    int playtime;

public:
    void accept()
    {
        Product::accept();
        cout << "Enter playtime: ";
        cin >> playtime;
    }

    void display()
    {
        Product::display();
        cout << "Playtime: " << playtime << " minutes" << endl;
    }

    void displaySpecific()
    {
        cout << "Playtime: " << playtime << " minutes" << endl;
    }
};

int main()
{
    Product *arr[5];
    int choice;

    for(int i = 0; i < 5; i++)
    {
        cout << "\n1. Book, 2. Tape, Enter choice: ";
        cin >> choice;

        if(choice == 1)
            arr[i] = new Book;
        else
            arr[i] = new Tape;

        arr[i]->accept();
    }

    cout << "\nPages and Playtime values:\n";

    for(int i = 0; i < 5; i++)
    {
        arr[i]->displaySpecific();
        delete arr[i];
    }

    return 0;
}
