#include<iostream>
using namespace std;

template<class T>
class Array
{
private:
    T *arr;
    int size;

public:
    Array(int size)
    {
        this->size = size;
        arr = new T[size];
    }

    ~Array()
    {
        delete[] arr;
    }

    T& operator[](int index)
    {
        return arr[index];
    }

    int getSize()
    {
        return size;
    }

    void display()
    {
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
};

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    Array<int> a(n);

    cout << "Enter elements:" << endl;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Array: ";
    a.display();

    return 0;
}
