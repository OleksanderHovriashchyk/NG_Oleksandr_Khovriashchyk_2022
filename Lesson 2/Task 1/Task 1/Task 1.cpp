#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    cout << "Please enter the size of your square: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int f = 0; f < size; f++)
        {
            if ((i >= 1 && i <= size - 2) && (f >= 1 && f <= size - 2))
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}
