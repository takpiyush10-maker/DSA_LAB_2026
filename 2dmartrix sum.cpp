#include<iostream>
using namespace std;

int main()
{
    //array of array = 2d array.
    //matrix
    int rows, cols;

    cout <<"Enter number of rows =";
    cin >> rows;
    cout <<"Enter number of cols =";
    cin >> cols;

    int arr[rows][cols];

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<< "Enter element of ["<< i <<"]["<< j <<"]";
            cin>> arr[i][j];
        }
        cout<<endl;
    }
    int sum = 0;
    cout<<"------Matrix Sum------"<<endl;
     for(int i=0; i<rows; i++){
         for(int j=0; j<cols; j++){
              sum += arr[i][j];
             }
              
    }

cout<<"Sum of input matrix is ="<<sum;
    
    return 0;
}