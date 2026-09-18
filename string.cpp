#include<iostream>
using namespace std;

int main()
{
    //four type to decleare any string
    char name[10];
    char name2[10] = {'G', 'o','\0', 'l', 'u','\0'};
    char name3[] = {'G', 'o', 'l', 'u','\0'};
    char name4[] = "Golu";//Null character automatic lag jata hai

    //jaha '/0' yeh aaya waha line of string end ho jayga example
    // "\0" end of string.
    cout<<name2<<endl;

    cout<<name3<<endl;

    cout<<name4<<endl;

    return 0;
}