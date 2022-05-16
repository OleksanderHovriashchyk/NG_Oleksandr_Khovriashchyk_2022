#include <iostream>

using namespace std;

int main()
{
    int number = 0, hash = 0, last_number = 0;
    cout << "Enter your number: ";
    cin >> number;
    last_number = number % 10;
    cout << " Your hash-code is: ";
    for (int i = number; i > 0; i /= 10)
    {
        if ((i % 10 == i % 100 / 10) || (i == last_number))
        {
            if (hash != 0)
                cout << " + ";

            hash += i % 10;
            cout << i % 10;
        }
    }
    cout << " = " << hash;
    return 0;
}