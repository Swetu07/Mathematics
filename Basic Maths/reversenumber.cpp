#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int revNum = 0;
    while (n>0)
    {
        int digit = n%10;
        revNum = (revNum*10) + digit;
        n = n/10;
    }
    cout << "Reverse of number: " << revNum ;
    
    return 0;
}
