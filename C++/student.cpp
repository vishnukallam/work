#include<iostream>
//using namespace sdt;
class MyClass {
private:
    SomeClass obj;
public:
    MyClass(SomeClass inputObj) : obj(inputObj) {
    }
    void setObj(SomeClass inputObj) {
        obj = inputObj;
    }
        SomeClass getObj() {
        return obj;
    }
};
SomeClass someObject;
MyClass myInstance(someObject);
