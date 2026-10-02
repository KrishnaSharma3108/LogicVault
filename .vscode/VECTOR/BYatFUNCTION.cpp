#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Get the second element
  cout << cars.at(1) << "\n";

  // Get the third element
  cout << cars.at(2) << "\n";
  return 0;
}
