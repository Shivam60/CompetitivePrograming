#include <iostream>
#define ull unsigned long long int
using namespace std;
int main()
{
    ull n;
    cin >> n;
    ull dp[1001];
    dp[1] = 1;
    for (ull i = 2; i <= 1000; ++i)
    {
        dp[i] = i * dp[i - 1];
    }
    while (n--)
    {
        ull t;
        cin >> t;
        cout << dp[t] << endl;
    }
}