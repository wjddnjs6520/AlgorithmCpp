﻿#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>());

    for (int i = 0; i < citations.size(); i++) {
        if (citations[i] >= i + 1) {
            answer = i + 1;
        }
        else {
            break;
        }
    }
    return answer;
}

int main()
{
    vector<int> c1 = { 3, 0, 6, 1, 5 };
    std::cout << solution(c1);;
}
