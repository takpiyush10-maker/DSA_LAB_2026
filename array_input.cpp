#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of an array:";
    cin>>n;
    
    cout<<"Enter elements of an array:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    
    cout << "Your array is: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }


    return 0;
}