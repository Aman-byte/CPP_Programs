// Finding the volume of a cylinder
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float V,r,h;
    cout<<"Enter the radius ";
    cin>>r;
    cout<<"Enter the height ";
    cin>>h;
    V=3.14*r*r*h;
    cout<<"The volume is "<<V;
    return 0;
}
