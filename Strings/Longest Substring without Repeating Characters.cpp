class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0)
            return 0;
        set<char> st;
        int maxsize = 0;
        //left and right pointer will hold the value for substring start and end
        int left = 0, right = 0;
        while(right < n)
        {
            //if s[right] doesn't exist in the set
            if(st.count(s[right])==0)
            {
                st.insert(s[right]);
                maxsize=max(maxsize,(int)st.size());
                right++;
            }
            //if s[right] exists in the set
            else
            {
                st.erase(s[left]);
                left++;
            }
        }
        return maxsize;
    }
};
