#include <iostream>
using namespace std;

int main()
{
    int input;

    cout << "Enter number of input: ";
    cin >> input;

    for(int i = 1; i <= input; ++i)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
