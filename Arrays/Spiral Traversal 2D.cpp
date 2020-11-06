/*
Example:
Input:
2
4 4
1 2 3 4 
5 6 7 8 
9 10 11 12
13 14 15 16

3 4
1 2 3 4
5 6 7 8
9 10 11 12

Output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
1 2 3 4 8 12 11 10 9 5 6 7
*/
#include<iostream>
using namespace std;
void spiralTraversal(int** a, int m, int n) {
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    int dir = 0;

    while (left <= right && top <= bottom) {
        if (dir == 0) {
            for (int i = left; i <= right; i++) {
                cout << a[top][i]<<" ";
            }
            top++;
        }
        else if (dir == 1) {
            for (int i = top; i <= bottom; i++) {
                cout << a[i][right]<<" ";
            }
            right--;
        }
        else if (dir == 2) {
            for (int i = right; i >= left; i--) {
                cout << a[bottom][i]<<" ";
            }
            bottom--;
        }
        else if (dir == 3) {
            for (int i = bottom; i >= top; i--) {
                cout << a[i][left]<<" ";
            }
            left++;
        }
        dir = (1 + dir) % 4;
    }
}
int main()
{
    //code
    int T = 0;
    cin >> T;
    while (T--) {
        int m, n;
        cin >> m >> n;
        //initialising array
        int** a = new int* [m];
        for (int i = 0; i < m; i++)
            a[i] = new int[n];
        //array input
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        spiralTraversal(a, m, n);
    }
