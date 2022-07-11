Program to Demonstrate Short Circuit
//in "and" operation if first condition is false the second condition will not be checked.
//in "or" if first of the condition is false the other condition will not be checked.

#include <iostream>
using namespace std;
int main()
{
int a=10,b=5,i=5;
if(a>b && ++i<=b)
{
}
cout<<i<<endl;
if(a<b || ++i<=b)
{
}
cout<<i<<endl;
}
