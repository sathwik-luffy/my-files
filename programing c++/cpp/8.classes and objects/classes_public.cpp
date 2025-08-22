#include <iostream>
#include<string>

using namespace std;

class employee {
 public:
 string name;
 int salary;
 employee(string n,int s){
    this->name = n;
    this->salary = s;

 }
 void printDetails()
     {
         cout << "The name of our first employee is \n" << this->name << "\nand his salary is \n" << this->salary << " Dollars" << endl;
     }
};
int main()
    {

        employee sat("sathwik",2100);
        // sat.name ="sathwik";
        // sat.salary= 21000;
        sat.printDetails();
        


    
    return 0;
}