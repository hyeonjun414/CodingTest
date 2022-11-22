#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    for (int knight = 1; knight <= number; knight++)
    {
        int damage = 0;
        for (int div = 1; div <= sqrt(knight); div++)
        {
            if (knight % div == 0)
            {
                damage++;
                if (knight / div != div)
                    damage++;
            }
        }
        answer += damage > limit ? power : damage;
    }
    return answer;
}

int main()
{
    cout << solution(5, 3, 2) << endl;
}