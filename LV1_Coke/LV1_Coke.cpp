// LV1_Coke.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while (n >= a)
    {
        int rewardCoke = n / a * b;
        answer += rewardCoke;
        n = rewardCoke + n%a;
    }
    return answer;
}

int main()
{
    cout << solution(2, 1, 20) << endl;
}
