#include <iostream>
#include <string>
using namespace std;

class person{

string name;
int age;

public:

void setInfo(int a , string s){
    age = a;
    name = s;
}
void getInfo(void){
cout<<"Name = "<<name<<endl;
cout<<"Age = "<<age<<endl;
}
};

class student : virtual public person{
    int S_id;
    public:

    void setsId(int a){
        S_id = a;
    }
    void getsId(void){
        cout<<"Student ID = "<<S_id<<endl;
    }
};

class employee : virtual public person{
    int E_id;
    public:
    void seteId(int a){
        E_id = a;
    }
    void geteId(void){
        cout<<"Employee ID = "<<E_id<<endl;
    }
};

class display : public student , public employee{

public:
void displayData(void){
    getInfo();
    getsId();
    geteId();
}

};



int main() {

display d1;
d1.setInfo(20 , "ALI");
d1.setsId(100);
d1.seteId(10);
d1.displayData();
return 0;
}