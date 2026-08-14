#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0) {
            count++ ;
            if (i != n / i) count++ ;
        }    
    }
    if (count == 2) cout <<"True";
    else cout <<"False";

    return 0;
}