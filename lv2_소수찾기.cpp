//프로그래머스 소수찾기
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

bool prime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;

    sort(numbers.begin(), numbers.end());

    map<int, int> m;
    for (int i = 1; i < (1 << numbers.size()); i++) 
    {
        vector<char> v;

        for (int j = 0; j < numbers.size(); j++)
        {
            if (i & (1 << j)) 
            {
                v.push_back(numbers[j]);
            }
        }
        do {
            string s = "";
            for (int k = 0; k < v.size(); k++) 
            {
                s += v[k];
            }
            if (prime(stoi(s)))
            {
                m[stoi(s)]++;
            }
        } while (next_permutation(v.begin(), v.end()));
    }
    answer = m.size();
    return answer;
}

int main() {
    string numbers = "17";
    int a = solution(numbers);
    return 0;
}