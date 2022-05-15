#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";

    stringstream ss(s);
	string token;
	vector<int> num;

	while (getline(ss, token, ' ')) {
		if (token != "") {
			num.push_back(stoi(token));
		}
	}

	sort(num.begin(), num.end());

	answer += to_string(num.front()) + ' ' + to_string(num.back());

    return answer;
}

int main(void)
{
	string a = "-1 -2 -3 -4";
	
	solution(a);

	return 0;
}