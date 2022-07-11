# include<iostream>
# include<math.h>
using namespace std;

int main()
{
    int m1,m2,m3,total;
    float avg;
    cout<<"Enter marks of 3 subjects";
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    avg=total/3.0; // 3.0 because of float
    if(avg>= 60)
        cout<<"A"<<endl;
    else if(avg>=35 && avg < 60)
        cout<<"B"<<endl;
    else
        cout<<"C"<<endl;
    return 0;
}

/* How to take only the average of three subjects
 * float subject1, subject2, subject3, total;
    float Avg;
    cout<<"enter the marks in each subjects";
    cin>>subject1>>subject2>>subject3;
    total=subject3+subject2+subject1;
    Avg = total/3.0;
    cout<<Avg;
    return 0;
    */




 
