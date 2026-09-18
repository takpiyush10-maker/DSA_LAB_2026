#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin >> n;
    int arr[n];
    
    cout<<"Enter "<<n<<" elements of an array: ";
    int i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    
    //store
   // int temp = arr[0];

    int k;
    cout<<"Enter the value of k to rotate from left k elements";
    cin>>k;
    k = k%n;
//k = k % n; ka matlab hai k ko array ke size ke according chhota kar dena. Annotation 1
//Agar n = 5 aur k = 7:
//k = 7 % 5;  // k becomes 2
    //shift
    //outer loop is for k;
    for(int r=0;r<k;r++){
        int temp = arr[0];
    
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}


    cout<<"your array is:";
    for(i=0;i<n;i++){
        cout<<arr[ i ]<<"\n";
    }

    return 0;
}