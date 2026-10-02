#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars.empty();  // Outputs 0 (not empty)
  return 0;
}