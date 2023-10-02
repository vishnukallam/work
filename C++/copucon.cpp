#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        A(){}
        A(int num){
            a = num;
        }
        A(A &obj){
            cout<<"Copy Constructor Called"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The value is  : "<<a<<endl;
        }
};

int main(){
    A x(10),y(20),z(25),k;
    x.display();
    y.display();
    z.display();
    k = z;
    k.display();

    A p(z);
    p.display();
}