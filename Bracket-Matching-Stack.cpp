/*A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].

Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or {) occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {}, and ().

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].

By this logic, we say a sequence of brackets is balanced if the following conditions are met:

It contains no unmatched brackets.
The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.
Given n strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, return YES. Otherwise, return NO.*/

#include<iostream>
#include<string>
#include<fstream>
#include<ostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<set>
#include <utility>
#include <tuple>
#include<stack>
#include<map>
using namespace std;

#define InputOutputToFile

// Complete the isBalanced function below.
string isBalanced(string s)
{
    std::map<char, char> mymap;
    mymap.insert(std::pair<char, char>(']', '['));
    mymap.insert(std::pair<char, char>('}', '{'));
    mymap.insert(std::pair<char, char>(')', '('));
    stack<char> myStack;
    bool ans = true;
    int count = 0;
    int len = s.length();
    if (s[0] == '}' || s[0] == ']' || s[0] == ')')
    {
        return "NO";
    }
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            myStack.push(s[i]);
            count++;
        }
        else
        {
            if (myStack.empty() != true)
            {
                if (myStack.top() == mymap.find(s[i])->second)
                {
                    myStack.pop();
                    count--;
                }
                else
                {
                    ans = false;
                    break;
                }
            }
        }

    }
    if (count == 0 && ans != false)
        return "YES";
    else
        return "NO";
}

int main()
{
#ifdef InputOutputToFile

    //cin redirection
    std::ifstream fin("cin.txt");
    std::streambuf* inbuf = std::cin.rdbuf(fin.rdbuf());

    //cout redirection
    std::streambuf* cout_sbuf = std::cout.rdbuf(); // save original sbuf
    std::ofstream   fout("cout.txt");
    std::cout.rdbuf(fout.rdbuf()); // redirect 'cout' to a 'fout'
    //std::cout.rdbuf(cout_sbuf); // restore the original stream buffer
#endif
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);
        
        string result = isBalanced(s);

        cout << result << "\n";
    }

    //fout.close();

    return 0;
}
