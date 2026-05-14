#include <iostream>
using namespace std;

int congratulate() {
    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Congratulations " << name << "!" << endl;
}

int main() {
    congratulate();
    return 0;
}
