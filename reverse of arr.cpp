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

    cout<<" Revese Array = { ";
   for (int i = n - 1; i >= 0; i--) {
    cout << arr[i] << " ";
}
    cout<<"}\n";

    return 0;
}