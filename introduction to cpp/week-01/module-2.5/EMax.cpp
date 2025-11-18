#include<bits/stdc++.h>
using namespace std;
int main () {

    int n;
    cin >> n;

    int maximam = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        maximam = max(maximam, x);
    }


    cout << maximam  << endl;
    
    return 0;
}