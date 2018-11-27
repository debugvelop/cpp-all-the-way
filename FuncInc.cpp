#include <iostream>
using namespace std;

int inc(int n);

int main()
{
    int n = 77;
    cout << "Pass by value    = " << n << endl;
    int o = inc(n);
    cout << "Pass by reference= " << o << endl;
}

int inc(int n)
{
    n++;
    return n;
}