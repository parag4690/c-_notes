#include <iostream>
using namespace std;
class complex 
{
    private:
    int real;
    int img;
    public:
    complex (int r=0, int i=0){
        real=r;
        img=i;
    }

    complex operator-(complex c){
        complex temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }
    void display(){
        cout<<real<<"-i"<<img<<endl;
    }
};
int main(){
    complex c(3,4),c1(2,3),c3;
    c3=c-c1;
    c3.display();
}