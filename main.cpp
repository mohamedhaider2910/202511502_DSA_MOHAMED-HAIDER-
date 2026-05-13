
#include <iostream>
using namespace std;

int main()
{
    int keynumber = 999;
    int phonenumbers[3];
    bool found = false;

    // filling numbers
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter your phone number: ";
        cin >> phonenumbers[i];
    }

    // linear search
    for (int i = 0; i < 3; i++)
    {
        if (phonenumbers[i] == keynumber)
        {
            cout << "Esther number found" << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Number not found" << endl;
    }

    return 0;
}
