#include <iostream>
using namespace std;

class base
{
public:
    int var_base;
   virtual void display()
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
    base_class_ptr = &obj_derived;
    base_class_ptr->var_base = 35;
    base_class_ptr->display();
return 0;
}