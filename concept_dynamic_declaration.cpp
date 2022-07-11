/*Dynamic Declaration
Here despite of delcaring the variables in the starting you can declare a variable in if statement. 
And after the if statement the variable allocated in it will be deleted.
This is very useful in the case where you need a variable to excecute only once throughout the program.
*/

#include <iostream>
using namespace std;
int main()
{
int a=10,b=5;
if(true)
{
int c=a+b;
cout<<c<<endl;
}
{
int d=a-b;
if(true)
{
cout<<d<<endl;
}
}
if(int e=a*b)
{
cout<<e<<endl;
}
}
