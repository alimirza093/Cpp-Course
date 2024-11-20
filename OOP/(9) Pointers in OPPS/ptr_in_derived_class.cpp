#include <iostream>
using namespace std;

class base
{
public:
    int var_base;
    void display()
    {
        cout << "The value of var_base is " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "The value of var_base is " << var_base << endl;
        cout << "The value of var_derived is " << var_derived << endl;
    }
};

int main()
{
  base *base_class_ptr;
  derived obj_derived;
  base_class_ptr = &obj_derived; // It is a pointer of base class pointing to derived class object
  base_class_ptr->var_base = 35;
  base_class_ptr->display(); //It will call the display function of base class instead of derived class because it is a pointer of base class


//   base_class_ptr->var_derived = 135; This syntax is invalid because base class can't accesss the member of derived classs

derived *derived_class_ptr;
derived_class_ptr = &obj_derived;
derived_class_ptr->var_derived = 100;
derived_class_ptr->display();
//derived_class_ptr->var_base = 100;This is valid syntac because We can access the variable of base class in derived class using inheritence 
return 0;
}