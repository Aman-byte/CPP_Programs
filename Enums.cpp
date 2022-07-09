//Enums are used to define our own datatypes
// enums defines a set of constants under 1 name
#include <iostream>

using namespace std;
int main()
{
    enum day {mon, tue, wed, thurs, fri, sat, sun};
    //the days are assigned with values 0 for mon 1 for tue etc...
    day d;
    d=tue; // cannot do d=0;

    cout<<d<<endl; //should give 1 as output
    cout<<fri<<endl; //should give 4 as output
    return 0;
}

/* enum day {mon, tue=7, wed, thurs=10, fri, sat, sun};
the days are assigned with values 0 for mon 1 for tue etc...
day d;
d=tue; // cannot do d=0;

cout<<mon<<endl; // will be 1
cout<<tue<<endl; // will be 7
cout<<wed<<endl; // will be 8
cout<<fri<<endl; // friday will be 11, sat 12, sun 13

return 0;*/
