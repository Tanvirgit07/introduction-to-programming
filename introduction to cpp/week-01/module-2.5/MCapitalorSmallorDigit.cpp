#include<iostream>
using namespace std;
int main () {

    char a;
    cin >> a;

    if ((int)a >= 48 && (int)a <= 57)
    {
        cout << "IS DIGIT" << endl;
    }else if ((int)a >= 65 && (int)a <= 90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }else if ((int)a >= 97 && (int)a <= 122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    return 0;
}