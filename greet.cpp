#include <iostream>
#include <string>
using namespace std;

void greet(string name)
{
    cout << "Hello, " << name
         << "! Welcome to collaborative coding." << endl;
}

int main()
{
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    if (name.empty()) {
        cout << "Name cannot be empty!" << endl;
        return 0;
    }

    greet(name);

    return 0;
}