//this will read the full name
#include <iostream>
using namespace std;
int main()
{
    string name;
    cout<<"May I Know Your Name? ";
    getline(cin,name);
    cout<<"Hello "<<name;
    return 0;
}

//to print the first name only use cin instead of getline

// cin>>name; //  >>  is an extraction operator
// cout<<"Hello "<<name;
