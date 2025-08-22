#include <iostream>
#include<string>

using namespace std;

class employee {
 public:
 string name;
 int salary;
 employee(string n,int s,int sp){
    this->name = n;
    this->salary = s;
    this->secreate_pasword =sp;

 }
 void printDetails()
     {
         cout << "The name of our first employee is \n" << this->name << "\nand his salary is \n" << this->salary << " Dollars" << endl;
     }
     void getsecreat_password(){
        cout<<"the screate password is :-"<<this->secreate_pasword;
     }
     private:
     int secreate_pasword;
};
int main()
    {

        employee sat("sathwik",2100,2121);
        // sat.name ="sathwik";
        // sat.salary= 21000;
        sat.printDetails();
        sat.getsecreat_password();
        


    
    return 0;
}