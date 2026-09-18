#include<iostream>
#include<string>
using namespace std;

int main()
{
    int age;
    string name;
    
    cout <<"Enter your name:";
    cin.ignore();
    getline(cin, name);

    cout <<"Enter your age";
    cin >>age;

    cout <<"Name :"<<name <<"\n"<<"Age :"<< age <<"\n";
    return 0;
}