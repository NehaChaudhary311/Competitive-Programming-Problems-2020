#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;    
    }
    return 0;
}

// } Driver Code Ends


void sort012(int a[], int n)
{
    // coode here 
    int c0 = 0, c1 = 0, c2 = 0;
    for(int i =0; i<n; i++){
        if(a[i] == 0) {
            c0++;
        }
        else if(a[i] == 1){
          c1++;  
        } 
        else{
            c2++;
        }
    }
    int i = 0;
    while(c0--){
        a[i++] = 0;
    }
    while(c1--){
        a[i++] = 1;
    }
    while(c2--){
        a[i++] = 2;
    }
}
