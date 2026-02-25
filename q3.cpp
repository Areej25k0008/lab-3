#include <iostream>
#include <string>
using namespace std;
class Car {
    string mod;
    int yr;
    double mil;
public:
    Car(string mod, int yr, double mil) 
	{
        this->mod = mod;
        this->yr = yr;
        this->mil = mil;
    }
    void updateMil(double mil) 
	{
        this->mil = mil;
    }
    void display() {
        cout << yr << " " << mod << " - Mileage: " << mil << endl;
    }
};
int main() {
    Car c1("BYD", 2022, 15000.5);
    c1.display();
    c1.updateMil(16200.8);
    cout << "Updated:" << endl;
    c1.display();
    return 0;
}
