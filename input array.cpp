#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int arr[n];
    cout<<"Enter the size of an array: ";
    cin >> n;
    
    cout<<"Enter "<<n<<" elements of an array: ";
    int i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    cout<<"your array is:";
    for(i=0;i<n;i++){
        cout<<arr[ i ]<<"\n";
    }

    return 0;
}