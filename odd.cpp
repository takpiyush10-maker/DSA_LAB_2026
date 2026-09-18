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
  
   
    
    int size=0;
    size=sizeof(arr);
    cout<<"The size of an array:"<<size/sizeof(arr[0])<<"\n";
    
   
    
   cout << "even = {";

for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
        cout << arr[i] << " ";
    }
}

cout << "}\n";


cout << "odd = {";

for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
        cout << arr[i] << " ";
    }
}

cout << "}\n";



    return 0;
}