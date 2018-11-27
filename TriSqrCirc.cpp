#include <iostream>
using namespace std;

float phi=3.14;
float high;
float getArea1(float rad)
{
    return rad*high/2;
}
float getArea2(float rad)
{
    return rad*rad*phi;
}
float getArea3(float rad)
{
    return rad*rad;
}

int main()
{
    float rad1,rad2,rad3;
    cout << "Input for Triangle \n";
    cin >> rad1;
    cin >> high;
    cout << "Input for Circle \n";
    cin >> rad2;
    cout << "Input for Square \n";
    cin >> rad3;
    cout << "Triangle= " << getArea1(rad1) << endl;
    cout << "Circle  = " << getArea2(rad2) << endl;
    cout << "Square  = " << getArea3(rad3) << endl;
    system("pause");
}