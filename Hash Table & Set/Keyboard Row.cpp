/*

Given a List of words, return the words that can be typed using letters of alphabet on only one row's of American keyboard.
Input: ["Hello", "Alaska", "Dad", "Peace"]
Output: ["Alaska", "Dad"]

*/
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        map<char,int> mp;
        
        string s1 = "qwertyuiop";
        for(int i=0; i<s1.length(); i++){
            mp[s1[i]]=1;
        }
        string s2 = "asdfghjkl";
        for(int i=0; i<s2.length(); i++){
            mp[s2[i]]=2;
        }
        string s3 = "zxcvbnm";
        for(int i=0; i<s3.length(); i++){
            mp[s3[i]]=3;
        }
        
        for(int i=0; i<words.size(); i++){
            string word = words[i];
            bool flag = true;
            for(int j=0; j<word.length()-1; j++){
                if(mp[tolower(word[j])]!=mp[tolower(word[j+1])]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                ans.push_back(word);
            }
        }
        return ans;
    }
};
