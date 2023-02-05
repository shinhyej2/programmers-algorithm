#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second == b.second) return a.first > b.first;
	return a.second > b.second;
}

int solution(int k, vector<int> tangerine) {
	int answer = 0;
	map<int, int> m;

	//Á¤·Ä
	sort(tangerine.begin(), tangerine.end());
	
	for (int i : tangerine) {
		if (m.find(i) != m.end()) {
			m[i] += 1;
		}
		else {
			m.insert(pair<int, int>(i, 1));
		}
	}

	vector<pair<int, int>> vec(m.begin(), m.end());
	sort(vec.begin(), vec.end(), cmp);

	int index = 0;

	while (k > 0)
	{
		if (k <= vec[index].second)
		{
			answer += 1;
			break;
		}
		else
		{
			answer += 1;
			k -= vec[index].second;
		}

		index += 1;
	}

	return answer;
}

int main(void)
{
	vector<int> v = { 1, 3, 2, 5, 4, 5, 2, 3 };
	int k = 6;
	int ret = 0;

	ret = solution(k, v);

	return 0;
}