// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int pattern1(int n)
{

    if (n == 16)
    {

        return n;
    }

    cout << n + 5 << " ";
    return pattern1(n + 5);
}

int pattern(int n)
{
    // base condition
    const int x = n;

    if (n <= 0)
    {
        cout << n << " ";
        return pattern1(n);
    }
    cout << n << " ";
    // cout<<endl;
    return pattern(n - 5);
}

int main()
{
    int y = 16;
    pattern(y);
    return 0;
}