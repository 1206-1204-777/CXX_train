#include <iostream>
using namespace std;

int main()
{
    int a = 15;
    int *pa;
    pa = &a;
    *pa = 50;
    cout << *pa << "\n";
    int &rA = a;
    rA = 500;
    cout << rA << "\n";
    return 0;
}
