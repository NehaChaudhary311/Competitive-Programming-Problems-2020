/*
Largest Palindrome in a given string
Input : String given : "Raadha"
Output : "aa"

Input : String given : "nehaahenbcd"
Output : "nehaahen"

Input : String given : "xyzzyxxxxxx"
Output : "xxxxxx"

*/
#include<iostream>
#include<algorithm>
using namespace std;

int longestPalindromeFromMiddle(string str, int left, int right) {
    if (left > right)
        return 0;
    while (left >= 0 && (right <= str.length() - 1) && str[left] == str[right])
    {
        left--;
        right++;
    }
    return right - left - 1;
}

int main() {
    string str;
    cin >> str;
    if (str.length() < 1)
        return 0;
    int start = 0, end = 0;
    int len_str = str.length();
    for (int i = 0; i < len_str; i++) {
        //for cases like "nehahen"
        int len1 = longestPalindromeFromMiddle(str, i, i);
        //for cases like "nehaahen"
        int len2 = longestPalindromeFromMiddle(str, i, i + 1);

        int len = max(len1, len2);

        if (len > (end - start)) {
            start = i - ((len - 1) / 2);
            end = i + (len / 2);


        }
    }
    for (int i = start; i < end + 1; i++) {
        cout << str[i];
    }

}
