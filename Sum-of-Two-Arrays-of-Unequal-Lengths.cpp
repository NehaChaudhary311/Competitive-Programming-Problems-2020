#include<iostream>
using namespace std;

int main(){

      cout <<"Enter size of two arrays";
      int n, m;
      cin >> n >> m;
      int a[n], b[n];

      for(int i = 0; i < n ; i++)
        cin >> a[i];
      for(int i = 0; i < m ; i++)
        cin >> b[i];

      for(int i = 0; i < min(n,m) ; i++)
        cout << a[i] + b[i] <<" ";

      if(n < m){
        for(int i = n ; i < m ; i++){
             cout << b[i] << " ";
        }
      }
      else{
        for(int i = m ; i < m ; i++){
             cout << a[i] << " ";
        }
      }
      return 0;
}
