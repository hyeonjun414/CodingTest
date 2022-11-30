// MEMO.cpp

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

long func1(int n)
{
    long ret = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            ret += i;
    }
    return ret;
}

int func2(vector<int> v, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == 100) return 1;
        }
    }
    return 0;
}
int func3(long long n)
{
    for (long long i = 0; i*i < n; i++)
    {
        if (i*i == n) return 1;
    }
    return 0;
}
int func4(int n)
{
    int ret = 1;
    while (2 * ret <= n)
    {
        ret *= 2;
    }
    return ret;
    
}

int main()
{
    vector<int> arr = {};

    cout << arr.size();

    for (int i = 0; i < 10; i++)
    {
        int n = 0;
        cin >> n;
        arr.push_back(n);
    }

    cout << func1(16) << endl;

    vector<int> v = { 1,52,48 };
    cout << func2(v, 3) << endl;
    cout << func3(756580036) << endl;
    cout << func4(97615282) << endl;
    

}
