#include <iostream>
using namespace std;
class Car {
public:
    string brand;
    int speed;

    void displayDetails() {
        cout << "Brand: " << brand << " Speed: " << speed << " km/h" << endl;
    }
};
int main() {
    Car car1;  
    car1.brand = "Toyota -->";
    car1.speed = 320;

    car1.displayDetails();
    return 0;
}
