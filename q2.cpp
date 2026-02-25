#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string n;
    int* grd;
    Student(string name, int g) {
        n =name;
        grd=new int(g);
    }
  
    Student(const Student &obj) {
        n=obj.n;
        grd=new int(*obj.grd);
    }
    ~Student() {
        delete grd;
    }
    void show() 
	{
        cout <<n<<" Grade:"<<*grd<<endl;
    }
};
int main() 
{
    Student s1("Ali", 85);
    Student s2 = s1; 
    cout << "Before change:" << endl;
    s1.show();
    s2.show();
    *s1.grd = 95;
    cout << "After changing s1" << endl;
    s1.show();
    s2.show(); 
    return 0;
}
