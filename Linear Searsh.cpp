#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of family members: ";
    cin >> n;

    string names[n];
    int ages[n];

    // Input names and ages
    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of member " << i + 1 << ": ";
        cin >> names[i];

        cout << "Enter age of " << names[i] << ": ";
        cin >> ages[i];
    }

    string key;
    bool found = false;

    cout << "\nEnter name to search: ";
    cin >> key;

    // Linear Search
    for (int i = 0; i < n; i++) {
        if (names[i] == key) {
            cout << key << " was found and is aged "
                 << ages[i] << " years old." << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}
