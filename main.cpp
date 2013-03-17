#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{

    string x, y; cin >> x >> y;
    if(x.length() != y.length())
    {
        cout << "NO";
        return 0;
    }

    int p = 0, q = 0;
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] == '1')
            p++;
        if(y[i] == '1')
            q++;
    }
    if(p == 0 && q != 0 || p != 0 && q == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}





