#include <iostream>

using namespace std;

int main()
{
    int age = 0, answer = 0;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 11) 
    {
        cout << "Do you study? (1/0): ";
        cin >> answer;
        if (answer == 1)
        {
            cout << "You are awesome!";
        }
        else 
        {
            cout << "Why not?";
        }
    }
    else 
    {
        cout << "Wow, you are so big";
    }
}
