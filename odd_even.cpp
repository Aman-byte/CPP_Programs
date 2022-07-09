//Whether the number is odd or even
#include <iostream>

using namespace std;
int main()
{
    int a;
    cout<<"Enter the numbers";
    cin>>a;
    if(a%2==0) //modulus
    {
        cout<<a<< " is an even number";
    }
    else
    {
        cout<<a<< " is an odd number";
    }
    return 0;
}
