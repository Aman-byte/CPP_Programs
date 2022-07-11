//Switch Statement
// It can provide you any output inside the swithc statement, if you press 3 it will give you Ferrari, 2 for Audi and so on...
# include<iostream>
using namespace std;

int main()
{
    int car;
    cout<<"Enter car number";
    cin>>car;
    switch(car)
    {
        case 1: cout<<"Mercedes"<<endl;
            break;
        case 2: cout<<"Audi"<<endl;
            break;
        case 3: cout<<"Ferrari"<<endl;
            break;
        case 4: cout<<"Mclaren"<<endl;
            break;
    }
    return 0;
}
