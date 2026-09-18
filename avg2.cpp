#include<iostream>
using namespace std;

int main()
{
    double a,b,c,sum = 0, avg = 0;
    cout<<"Enter three numbers:";
    cin>> a >> b >> c;
    sum = a+b+c;
    avg=sum/3;
    cout<<"Average of three numbers:"<<avg;
    return 0;
}