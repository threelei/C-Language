#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
int main(){

    vector<vector<int>> ans;
    int level_number = 1;

    if(ans.size() < level_number){
        ans.emplace_back();
    }


    ans[level_number-1].emplace_back(0);
    for (int num : ans[level_number-1]) {
        cout << num << " ";
    }
    return 0;
}