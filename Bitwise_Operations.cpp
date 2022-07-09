#include <iostream>

using namespace std;
int main()
{
    int x=11, y=5, z; // 11 and 5 becomes in binary form and the and/or/xor are applied
    z=x&y; //AND
    // z=x|y;   OR
    // z=x^y;   XOR

    char x=5, y;
    y=x<<1; // left shift
    //y=x>>1;  right shift
    //y=~x; //NOT operation
    cout<<(int)y<<endl;// type casting Y as integer type to get answer
    cout<<z<<endl;
    return 0;
}
