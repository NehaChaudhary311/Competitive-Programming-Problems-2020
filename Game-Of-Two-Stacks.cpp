/*
Alexa has two stacks of non-negative integers, stack  and stack  where index  denotes the top of the stack. Alexa challenges Nick to play the following game:

In each move, Nick can remove one integer from the top of either stack  or stack .
Nick keeps a running sum of the integers he removes from the two stacks.
Nick is disqualified from the game if, at any point, his running sum becomes greater than some integer  given at the beginning of the game.
Nick's final score is the total number of integers he has removed from the two stacks.
Given A,B , and x for g games, find the maximum possible score Nick can achieve (i.e., the maximum number of integers he can remove without being disqualified) during each game and print it on a new line.
*/
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
using namespace std;

#define InputOutputToFile

using namespace std;

vector<string> split_string(string);

/*
 * Complete the twoStacks function below.
 */
int twoStacks(int x, vector<int> a, vector<int> b) {
    /*
     * Write your code here.\
     */
    if (a.size() == 0 || b.size() == 0)
        return 0;

    int score = 0;
    int count = 0;
    //iterator for vector a
    vector<int>::iterator it_a;
    //iterator for vector b
    vector<int>::iterator it_b;

    //compare if the topmost element of a is lesser than b, if yes, pop_back and add its value to the score
    if (a.front() <= b.front())
    {
        for (it_a = a.begin(); it_a != a.end(); ++it_a)
        {
            if ((score = score + a.front()) <= x)
            {
                count++;
                a.pop_back();
            }

            else
                break;
        }
    }
    else
    {
        for (it_b = b.begin(); it_b != b.end(); ++it_b)
        {
            if ((score = score + b.front()) <= x)
            {
                count++;
                b.pop_back();
            }

            else
                break;
        }

    }
    return count;

    
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
   // ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        string nmx_temp;
        getline(cin, nmx_temp);

        vector<string> nmx = split_string(nmx_temp);

        int n = stoi(nmx[0]);

        int m = stoi(nmx[1]);

        int x = stoi(nmx[2]);

        string a_temp_temp;
        getline(cin, a_temp_temp);

        vector<string> a_temp = split_string(a_temp_temp);

        vector<int> a(n);

        for (int a_itr = 0; a_itr < n; a_itr++) {
            int a_item = stoi(a_temp[a_itr]);

            a[a_itr] = a_item;
        }

        string b_temp_temp;
        getline(cin, b_temp_temp);

        vector<string> b_temp = split_string(b_temp_temp);

        vector<int> b(m);

        for (int b_itr = 0; b_itr < m; b_itr++) {
            int b_item = stoi(b_temp[b_itr]);

            b[b_itr] = b_item;
        }

        int result = twoStacks(x, a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char& x, const char& y) {
        return x == y and x == ' ';
        });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
