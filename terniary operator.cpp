//-----TERNIARY OPERATORS-----
//condition ? true run : false run ;

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age";
    cin>>age;

    (age>18) ? cout <<"eligible for vote" : cout <<"not eligible";
    return 0;
}