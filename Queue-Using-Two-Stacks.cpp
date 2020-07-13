#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
#define InputOutputToFile
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

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
    stack<int> Front, Rear;
    int Q;
    cin >> Q;
    while (Q--)
    {
        int type, x;
        cin >> type;
        if (type == 1)
        {
            cin >> x;
            Rear.push(x);
        }
        else
        {
            if (Front.empty())
            { // move all the elements from "Rear" stack to "Front" stack
                while (!Rear.empty())
                {
                    Front.push(Rear.top());
                    Rear.pop();
                }
            }
            if (!Front.empty())
            {
                if (type == 2) Front.pop();
                if (type == 3) cout << Front.top() << endl;
            }
        }
    }
    return 0;
}
