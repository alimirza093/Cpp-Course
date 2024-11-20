#include <iostream>
using namespace std;
void convertViews(int views){
    if (views>=1000 && views<=1000000)
    {
        views = views/1000;
        cout<<"Views = "<<views<<"k"<<endl;
    }
    else if(views>=1000000 && views<=1000000000){
        views = views/1000000;
        cout<<"Views = "<<views<<"M"<<endl;
    }
    else if(views>=1000000000){
        views = views/1000000000;
        cout<<"Views = "<<views<<"B"<<endl;

    }
    else{
        cout<<"Views = "<<views<<endl;
    }
}
int main(){
int views;
cout<<"Enter Views"<<endl;
cin>>views;
convertViews(views);
return 0;
}
