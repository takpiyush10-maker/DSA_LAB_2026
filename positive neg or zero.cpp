#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter num";
    cin>>num;
    if(num>0){
        cout<<"+ve";
    } 
    else if (num<0){
        cout<<"-ve";
    }
    else if(num==0) {
        cout<<"ZERO";
    }
    return 0;
}