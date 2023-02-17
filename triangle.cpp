#include <iostream>
using namespace std;

int main()
{
    int a;
    float sum = 0;
    cout << "ENTER THE TIMES OF REPEATATION" << endl;
    cin >> a;
    for (int i = a - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " " ;
        }
        for (int j = a - i; j > 0; j--)
        {
            cout << "# " ;
        }
        cout << endl;
    }
    return 0;
}
