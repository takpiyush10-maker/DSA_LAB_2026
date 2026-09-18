#include<iostream>
using namespace std;

int main()
{
    int arr[] = {12,56,89,99,100,211};
    int target = 100;
    int n=sizeof(arr)/sizeof(arr[0]);

    int ans = -1;
    int s=0, end=n-1;

    while(s<=end){
        int mid = (s+end)/2;
        if(arr[mid]==target){
            ans = mid;
            break;
        }else if(arr[mid]<target){
            s = mid+1;

        }else if(arr[mid]>target){
            end = mid-1;
        }
    }
cout<<"the value is: "<<ans<<"\n";
    return 0;
}