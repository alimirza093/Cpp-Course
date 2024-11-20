#include <iostream>
using namespace std;

class base
{
public:
    int base_var;
    virtual void display()
    {
        cout << "The value of base_var is " << base_var << endl;
    }
};
class derived : public base
{
    public:
    int derived_var;
    void display()
    {
        cout << "The value of derived_var is " << derived_var << endl;
    }
};

int main()
{
    derived derived_class_obj;
    base *base_class_ptr = &derived_class_obj;
    base_class_ptr->display();
    
    return 0;
}