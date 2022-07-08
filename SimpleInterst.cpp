// Finding simple interest
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float SI,r,p,t;
    cout<<"Enter the Rate Of Interest ";
    cin>>r;
    cout<<"Enter the time ";
    cin>>t;
    cout<<"Enter the principal ";
    cin>>p;
    SI=(p*r*t)/100;
    cout<<"The Simple Interest is "<<SI;
    return 0;
}
// formula: PRT/100
