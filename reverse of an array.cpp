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

    int s=0,e=n-1;

    while(s<e){
        //swap start and end
        int temp = arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
    cout<<" Revese Array = { ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"}\n";

    return 0;
}