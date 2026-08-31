#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int count = 0;
        while (N--)
        {
            int D;
            cin >> D;
            if (D >= 1000)
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
