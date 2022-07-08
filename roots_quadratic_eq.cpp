// Finding the roots of quadratic equation
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c,x1,x2;
    cout<<"Enter the values of a,b,c, in a quadratic equation ";
    cin>>a>>b>>c;
    x1=(-b+sqrt(b^2-4*a*c))/(2*a);  //can add b*b and b*2
    x2=(-b-sqrt(b^2-4*a*c))/(2*a);

    cout<<"The root are "<<x1<<" and "<<x2;
    return 0;
}
