#include<iostream>
class MyClass {
public:
    int data;
    MyClass(int d) : data(d) {}
    void printData() {
        std::cout << "Data: " << data << std::endl;
    }
};
int main() {
    MyClass obj(42);
    MyClass* ptr = &obj;
    ptr->printData(); 
    (*ptr).data = 100; 
    ptr->printData();
    return 0;
}