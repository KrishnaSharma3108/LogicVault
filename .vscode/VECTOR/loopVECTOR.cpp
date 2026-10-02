#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  
  for (int i = 0; i < cars.size(); i++) {
    cout << cars[i] << "\n";
  }
  
  return 0;
}
