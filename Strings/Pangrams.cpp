/*
Pangram is a string in which all the alphabets occur
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    int alphabs[26] = { 0 };
    int str_len = s.size();
    for (int i = 0; i < str_len; i++)
    {
        int x = (int)s[i];
        
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            

            if (x <= 90 && x >= 65)
            {
                x = x - 65;
                alphabs[x] = alphabs[x] + 1;
            }
            else
            {
                x = x - 97;
                alphabs[x] = alphabs[x] + 1;
            }
            
        }
    }
    int flag = -1;
    for (int i = 0; i < 26; i++)
    {
        if (alphabs[i] > 0) {
            flag = 1;

        }
        else{
            flag = -1;
            break;
        }         
    }

    if (flag == -1)
        return("not pangram");
   
    return("pangram");
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

