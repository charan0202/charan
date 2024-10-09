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
    virtual void work(){
        cout<<Name<<"is dancing, playing"<< endl;
    }
};

class developer :public employee{
public:
    string Program;
    developer(string name, string sex , int age, string program)
        :employee(name, sex, age)
    {
        Program = program;
    }
    void fixbug(){
        cout<<getName()<<"fix bug using"<<Program<<endl;
    }
    void work(){
        cout<<getName()<<"is dancing"<< endl;
    }    
};

class teacher:public employee{
public:
    string Subject;
    teacher(string name, string sex , int age, string subject)
        :employee(name,sex,age)
    {
        Subject = subject;
    }
    void lesson(){
        cout<<getName()<<"is preparing"<<Subject<< endl;
    }
};

int main(){

    //employee employee1 = employee("siranjeev","male",10);
    
    //employee1.askforpromotion();
    developer d = developer("siranjeev","male",10,"python");
    
    teacher t = teacher("siranjeev","male", 13,"physics");
    //t.lesson();
    t.work();
    d.work();

    employee* e1 = &d;
    employee* e2 = &t;

    e1->work();



    
}
