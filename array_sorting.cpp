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

   //Check array sort;
   //we use loop 0 to n-1 in array sort because 
   int isSorted = 1;
    for(int i=0;i<n-1;i++){
        if(arr[i+1] < arr[i]){
            isSorted = 0;
            break;
        }
    }

    if(isSorted==0){
        cout<<"Array is not sorted:";
    }else{
        cout<<"Array is sorted:";
    }
    return 0;
}