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
    int array[4] = {10, 20 , 50};
    cout << array[2] << "\n";

    // 配列のソート
    const int num = 5;
    size_t test[num];
    for (size_t i = 0; i < num; i++)
    {
        cin >> test[i];
    }
    for (size_t i = 0; i < num - 1; i++)
    {
        for (size_t j = i+1; j < num; j++)
        {
            if (test[j] > test[i])
            {
                size_t tmp = test[i];
                test[i] = test[j];
                test[j] = tmp;
            }
            
        }
        
    }
    for (size_t i = 0; i < num; i++)
    {
        cout << test[i] << "\n";
    }
    
    
    return 0;
}
