#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;

    int count = 0;
    int removeCnt = 0;

    while (s != "1")
    {
        string temp;
        for (char c : s)
        {
            if (c == '0')
            {
                removeCnt++;
            }
            else
            {
                temp += c;
            }
        }

        int len = temp.length();
        s = "";

        while (len)
        {
            s += (len % 2) + '0';
            len /= 2;
        }

        reverse(s.begin(), s.end());
        count++;
    }

    answer.push_back(count);
    answer.push_back(removeCnt);

    return answer;
}