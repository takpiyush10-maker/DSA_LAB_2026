#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,43,53,23,12,44,22};
    
    //first element is liye rakha hai kyuki agar
    //zero rakha or negative elements hue tab output 
    //me zero hi aayega

    int max=arr[0];

    for(int i=0;i<7;i++){
        if(arr[i]>max)

        max=arr[i];
    }
cout<<"maximum element of an array is: "<<max;
    return 0;
}