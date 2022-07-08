//Increment ans Decrement Operators
// Difference Between ++x and x++
// let x = 5
// y=++x;  this means that x + 1 = 6 and then y = 6
// y=x++;  this means that x + 1 = 6 and then y = 5

#include <iostream>
using namespace std;
int main()
{
int i=5,j;
j=i++;
cout<<j<<" "<<i<<endl;
int k=5,l;
l=++k;
cout<<l<<" "<<k<<endl;
int a=5,b;
b=2*++a + 2*a++;
cout<<b<<" "<<a<<endl;;
int c=5,d;
d=2*c++ + 2*c++;
cout<<d<<" "<<c<<endl;
return 0;
}
