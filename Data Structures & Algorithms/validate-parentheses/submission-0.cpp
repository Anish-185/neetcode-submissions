class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        std::unordered_map<char, char> closetopen = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        for(char c :s){
            if(closetopen.count(c)){
                if(!st.empty() && st.top()==closetopen[c]){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                st.push(c);
            }


        }
        return st.empty();
    }
};
