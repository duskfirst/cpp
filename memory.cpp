#include <iostream>
using namespace std;

int main()
{
    //when creating a variable size array it may cause memory problems
    //to overcome this we use a pointer 
    // pointer is always stored in stack
    int n;
    cin>>n;
    int* arr = new int [n];//dunamic allocation
    // if we use new the arr now points at the heap storage making it variable size 
    return 0;
}