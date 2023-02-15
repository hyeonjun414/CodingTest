// S3_TwoNumSum.cpp
// 처음에 2중 for문으로 두 숫자를 확인하여 개수를 반환하려하니 시간초과.
// x가 주어졌을 때, v를 순회하면서 x가 i번째 숫자보다 크거나 같고, 등장한 수에 있는지 확인한다.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool arr[2000001];

int GetNumOfSum(vector<int> v, int x)
{
    int ret = 0;
    for(int i=0; i < v.size(); ++i)
    {
        if(x >= v[i] && arr[x - v[i]])
            ret++;
        arr[v[i]] = true;
    }
    return ret;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("input.txt", "r", stdin);
    int n, x, insertNum = 0;

    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> insertNum;
        v.push_back(insertNum);
    }
    cin >> x;
    cout << GetNumOfSum(v,x);
}