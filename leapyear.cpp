#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter year";
    cin>>year;
    if(year%100==0){
        if (year%400==0)
        cout<<"leap year";
        else 
        cout<<"not a leap year";
    
     } else {
        if(year%4==0) 
        cout<<"Leap year:";
        else
        cout<<"NOt a leap year";
        }
    return 0;
}