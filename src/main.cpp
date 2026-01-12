#include <iostream>
using namespace std;

template <class T>
T func(T num){
    if (num > 100)
    {
        return num;
    }
    T a = num + 5;
    
    return func(a);
}
int main()
{
    double A = func(5.5);
    cout << A << "\n";
    return 0;
}
