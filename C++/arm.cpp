#include<iostream>
using namespace std;
class a{
    public:
        int i = 7;
        void show(){
            cout<< i;
        }
};
class b: virtual public a{
    public :
        int j;
};
class c: virtual public a{
    public:
    int k;
};
class d : public b, public c{
    public:
    int j;
};
int main(){
    d object;
    object.i = 6;
    object.show();
    return 0;
}