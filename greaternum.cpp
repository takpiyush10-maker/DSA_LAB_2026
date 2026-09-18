#include <iostream>
using namespace std;

int main() {
    int X, Y;

    cout << "Enter number X and Y:\n";
    cin >> X >> Y;

    if (X > Y) {
        cout << "X is greater number";
        cout<<X;
    }
    else if (X == Y) {
        cout << "Both are equal numbers";
        cout << X;
    }
    else {
        cout << "Y is greater number";
        cout <<Y;
    }

    return 0;
}
