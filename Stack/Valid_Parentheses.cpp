#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> data;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                data.push(s[i]);
            } else {
                if (data.size() == 0) {
                    return false;
                }

                if (s[i] == ')' && data.top() == '(' ||
                    s[i] == '}' && data.top() == '{' ||
                    s[i] == ']' && data.top() == '[') {
                    data.pop();
                } else {
                    return false;
                }
            }
        }
        return (data.size() == 0);
    }
};
int main()
{
 Solution s;
 cout<<s.isValid("{{([])[]}}")<<endl;
 cout<<s.isValid("{([])[]}}")<<endl;
 cout<<s.isValid("{([]}}")<<endl;
 

return 0;
}