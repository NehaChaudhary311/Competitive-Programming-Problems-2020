class Solution {
public:
    int minAddToMakeValid(string S) {
        stack<char> st;
        int n = S.size();

        int ans = 0;

        for(int i = 0;i<n;i++){
            if(S[i]=='(') st.push('(');
            else{
                if(st.size()==0){
                    ans++;
                }else{
                    st.pop();
                }
            }

        }
        if(st.size()!=0){
            ans+=st.size();
        }
        return ans;
    }
};
