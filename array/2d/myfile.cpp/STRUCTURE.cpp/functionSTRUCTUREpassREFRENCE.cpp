#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

void updateAge(Student &s, int newAge) {
    
    s.age = newAge; 
}

int main() {
    Student student1 = {"KRISHNA", 18};
    cout<<"name "<<student1.name<<",age"<<student1.age<<endl;
    updateAge(student1, 25); 
    cout << "Updated Age: " << student1.age << endl;
    return 0;
}
