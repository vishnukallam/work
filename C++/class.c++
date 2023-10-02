#include<iostream>
using namespace std;
class item{
    protected:
        char name[10];
        float prize;
        int quantity;
    public:
        void getinput(){
            cout << "Enter name of the item: ";
            cin >> name;
            cout << "enter prize of the item: ";
            cin >> prize;
            cout << "enter quantity of the item: ";
            cin >> quantity;
        }

};
class pack : public item{
        float discount;
    public:
        void getdata(){
            cout << "Enter how much discount do you want for item :";
            cin >> discount;
            prize = prize * discount;
        }
            void putoutput(){
            cout << "the name of the item: "<< name << endl;
            cout << "the prize of the item: "<< prize << endl;
            cout << "the quantity of the item: "<< quantity << endl;
            cout << "the discount of the item: "<< discount << endl;
        }
};
#include<iostream>
int main(){
    item a;
    pack b;
    a.getinput();
    b.getdata();
    b.putoutput();
    return 0;
}