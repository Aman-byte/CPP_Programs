// Finding distance between two pionts
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double distance, x1,x2, y1,y2;
    cout<<"Enter the coordinates of first point: ";
    cin>>x1>>y1;
    cout<<"Enter the coordinates of second point: ";
    cin>>x2>>y2;

    distance = sqrt (pow ((x2-x1),2)) + (pow ((y2-y1),2));
    cout<<"The distance between the two points is: "<<distance<<endl;
}
