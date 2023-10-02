#include <iostream>
using namespace std;

class DISTANCE {
private:
    int feet;
    float inches;

public:
    void setData(int f, float in) {
        feet = f;
        inches = in;
    }

    void showData() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }

    DISTANCE addDistance(DISTANCE d2) {
        DISTANCE result;
        result.feet = feet + d2.feet;
        result.inches = inches + d2.inches;
        if (result.inches >= 12.0) {
            result.inches -= 12.0;
            result.feet += 1;
        }
        return result;
    }
};

int main() {
    DISTANCE distance1, distance2, sumDistance;

    int feet1, feet2;
    float inches1, inches2;

    cout << "Enter the first distance:" << endl;
    cout << "Feet: ";
    cin >> feet1;
    cout << "Inches: ";
    cin >> inches1;

    cout << "Enter the second distance:" << endl;
    cout << "Feet: ";
    cin >> feet2;
    cout << "Inches: ";
    cin >> inches2;

    distance1.setData(feet1, inches1);
    distance2.setData(feet2, inches2);

    sumDistance = distance1.addDistance(distance2);

    cout << "First distance: ";
    distance1.showData();
    cout << "Second distance: ";
    distance2.showData();
    cout << "Sum of distances: ";
    sumDistance.showData();

    return 0;
}

