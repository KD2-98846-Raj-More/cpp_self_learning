#include<iostream>
#include<list>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    list<int> numbers;

    srand(time(NULL));

    for(int i = 0; i < 10; i++)
        numbers.push_back(rand() % 100);

    cout << "Original list: ";
    list<int>::iterator it;

    for(it = numbers.begin(); it != numbers.end(); ++it)
        cout << *it << " ";

    cout << "\n\nReverse order: ";
    list<int>::reverse_iterator rit;

    for(rit = numbers.rbegin(); rit != numbers.rend(); ++rit)
        cout << *rit << " ";

    for(it = numbers.begin(); it != numbers.end(); ++it)
        *it = *it + 5;

    cout << "\n\nAfter incrementing by 5: ";
    for(it = numbers.begin(); it != numbers.end(); ++it)
        cout << *it << " ";

    cout << "\n\nUsing const iterator: ";
    list<int>::const_iterator cit;

    for(cit = numbers.begin(); cit != numbers.end(); ++cit)
        cout << *cit << " ";

    numbers.sort();

    cout << "\n\nAfter sorting: ";
    for(it = numbers.begin(); it != numbers.end(); ++it)
        cout << *it << " ";

    cout << endl;

    return 0;
}
