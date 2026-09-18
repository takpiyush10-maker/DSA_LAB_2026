#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6};

    //store
    int temp = arr[0];

    //shift
    for(int i=1;i<6;i++){
        arr[i-1]=arr[i];
    }
    //last element first
    arr[6-1]= temp;

    //print array
    cout<<"Array = { ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<", ";
    }
    cout<<"}\n";

    return 0;
}