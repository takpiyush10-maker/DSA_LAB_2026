#include<iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of collumns: ";
    cin>>cols;
    
    int mat[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"enter element of mat["<<i<<"] ["<<j<<"] :";
            cin>> mat[i][j];
        }
        cout<<endl;
    }
    cout<<"--------MATRIX--------";
    int sum = 0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if (i==j or i+j== 2){
                sum+=mat[i][j];
            }
            cout<<"sum of given matrix is =" <<sum;
        }
        cout<<endl;
    }
    

    return 0;
}