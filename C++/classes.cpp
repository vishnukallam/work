#include<iostream>
using namespace std;
class Box
{
private:
  double length {1.0};
  double width {1.0};
  double height {1.0};
public:
  // Constructors
  Box(double lv, double wv, double hv);
  explicit Box(double side);               
  Box() = default;                         
  double volume();
};
Box::Box(double lv, double wv, double hv) : length {lv}, width {wv}, height {hv}
{
  cout << "Box constructor 1 called." << endl;
}
Box::Box(double side) : Box{side, side, side}
{
  cout << "Box constructor 2 called." << endl;
}
#include <iostream>
int main()
{
  Box box1 {2.0, 3.0, 4.0};           
  Box box2 {5.0};               
  cout << "box1 volume = " << box1.volume() << endl;
  cout << "box2 volume = " << box2.volume() << endl;
}