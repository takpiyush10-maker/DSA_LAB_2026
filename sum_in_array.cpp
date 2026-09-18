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
    int sum=0;
    
    cout << "The sum of array is: ";

    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<sum<<"\n";
    int size=0;
    size=sizeof(arr);
    cout<<"The size of an array:"<<size/sizeof(arr[0]);



    return 0;
}