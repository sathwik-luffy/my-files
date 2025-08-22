#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "sathwik";
    cout<<"name of the person is \n"<<name<<"\n";
    cout<<"length of the name of the person is :-"<<name.length();
    cout<<"name of the person is "<<name.substr(0,3);
    
    return 0;
}