#include<iostream>
using namespace std;

class employee{
public:
    string Name ;
    string Sex;
    int Age;

    void call(){
        cout<<"name -" << Name << endl;
        cout<<"sex -" << Sex << endl;
        cout<<"age -" << Age << endl;

    }

    employee(string name, string sex, int age){
        Name = name;
        Sex = sex;
        Age = age;
    }
};

int main(){

    employee employee1 = employee("siranjeev","male",10);
    employee1.call();
}
