#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {

    //hasmap �����
    int answer = 1;

    unordered_map<string, int> map;

    //map �� �ֱ�
    for (auto cloth : clothes)
    {
        map[cloth[1]] += 1;
    }

    //map�� value ������ ���
    for (auto it = map.begin(); it != map.end(); it++)
    {
        answer *= it->second + 1;
    }

    return answer - 1;
}