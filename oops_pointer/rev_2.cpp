#include <iostream>
using namespace std;
class rectangle
{
    public:
    void area(){
        cout<<"area of rectangle"<<endl;
    }
};
class cuboid:public rectangle
{
    public:
    void volume(){
        cout<<"cuboid volume"<<endl;
    }
};
int main(){

    cuboid c;
    rectangle *p=&c;
    p->area();
  //  p->volume(); not work
}