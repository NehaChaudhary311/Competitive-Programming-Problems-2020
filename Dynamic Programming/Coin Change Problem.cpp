#include<iostream>
using namespace std;
int count(int S[], int m, int n)
{
   
    int table[16];

    memset(table, 0, sizeof(table));

    table[0] = 1;

    for (int i = 0; i < m; i++)
        for (int j = S[i]; j <= n; j++)
            table[j] += table[j - S[i]];
    for (int i = 0; i < 16; i++) {
        cout << table[i] << " ";
    }
    cout << endl;
    return table[n];
}
int main()
{
    int arr[] = { 2,3,5,10 };
    int m = sizeof(arr) / sizeof(arr[0]);
    int n = 15;
    cout << count(arr, m, n);
    return 0;
}
