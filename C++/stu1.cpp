#include <iostream>

// Define a custom class
class MyClass
{
public:
	int value;
	MyClass(int val) : value(val) {}
};

// Binary operator as a non-member function
MyClass operator+(const MyClass &obj1, const MyClass &obj2)
{
	return MyClass(obj1.value + obj2.value);
}

int main()
{
	// Create objects of MyClass
	MyClass obj1(10);
	MyClass obj2(20);

	// Use the binary operator
	MyClass result = obj1 + obj2;

	// Display the result
	std::cout << "Result: " << result.value << std::endl;

	return 0;
}
