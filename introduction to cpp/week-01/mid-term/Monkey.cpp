#include <bits/stdc++.h>
using namespace std;
int main()
{

    char s[100001];
    while (cin.getline(s, 100001))
    {
        int len = strlen(s);
        char onlyLetter[100001];
        int idx = 0;

        for (int i = 0; i < len; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z'){
                onlyLetter[idx++] = s[i];
            }
            
        }

        sort(onlyLetter, onlyLetter + idx);
        onlyLetter[idx] = '\0';

        cout << onlyLetter << endl;
    }

    return 0;
}