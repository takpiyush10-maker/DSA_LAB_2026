#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,temp;
    cout <<"Enter a";
    cin>>a;
    cout <<"Enter b";
    cin>>b;
    temp = a;
  a=b;
    b=temp;
    cout <<"a :"<< a <<"\n"<<"b :"<< b <<endl;
    return 0;
}