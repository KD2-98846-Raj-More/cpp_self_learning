#include<iostream>
using namespace std;

class Matrix
{
private:
    int a[2][2];

public:
    Matrix()
    {
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                a[i][j] = 0;
    }

    void accept()
    {
        cout << "Enter 4 elements:" << endl;
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                cin >> a[i][j];
    }

    void display()
    {
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    Matrix operator+(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];

        return temp;
    }

    Matrix operator-(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                temp.a[i][j] = a[i][j] - m.a[i][j];

        return temp;
    }

    Matrix operator*(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                temp.a[i][j] = 0;

                for(int k = 0; k < 2; k++)
                    temp.a[i][j] = temp.a[i][j] + a[i][k] * m.a[k][j];
            }
        }

        return temp;
    }
};

int main()
{
    Matrix m1, m2, m3;

    cout << "Enter Matrix 1:" << endl;
    m1.accept();

    cout << "Enter Matrix 2:" << endl;
    m2.accept();

    cout << "\nAddition:" << endl;
    m3 = m1 + m2;
    m3.display();

    cout << "\nSubtraction:" << endl;
    m3 = m1 - m2;
    m3.display();

    cout << "\nMultiplication:" << endl;
    m3 = m1 * m2;
    m3.display();

    return 0;
}
