#include<iostream>
using namespace std;

class abstractemployee{
    virtual void askforpromotion()=0;
};

class employee:abstractemployee{
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

    void askforpromotion(){
        if (Age > 30){
            cout<<"you got promoted"<< endl;
        }else{
            cout<<"not promoted"<<endl;
        }
    }
};

int main(){

    employee employee1 = employee("siranjeev","male",10);
    
    employee1.askforpromotion();
    
}
