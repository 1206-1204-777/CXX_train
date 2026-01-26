#include <iostream>
using namespace std;
class car
{
private:
int num;
public:
void show();
void setNum(int n);
};

void car::show(/* args */)
{
    cout << num << "\n";
}

void car::setNum(int n){
    if (n <= 0)
    {
        cout << "正しい値ではない\n";
    }
    
    num = n;
}
void showObject(car c){
    c.show();
}
int main()
{
    car *car1;
    car1 = new car;
    car1->setNum(0);
    car1->show(); 
    car1->setNum(45);
    showObject(*car1);
    return 0;
}
