class Solution {
public:
   string reverseParentheses(string s) {
        stack<char> stk;

        string ans = "";

        for(int i = 0; i < s.length(); i++){
            if(stk.empty()){
                stk.push(s[i]);
            }
            else{
                if(s[i] == ')'){
                    vector<char> vc;

                    while(!stk.empty() && stk.top() != '('){
                        vc.push_back(stk.top());
                        stk.pop();
                    }
                    stk.pop();
                    // reverse(vc.begin(),vc.end());
                    for(int i = 0; i < vc.size(); i++){
                        stk.push(vc[i]);
                    }
                }
                else{
                    stk.push(s[i]);
                }
            }
        }

        while(!stk.empty()){
            ans += stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};