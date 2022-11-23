#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
bool desc(char a, char b)
{
	return a > b;
}

string solution(vector<int> food) {
    string answer = "";
	string temp = "";
	for (size_t i =1; i < food.size(); i++)
	{
		if (food[i] % 2 != 0)
			food[i] -= 1;
		if (food[i] != 0)
		{
			temp.append(food[i] / 2, (char)(i+48));
		}
	}
	answer.append(temp);
	answer.append(to_string(0));
	sort(temp.begin(), temp.end(), desc);
	answer.append(temp);
	
    return answer;
}

int main()
{
	vector<int> v = {1,3,4,6};
	cout << solution(v) << endl;
}