#include <iostream>
using namespace std;

// Example of void function with parameters
void printSum(int x, int y) {
    cout << "Sum = " << x + y << endl;
}

int main() {
    cout << "Answer: YES, a void function CAN take parameters." << endl;
    cout << endl;
    cout << "Explanation:" << endl;
    cout << "- 'void' means the function returns NO value" << endl;
    cout << "- But it CAN receive parameters (inputs)" << endl;
    cout << endl;
    cout << "Example:" << endl;
    cout << "void printSum(int x, int y) {" << endl;
    cout << "    cout << x + y << endl;" << endl;
    cout << "}" << endl;
    cout << endl;

    // Calling the void function with parameters
    int a = 10, b = 20;
    printSum(a, b);

    return 0;
}
