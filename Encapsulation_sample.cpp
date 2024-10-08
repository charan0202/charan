#include<iostream>
using namespace std;

class employee{
private:
    string Name ;
    string Sex;
    int Age;
public:

    void call(){
        cout<<"name -" << Name << endl;
        cout<<"sex -" << Sex << endl;
        cout<<"age -" << Age << endl;

    }

    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setSex(string sex){
        Sex = sex;
    }
    string getSex(){
        return Sex;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
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

    employee1.setAge(39);
    cout<<employee1.getAge()<< endl;
    
}
