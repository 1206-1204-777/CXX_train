#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!\n";

    cout << sizeof(float) << "\n";
    cout << sizeof(char) << "\n";
    cout << sizeof(double) << endl;
    int x;
    //cin >> x;
    //cout << x << "\n";
    int x2 = 10;
    int y = 2;
    short s = x2 << y;
    cout << s;
    if (x2 <= 5)
    {
        cout << "\nx2は5以下です\n";
    }else
    {
        cout << "x2は5以上です\n";
    }
    
    switch (y <= 10)
    {
    case 1:
         cout << "\nx2は10以下です\n";
        break;
    
    default:
        break;
    }
    (y == 2) ? cout << "2\n": cout << "2以外\n";
    return 0;
}
