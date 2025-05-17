#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int MOD = 998244353;
    int T, A[200005];
    cin >> T;
    vector<int> v;
    while (T--)
    {
        int N;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        sort(A, A + N);
        long long res = 1;
        for (int i = 0; i < N; i++)
        {
            res = res * max(0, A[i] - i) % MOD;
        }
        cout << res << endl;
    }
}