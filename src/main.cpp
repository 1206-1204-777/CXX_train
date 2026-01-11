#include <iostream>
using namespace std;

int func(int num){
    if (num > 100)
    {
        return num;
    }
    int a = num + 5;
    
    return func(a);
}

int main()
{
    int num;
    cin >> num;
    int a = func(num);
    cout << a << "\n";
    return 0;
}
