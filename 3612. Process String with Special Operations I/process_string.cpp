#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string processStr(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                ans.push_back(s[i]);
            }
            if (s[i] == '#') {
                ans += ans;
            }
            if (s[i] == '*') {
                if (!ans.empty()) {
                    ans.pop_back();
                }
            }
            if (s[i] == '%') {
                reverse(ans.begin(), ans.end());
            }
        }
        return ans;
    }
};

int main() {
    Solution solver;

    string test1 = "ab#c";
    cout << "Input:  " << test1 << "\n";
    cout << "Output: " << solver.processStr(test1) << "\n\n";

    string test2 = "abc*d";
    cout << "Input:  " << test2 << "\n";
    cout << "Output: " << solver.processStr(test2) << "\n\n";

    string test3 = "abc%";
    cout << "Input:  " << test3 << "\n";
    cout << "Output: " << solver.processStr(test3) << "\n\n";

    string test4 = "abc*#%";
    cout << "Input:  " << test4 << "\n";
    cout << "Output: " << solver.processStr(test4) << "\n\n";

    return 0;
}