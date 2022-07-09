//Whether the number is negative or postive
#include <iostream>

using namespace std;
int main()
{
    int a;
    cout<<"Enter the number";
    cin>>a;
    if(a < 0)
    {
        cout << a << " is a negative number";
    }
    else
    {
        cout << a << " is a postive number";
    }
    return 0;
}
