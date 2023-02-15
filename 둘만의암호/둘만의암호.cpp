// lv1. 둘만의암호

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void nextChar(char &c)
{
    c++;
    if(c > 'z')
        c = 'a';
}

string solution(string s, string skip, int index) {
    string answer = "";
    map<char, bool> skipData;

    for (size_t i = 0; i < skip.length(); i++)
        skipData.insert({skip[i], true});
    

    for (size_t i = 0; i < s.length(); i++)
    {
        char c = s[i];
        int curIndex = 0;
        while(curIndex < index)
        {
            curIndex++;
            nextChar(c);

            while(skipData.find(c) != skipData.end())
                nextChar(c);
        }
        answer += c;
    }
    return answer;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "aukks";
    string skip = "wbqd";
    int index = 5;

    cout << solution(s, skip, index) << endl;
}

   