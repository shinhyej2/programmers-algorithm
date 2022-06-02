#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int width, length = 0;

    int sum = brown + yellow;
    for (int i = 1; i < sum; i++)
    {
        width = i;
        if ((sum % width) == 0)
        {
            length = sum / width;
        }
        
        if (width >= length)
        {
            if (((width - 2) * (length - 2)) == yellow)
            {
                answer.push_back(width);
                answer.push_back(length);

                return answer;

            }

        }
    }
}

int main(void)
{
    int b = 18, y = 6;
    solution(b, y);
    return 0;
}