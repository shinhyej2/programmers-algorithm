#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {

    //hasmap 만든다
    int answer = 1;

    unordered_map<string, int> map;

    //map 에 넣기
    for (auto cloth : clothes)
    {
        map[cloth[1]] += 1;
    }

    //map의 value 값으로 계산
    for (auto it = map.begin(); it != map.end(); it++)
    {
        answer *= it->second + 1;
    }

    return answer - 1;
}