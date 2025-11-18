#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;

    if (n > m) {
        cout << "Must be N is greater than M" << endl;
        return 0;
    }

    int arr1[m];

    for (int i = 0; i < n; i++) {
        arr1[i] = arr[i];
    }

    for (int i = n; i < m; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}
