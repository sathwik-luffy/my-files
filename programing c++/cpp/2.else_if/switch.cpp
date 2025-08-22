#include <iostream>

using namespace std;

int main() {
    int age;
    cout<<"enter your age \n";
    cin>>age;
    switch (age)
    {
    case 12:
        cout<<"your 18";
        break;
    
    default:
    cout<<"you are "<<age;
        break;
    }
    return 0;
}