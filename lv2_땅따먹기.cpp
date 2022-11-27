#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int> > land)
{
	int answer = 0, m = 0;

	for (int i = 1; i < land.size(); i++)
	{
		for (int j = 0; j < 4; j++)
		{
			m = 0;

			for (int k = 0; k < 4; k++)
			{
				if (j != k)
				{
					m = max(m, land[i - 1][k]);
				}
			}

			land[i][j] += m;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		answer = max(answer, land[land.size() - 1][i]);
	}

	return answer;
}

int main(void)
{
	vector<vector<int>> land = { {1,2,3,5} ,{5,6,7,8},{4,3,2,1} };
	int ret = solution(land);

	cout << ret << endl;

	return 0;
}