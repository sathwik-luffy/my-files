#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Welcome to the program!" << endl;

    string username, password;
    cout << "Please sign in." << endl;
    cout << "Username: ";
    getline(cin, username);
    cout << "Password: ";
    getline(cin, password);

    // Simple check (for demonstration purposes)
    if (username == "admin" && password == "1234") {
        cout << "Sign in successful. Hello, " << username << "!" << endl;
    } else {
        cout << "Sign in failed. Please try again." << endl;
    }

    return 0;
}

