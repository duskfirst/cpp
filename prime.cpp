#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter The Number"<<endl;
    cin>>a;
    int b;
    int j;

    for (int i = 2; i < a; i++)
    {
        b = a % i;

        if (b == 0)
        {
            j = 1;
            break;
        }
    }
    if (j == 1)
    {
        cout<<"It is not a prime"<<endl;
    }
    else
    {
        cout<<"It is a prime"<<endl;
    }
    return 0;
}
