#include<iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "ADULT" << endl;
    }
    else if (age >= 13)
    {
        cout << "TEENAGE" << endl;
    }
    else 
    {
        cout << "CHILD\"s" << endl;
    }
    return 0;
}