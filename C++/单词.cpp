#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);  // 读取整行句子
    
    // 在句子末尾添加一个空格，确保最后一个单词能被处理
    s += " ";
    
    string current_word = "";    // 当前正在收集的单词
    string longest_word = "";    // 第一个最长的单词
    string shortest_word = "";   // 第一个最短的单词
    int max_length = 0;         // 最长单词的长度
    int min_length = 1000;       // 最短单词的长度（设一个很大的数）
    
    for (int i = 0; i < s.length(); i++) {  // 遍历句子中的每个字符
    	char c = s[i];
        if (isalpha(c)) {  // 如果是字母
            current_word += c;  // 添加到当前单词
        } else {  // 如果是空格或逗号（单词分隔符）
            int len = current_word.length();
                
            // 检查是否是最长单词
            if (len > max_length) {
                max_length = len;
                longest_word = current_word;
            }
                
            // 检查是否是最短单词
            if (len < min_length) {
                min_length = len;
                shortest_word = current_word;
            }
                
            current_word = "";  // 重置当前单词
        }
    }
    
    // 输出结果
    cout << longest_word << endl;
    cout << shortest_word << endl;
    
    return 0;
}
