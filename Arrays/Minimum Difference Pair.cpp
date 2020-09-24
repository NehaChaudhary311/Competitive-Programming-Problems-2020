#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 0;i < n;i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        int diff = a[1] - a[0];
        for(int i = 1;i < n-1;i++)
        {
            if(a[i+1] - a[i] < diff)
                diff = a[i+1] - a[i];
        }
        cout << diff << endl;
    }
	//code
	return 0;
}
