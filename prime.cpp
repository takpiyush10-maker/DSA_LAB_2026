#include<iostream>
using namespace std;

int main()
{
    int n;
    int count=0;

    cout<<"enter any number:";
    cin >>n;
    
    for (int i=1;i<=n;i++){
        if (n%i == 0)
        count++;
    }
    cout<<(count==2 ? "prime number\n" : "not a prime number:\n");

    return 0;
}
