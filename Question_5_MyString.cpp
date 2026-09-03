#include<iostream>
using namespace std;

int myStrlen(const char str[])
{
    int i = 0;

    while(str[i] != '\0')
        i++;

    return i;
}

void myStrcpy(char destination[], const char source[])
{
    int i = 0;

    while(source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

int main()
{
    char source[100];
    char destination[100];

    cout << "Enter string: ";
    cin.getline(source, 100);

    cout << "Length = " << myStrlen(source) << endl;

    myStrcpy(destination, source);
    cout << "Copied string = " << destination << endl;

    return 0;
}
