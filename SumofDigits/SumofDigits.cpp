#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n)
    {
        int t, ans = 0;
        cin >> t;
        string s = to_string(t);
        for (int i = 0; i < s.length(); ++i)
        {
            int temp = s[i];
            ans += temp - 48;
        }
        cout << ans << endl;
        n--;
    }
}