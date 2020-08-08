/*
SAMPLE INPUT :
10
203 204 205 206 207 208 203 204 205 206
13
203 204 204 205 206 207 205 208 203 206 205 206 204

SAMPLE OUTPUT :
204 205 206

EXPLANATION :
204 is present in both arrays but it's frequency in both of the arrays doesn't match.. same for 205 and 206
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include<map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    map<int, int>mp1, mp2;
    int x, n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        ++mp1[x];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        ++mp2[x];
    }
    for (std::map<int, int>::iterator it = mp1.begin(); it != mp1.end(); ++it)
        std::cout << it->first << " => " << it->second << '\n';
    cout << endl;
    for (std::map<int, int>::iterator it = mp2.begin(); it != mp2.end(); ++it)
        std::cout << it->first << " => " << it->second << '\n';

    
    cout << endl << "Answer :- " << endl;
    map<int, int>::iterator it = mp2.begin();
    while (it != mp2.end()) {
        if (mp1[it->first] < it->second)
            cout << it->first << ' ';
        it++;
    }
    return 0;
}
