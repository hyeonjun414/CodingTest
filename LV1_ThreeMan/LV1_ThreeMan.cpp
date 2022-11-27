// LV1_ThreeMan.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    for (int i = 0; i < number.size() - 2; i++)
    {
        for (int j = i + 1; j < number.size() - 1; j++)
        {
            for (int k = j + 1; k < number.size(); k++)
            {
                if (number[i] + number[j] + number[k] == 0)
                {
                    answer++;
                }
            }
        }
    }
    return answer;
}

int main()
{
    vector<int> v = { -2, 3, 0, 2, -5};
    cout << solution(v);
}
