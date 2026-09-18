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
int target;
cout << "Enter the value you want to find: ";
cin >> target;

//loop start hone se phele is found ko false se initiliaze kiya hai kyuki abhi target mila nhi hai.
bool found = false;

for (int i = 0; i < n; i++) {
    if (target == arr[i]) {
        cout << "The element is present in array at index: " << i;
        found = true;
        break;
    }
}

//Agar found abhi bhi false hai, means target poore array mein nahi mila.
if (!found) {
    cout << "Target is not found.";
}

    return 0;
}