// B2_ReverseCard.cpp


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    vector<int> v = { 1,2,3,4,5,6,7,8,9,10,
        11,12,13,14,15,16,17,18,19,20 };

    printVector(v);
    

    for (int i = 0; i < 10; i++)
    {
        int start, end;
        cin >> start >> end;
        reverse(v.begin() + start - 1, v.begin() + end);
    }
    //reverse(v.begin(), v.end());
    
    printVector(v);

}
