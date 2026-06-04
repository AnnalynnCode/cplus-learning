#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//降序，返回bool类型 
bool compare(string a, string b) {
    return a + b > b + a;
}

int main() {
    int n;
    cin >> n;
    //可变数组 
    vector<string> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    // 按照我们的规则排序
    sort(nums.begin(), nums.end(), compare);
    
    // 拼接所有字符串
    string result = "";
    for (int i=0;i<nums.size();i++) {
        result += nums[i];
    }
    
    cout << result << endl;
    return 0;
}
