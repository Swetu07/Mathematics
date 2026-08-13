#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int dup = n;
    int revNum = 0;
    while (n>0)
    {
        int digit = n%10;
        revNum = (revNum*10) + digit;
        n = n/10;
    }
    if(revNum == dup) cout << "Yes, palindrome";
    else cout << "No, not a palindrome";
    
    return 0;
}
