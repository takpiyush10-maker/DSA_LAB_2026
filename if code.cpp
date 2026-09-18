#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"Enter your name:"<<"\n";
    cin >>name;

    cout<<"Enter your age:";
    cin>>age;

    if (age>18) {
        cout<<"congratulation you are eligible for vote:";
    } else {
        cout<<"not eligible";
    }
    return 0;
}