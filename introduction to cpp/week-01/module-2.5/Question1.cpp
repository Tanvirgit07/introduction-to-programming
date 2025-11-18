#include<bits/stdc++.h>
using namespace std;

int* get_arry(int a) {

    int* arr = new int[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }


    return arr;
    
}
int main () {
    int n;
    cin >> n;

    int* p = get_arry(n);

    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    
    return 0;
}