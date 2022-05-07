#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    unordered_map<string, int> map;

    //해시맵에 데이터 넣고 하나씩 비교
    for (int i = 0; i < phone_book.size(); i++)
    {
        map[phone_book[i]] = 1;
    }

    for (int i = 0; i < phone_book.size(); i++)
    {
        for (int j = 0; j < phone_book[i].size() - 1; j++)
        {
            string phone_number = phone_book[i].substr(0, j + 1);
            if (map[phone_number])
            {
                answer = false;
            }
        }
    }

    return answer;
}

int main(void)
{
    vector<string> pb = { "119", "97674223", "1195524421" };

    solution(pb);
    return 0;
}