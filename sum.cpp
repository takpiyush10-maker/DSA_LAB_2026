#include <iostream>
using namespace std;

// Function declaration
int sum(int a=0, int b=0);//parameters we can set default value

int main() {
    cout << "Let's run the function:\n";

    // Function call
    sum(1,23);//arguments


    return 0;
}

// Function definition
int sum(int a, int b) {
    cout << a + b << '\n';
    return a + b;
}