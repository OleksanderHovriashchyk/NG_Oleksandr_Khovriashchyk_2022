#include <iostream>

using namespace std;

int main()
{
    int number = 0, sum = 0;
    cout << "Enter your number, please: ";
    cin >> number;
    cout << "Sum of even number are: ";
    
    for (int i = number; i > 0; i /= 10)
    {
        if ((i % 2 == 0) && (i != 0))
        {
            if (sum != 0)
                cout << " + ";
            
            sum += i % 10;
            cout << i % 10;
        }
    }
    cout << " = " << sum;
}
