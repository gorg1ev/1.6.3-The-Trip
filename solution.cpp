#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define spc ' '
#define all(x) x.begin(), x.end()
#define allR(x) x.rbegin(), x.rend()
#define vi(x) vector<x>
#define pii(x, y) pair<x, y>
#define F first
#define S second
#define ll long long
#define pb(x) push_back(x)

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    double average, minDiff;

    while (true)
    {
        average = minDiff = 0.0;
        cin >> n;
        if (n == 0)
            break;

        double money[n];
        for (int i = 0; i < n; i++)
        {
            cin >> money[i];
            average += money[i];
        }

        average = ((int) (average / n)) * 1.0;
        for (int i = 0; i < n; i++)
        {
            if (money[i] < average)
                minDiff += average - money[i];
        }

        cout << "$" << fixed << setprecision(2) << minDiff << endl;
    }
    
}