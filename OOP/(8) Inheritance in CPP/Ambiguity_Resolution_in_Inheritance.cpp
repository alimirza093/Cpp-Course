#include <iostream>
using namespace std;

class base1{

public:

void print(){
    cout<<"How are you?"<<endl;
}


};

class base2{


public:

void print(){
    cout<<"Kesy ho?"<<endl;
}

};


class derived : public base1 , public base2{
    int a;
public:

void print(){
    base1 :: print();
    // base2 :: print();
}

};

class b{

public:

void say(){

cout<<"Hello world"<<endl;

}

};


class d : public b{
    
public:

void say(){

cout<<"Hello world 2"<<endl;

}

};


int main() {

// Ambiguity 1

// base1 b1;
// b1.print();


// base2 b2;
// b2.print();

// derived d;
// d.print();

//Ambiguity 2
// b base;
// base.say();
// It will overright its own function function by inherited function
d derived;
derived.say();
return 0;
}