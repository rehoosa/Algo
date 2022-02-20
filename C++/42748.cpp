#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i=0; i< commands.size();i++){
        vector<int> temp;
        for(int j=commands.at(i)[0]-1;j<commands.at(i)[1];j++){
            temp.push_back(array[j]);
        }
        sort(temp.begin(),temp.end());
        answer.push_back(temp[commands.at(i)[2]-1]);
    }
    return answer;
}