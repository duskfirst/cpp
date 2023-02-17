#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cin>>n;
    int **arr=new int*[n];
    for (int i =0; i < n;i++)
    {
        arr[i] = new int[m];
        for(int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    return 0;
}