#include <iostream>
#include <string>   // Include string header for using string
using namespace std;

// Class declaration: MagicTeaKettle from Amritsar (Punjabi style)
class MagicTeaKettle {
public:
    void boilWater();              // Boil water magically
    void pourTea(string person);  // Pour tea with funny Punjabi-English style
    void tellJoke();              // Tell a funny Amritsar tea-time joke
};

// Function definitions outside class

void MagicTeaKettle::boilWater() {
    cout << "Oye hoye! Paani boil ho gaya, full josh vich!" << endl;
}

void MagicTeaKettle::pourTea(string person) {
    cout << "Aiehho! Pouring hot tea for " << person 
         << ". Haule haule, it's hotter than Amritsar di garmi!" << endl;
}

void MagicTeaKettle::tellJoke() {
    cout << "Sun veere, why did tea bag go school in Amritsar?" << endl;
    cout << "Because oh banna chahta si tea-cher! Haha, full masti!" << endl;
}

int main() {
    MagicTeaKettle kettle;
    kettle.boilWater();
    kettle.pourTea("Bapu ji");
    kettle.pourTea("Chacha ji");
    kettle.tellJoke();

    cout << "Yaad rakh, Amritsar vich chai serious cheej hai, but masti vi zaroori hai!" << endl;
    return 0;
}
