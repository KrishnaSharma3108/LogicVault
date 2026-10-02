#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Get the first element
  cout << cars.front() << "\n";

  // Get the last element
  cout << cars.back() << "\n";
  return 0;
}