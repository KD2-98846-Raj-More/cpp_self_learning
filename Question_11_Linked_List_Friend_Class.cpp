#include<iostream>
using namespace std;

class LinkedList;

class Node
{
private:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }

    friend class LinkedList;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void add_first(int data)
    {
        Node *n = new Node(data);
        n->next = head;
        head = n;
    }

    void add_last(int data)
    {
        Node *n = new Node(data);

        if(head == NULL)
        {
            head = n;
            return;
        }

        Node *temp = head;

        while(temp->next != NULL)
            temp = temp->next;

        temp->next = n;
    }

    void display()
    {
        Node *temp = head;

        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    ~LinkedList()
    {
        Node *temp;

        while(head != NULL)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{
    LinkedList list;

    list.add_first(20);
    list.add_first(10);
    list.add_last(30);
    list.add_last(40);

    cout << "Linked List: ";
    list.display();

    return 0;
}
