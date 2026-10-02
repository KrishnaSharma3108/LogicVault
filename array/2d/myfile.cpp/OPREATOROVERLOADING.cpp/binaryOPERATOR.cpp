#include <iostream>
using namespace std;

class Number {
private:
    int x;

public:
    // Parameterized constructor
    Number(int value) {
        x = value;
    }

    // Overload the + operator
    Number operator+(const Number& obj) {
        return Number(x + obj.x);
    }

    // Display function
    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    Number num1(10);     // First object with value 10
    Number num2(20);     // Second object with value 20

    Number result = num1 + num2;  // Using overloaded + operator

    cout << "First number: ";
    num1.display();

    cout << "Second number: ";
    num2.display();

    cout << "Result after addition: ";
    result.display();

    return 0;
}
