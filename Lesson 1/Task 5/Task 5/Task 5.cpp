#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int b = 0, a = 0, c = 0, D = 0;
    cout << "Please enter b: ";
    cin >> b;
    cout << "Please enter a: ";
    cin >> a;
    cout << "Please enter c: ";
    cin >> c;

    D = pow(b,2) - 4 * a * c;

    cout << "Your discriminant is ";

    if (D == 0) 
    {
        c = -b / (2 * a);
        cout << "equale 0 you have 1 root - " << c;
    }
    if (D > 0)
    {
        c = (-b + sqrt(D)) / (2 * a);
        D = (-b - sqrt(D)) / (2 * a);
        cout << "higher than zero, you have 2 root, the first one is - " << c << endl
            << "The second one is - " << D;
    }
    else
        cout << "lower than zero, you have 0 roots";
}
