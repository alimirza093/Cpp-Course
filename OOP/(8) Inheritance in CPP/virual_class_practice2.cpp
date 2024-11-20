#include <iostream>
using namespace std;

class device
{

protected:
    string deviceName;

public:
    void setName(string str)
    {
        deviceName = str;
    }
    void getName(void)
    {
        cout << "Device Name " << deviceName << endl;
    }
};
class computer : virtual public device
{
protected:
    string cpu;

public:
    void setCpuDetail(string s)
    {
        cpu = s;
    }
    void getCpuDetail(void)
    {
        cout << "CPU of Computer is " << cpu << endl;
    }
};
class laptop : virtual public computer
{
protected:
    int batteryLife;
    public:

    void setBatteryLife(int bl){
        batteryLife = bl;
    }

    void getBatteryLife(void){
        cout<<"Battery life of Laptop is "<<batteryLife<<endl;
    }
};

class hybrid : public laptop{

public:
void getDisplay(void){
 getName();   
 getCpuDetail();
}
};

