/*
Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation: 
The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.

*/
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int a[26]={0};
        
        //filling the chars_hash with frequency of each character in chars string
        for(int i=0; i<chars.size(); i++){
            int x = chars[i]-97;
            a[x]++;
        }
        int count=0;
        //for loop for each word in words
        for(int i=0; i<words.size(); i++){
            int c[26]={0};
            bool sh = true;
            //filling c with each word at one time
            for(int j=0; words[i][j] !='\0'; j++){
                int x = words[i][j]-97;
                c[x]++;
            }
            //comparing the current word hash with the a hash map
            for(int j=0; j<26; j++){
                if(c[j]>a[j]){
                    sh = false;
                    break;
                }
            }
            if(sh)
                count+=words[i].size();
        }
        return count;
    }
};
