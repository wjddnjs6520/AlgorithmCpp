#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temparray;
    int tempnumbers;
    for (int i = 0; i < commands.size(); i++) {
        for (int j = (commands[i][0] - 1); j < commands[i][1]; j++) {
            temparray.push_back(array[j]);
        }
        for (int k = 0; k < temparray.size(); k++) {
            ;
            for (int l = k + 1; l < temparray.size(); l++) {
                if (temparray[k] > temparray[l]) {//i 번째가 j 번째보다 크면 서로 교체
                    tempnumbers = temparray[k];
                    temparray[k] = temparray[l];
                    temparray[l] = tempnumbers;
                }
            }
        }
        answer.push_back(temparray[commands[i][2] - 1]);
        temparray.clear();
    }


    return answer;
}

int main()
{
    vector<int> array = { 1, 5, 2, 6, 3, 7, 4 };
    vector<vector<int>> c = { {2, 5, 3}, {4, 4, 1}, {1, 7, 3} };
    vector<int> a = solution(array, c);
    for (int i : a) {
        cout << i << " ";
    }
}

