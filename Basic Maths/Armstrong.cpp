#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int dup = n;
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }

    n = dup;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;

        int power = 1;

        for (int i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;

        n = n / 10;
    }

    if (sum == dup)
        cout << "Yes, Armstrong";
    else
        cout << "No, not an Armstrong";

    return 0;
}