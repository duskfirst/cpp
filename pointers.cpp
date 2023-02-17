#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    // we can access through pointers by * i.e d-reference or (value of) 
    // size of poiniter always is 8 bytes 
    cout<<p<<endl;
    cout<<&a<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    //double pointer stores adress of the pointer and is accessed by **
    int** q= & p;
    // the value of *q will be the adress of *p
    cout<<*q<<endl;
    //**q will guve the value of *p i.e. 5
    cout<<**q<<endl;
    //q will have the adress of p or &p
    cout<<q<<endl;
    return 0;
}