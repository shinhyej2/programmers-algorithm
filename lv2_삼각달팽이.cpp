#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;

    int state = 0;
    int i = 0, j = 0;
    int num = 1;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int a = 0; a < n; a++)
    {
        switch (state)
        {
        case 0:
            for (int b = a; b < n; b++)
            {
                arr[i++][j] = num++;
            }

            i--;
            j++;
            state = 1;

            break;
        case 1:
            for (int b = a; b < n; b++)
            {
                arr[i][j++] = num++;
            }

            i--;
            j = j - 2;
            state = 2;
            break;

        case 2:
            for (int b = a; b < n; b++)
            {
                arr[i--][j--] = num++;
            }

            i = i + 2;
            j++;
            state = 0;

            break;
        default:
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            answer.push_back(arr[i][j]);
        }
    }

    return answer;
}