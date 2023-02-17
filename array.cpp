#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"SIZE OF ARRAY"<<endl;
    cin>>n;
    cout<<"MY VALUE IS "<<n<<endl;
    int arr[n];//only sqaure bcoz its the syntax
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] +=  5;
    }    
        for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}