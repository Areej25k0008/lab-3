#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string t, a;
    float p;
public:
    Book() {
        t = "Unknown";
        a = "No Author";
        p = 0.0;
    }
    Book(string title, string auth, float pr) {
        t = title;
        a = auth;
        p = pr;
    }
    void display() {
        cout << "Title: " << t << ", Author: " << a << ", Price: $" << p << endl;
    }
};
int main() 
{
    Book b1;
    Book b2("1984", "Areej Hasan", 15.99);
    b1.display();
    b2.display();
    return 0;
}
