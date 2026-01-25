#include <iostream>
using namespace std;
class car
{
public:
int num;
void show();

};

void car::show(/* args */)
{
    cout << num << "\n";
}


int main()
{
    car *car1;
    car1 = new car;
    car1->num = 460;
    car1->show(); 
    return 0;
}
