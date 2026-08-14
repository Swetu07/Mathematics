/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >>n;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout << i << " ";
        }
        
    }
    
    return 0;
}
*/

// Another way
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Enter a positive number";
        return 0;
    }

    vector<int> divisors;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);

            if (i != n / i)
            {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    for (int x : divisors)
    {
        cout << x << " ";
    }

    return 0;
}