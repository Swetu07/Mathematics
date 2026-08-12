#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int count = 0;
    while (n>0)
    {
        n = n/10;
        count++;
    }
    cout << "Number of digit: " << count ;
    
    return 0;
}

// function
/*
int count(int n)
   int cnt = (int)(log10(n) + 1);
   return count
*/