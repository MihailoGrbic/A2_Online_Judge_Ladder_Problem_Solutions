#include <bits/stdc++.h>

using namespace std;

int n, k;

int main()
{
    cin >> n >> k;

    for(int i = 0; i < k; i++)
        cout << n - i << " ";

    for(int i = 1; i <= n - k; i++)
        cout << i << " ";

    return 0;
}
