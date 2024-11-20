// #include <iostream>
// using namespace std;

// class employee{


// public:
// float sallery = 20000.0;

// int id;
// employee(){}
// employee(int inpId){

// id = inpId;

// }

// };

// // The default Visibility mode is Private

// // If the Visibility mode is Private the Public members of base class become private members of derived class

// // If the Visibility mode is Public the Public members of base class become Public members of derived class

// // Private members of base class are not inheritable

// class programmer : public employee{
// public:
// programmer(int inpID , int sall){

// id = inpID;
// sallery = sall;

// }
// void show(){
//     cout<<"ID = "<<id<<" and salley = "<<sallery<<endl;
// }


// };

// int main() {


// employee Ali(76);


// cout<<Ali.id<<endl;;

// programmer alii(7 , 98.8);
// alii.show();
// cout<<alii.id<<endl;
// cout<<alii.sallery<<endl;


// return 0;
// }
#include <iostream>
using namespace std;

class computer_student{

public:

int rollno;
float marks;

computer_student(){
    
}
computer_student(int r, float m){
marks = m;
rollno = r;
}

};

class physics_student : public computer_student{
public:
physics_student(int ro , float ma){
    marks = ma;
    rollno = ro;
}
void show(void){
cout<<"Roll no of physics student is "<<rollno<<endl;
cout<<"Marks of physics student is "<<marks<<endl;
}
};

int main() {
computer_student Ali(337 , 97.3);
cout<<"Roll no of computer students are "<<Ali.rollno<<endl;
cout<<"Marks of computer students are "<<Ali.marks<<endl;

physics_student amir(336 , 90.5);
amir.show();
return 0;
}