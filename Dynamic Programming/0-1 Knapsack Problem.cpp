#include<iostream>
#include<algorithm>
using namespace std;

int knapSack(int *wt, int *val, int W, int n)
{
    if (W == 0 || n == 0) return 0;
    int kp[n+1][W+1];
    for (int i = 0; i <= n; i++) {                               //weight
        for (int w = 0; w <= W; w++) {                           //value
            if (i == 0 || w == 0) {
                kp[i][w] = 0;
            } else if (wt[i-1] > w) {
                kp[i][w] = kp[i-1][w];    
            } else {
                kp[i][w] = max(kp[i-1][w], kp[i-1][w-wt[i-1]] + val[i-1]);
            }
        }
    }
    return kp[n][W];
}

int main()
 {
    
    int wt[100], val[100], W, t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> W;

        for (int i=0; i<n; i++)
            cin >> val[i];
            
        for (int i=0; i<n; i++)
            cin >> wt[i];
            
        cout << knapSack(wt, val, W, n) << endl;
    }
    return 0;
}
