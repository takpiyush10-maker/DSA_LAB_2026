#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout <<"Enter length of an array: \n";
    cin >>n;
    int arr[n];
    
    cout <<"Enter elements of an array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array = { ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"}\n";

    int count_even=0;
    int count_odd=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
        count_even++;
        else
        count_odd++;

    }
    cout<<"No. of Even elements = "<<count_even<<"\n";
    cout<<"No. of odd elements = "<<count_odd<<"\n";

    return 0;
}