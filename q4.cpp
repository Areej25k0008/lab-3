#include <iostream>
using namespace std;
class Rectangle 
{
    float l, w;
    const float ar;
public:
    Rectangle(float len, float wid) : l(len), w(wid), ar(len * wid) {}
    
    void show() {
        cout<<"L="<<l<<", W:"<<w<<", Area (const): "<<ar<<endl;
    }
};
int main() {
    Rectangle r1(10.5, 5.2);
    r1.show();
    return 0;
}
