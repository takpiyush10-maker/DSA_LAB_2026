//Call by values in function.

#include<iostream>
using namespace std;

void swap(int num1, int num2);
int main()
{
    int a, b;
    cout<<"Enter value of a:\n";
    cin>>a;
    cout<<"Enter value of b:\n";
    cin>>b;

    cout<<"Before:\na -->"<<a<<"\n";
    cout<<"b -->"<<b<<"\n";
 
    swap(a, b);    
    
    cout<<"After:\na -->"<<a<<"\n";
    cout<<"b -->"<<b<<"\n";
    return 0;
}


void swap(int num1, int num2)
{
    int temp = num1;
    num1=num2;
    num2=temp;
    cout<<"Inside:\na -->"<<num1<<"\n";
    cout<<"b -->"<<num2<<"\n";
}
