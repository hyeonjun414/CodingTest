#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool desc(int a, int b)
{
    return a > b;
}

int solution(int maxPoint, int appleCount, vector<int> score) {
    int answer = 0;
    int curCount = 0;
    int curPoint = 0;
    sort(score.begin(), score.end(), desc);
    for (int i = 0; i < score.size(); i++)
    {
        if (curPoint == 0 || curPoint > score[i])
            curPoint = score[i];
        curCount++;
        if (curCount == appleCount)
        {
            answer += curPoint * curCount;
            curPoint = 0;
            curCount = 0;
        }
    }
    return answer;
}

int main()
{
    vector<int> v = { 1,2,3,1,2,3,1 };
    
    cout << solution(3, 4, v) << endl;
}