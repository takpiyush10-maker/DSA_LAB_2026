#include<iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Select a number as a day from 1 to 7:";
    cin>>day;
    if(day < 1 || day > 7){
        cout << "Invalid day number\n";
        return 0;
    }
    switch(day){
        case 1:{
            cout <<"Monday"<<"\n";
            break;
        }
        case 2:{
            cout <<"Tuesday"<<"\n";
            break;
        }
        case 3:{
            cout <<"Wednesday"<<"\n";
            break;
        }
        case 4:{
            cout <<"Thrusday"<<"\n";
            break;
        }
        case 5:{
            cout <<"Friday"<<"\n";
            break;
        }
        case 6:{
            cout <<"Saturday"<<"\n";
            break;
        }
        case 7:{
            cout <<"Sunday"<<"\n";
            break;
        }
        default:
            cout << "Invalid day number\n";
            break;
       
    }
    return 0;
}

// every case should be unique
//we can only pass int and char we cant use floating value in switch case
//cases should be unique 
//break is not necessary but if we cant give break to it then it will go as far jab tak usko break nhi milega.
//default is not necessary but as a good programer its our responsibility so please use 
//defalt for extra conditions
