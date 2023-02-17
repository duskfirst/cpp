#include <iostream>
using namespace std;

int main()
{
    int a;
    float sum = 0;
    cout << "ENTER THE TIMES OF REPEATATION" << endl;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " # " <<" " ;
        }
        cout << endl;
    }
    return 0;
}
