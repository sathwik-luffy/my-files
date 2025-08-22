#include <iostream>

using namespace std;

int main() {
    int a =34;
    int* ptr;
    ptr = &a;
    cout<<*ptr<<endl;
    cout<<&a<<endl;
    cout<<ptr;
    return 0;
}