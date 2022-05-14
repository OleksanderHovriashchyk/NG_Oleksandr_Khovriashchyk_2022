#include <iostream>

using namespace std;

int main()
{
    int cost = 0, price = 0;
    float discount = 0;
    
    cout << "Motherboard price: ";
    cin >> cost;
    price += cost;
    
    cout << "Videocard price: ";
    cin >> cost;
    price += cost;
    
    cout << "CPU price: ";
    cin >> cost;
    price += cost;
    
    cout << "Discount: ";
    cin >> discount;
    discount = discount / 100;

    price -= price * discount;

    cout << "Youe PC will cost - " << price;
}