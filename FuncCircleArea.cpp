#include <iostream>
using namespace std;

int phi=3.14;

float getArea(float radius);

int main()
{
    float radius1=1,area1,area2;
    area1=getArea(radius1);
    cout << "Area 1= " << area1 << endl;
    area2=getArea(2);
    cout << "Area 2= " << area2 << endl;
    cout << "Area 3= " << getArea(3) << endl;
}

float getArea1(float radius)
{
    return radius*radius*phi;
}