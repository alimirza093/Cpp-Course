#include <iostream>
using namespace std;

class CWH{
    protected:
    string title;
    int rating;
    public:
    CWH(string t , int r){
        title = t;
        rating = r;
    }
    virtual void display(void){
        cout<<"This is the display function of Base Class"<<endl;

    }
};
class CWHvideo : public CWH{
float videoLength;

public:

CWHvideo(float vLen , string t , int r):CWH(t,r){
videoLength = vLen;
}
void display(void){
    cout<<"This is an amazing video with title "<<title<<endl;
    cout<<"Length of this video is "<<videoLength<<" Minutes"<<endl;
    cout<<"Rating of this video is "<<rating<<endl;
}
};

class CWHblog : public CWH{
float words;

public:

CWHblog(int w , string t , int r):CWH(t,r){
    words = w;
}
void display(void){
    cout<<"This is an amazing Blog with title "<<title<<endl;
    cout<<"Words of this Blog is "<<words<<endl;
    cout<<"Rating of this Blog is "<<rating<<endl;
}
};

int main() {
int words , rating;
float vl;
string title;
words = 200;
rating = 3;
vl = 20; 
title = "Virtual Functions Example";
CWHvideo virtual_func_video(vl , title ,rating);
title = "Virtual Functions Example in c++";
rating = 4;
CWHblog virtual_func_blog(words , title , rating);
CWH *ptr[2];
ptr[0] = &virtual_func_video;
ptr[1] = &virtual_func_blog;
ptr[0]->display();
ptr[1]->display();
return 0;
}