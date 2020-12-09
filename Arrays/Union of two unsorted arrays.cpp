/*
Keep putting all the elements of both the arrays in a set. Set will not allow duplicate values
*/
#include<iostream>
#include<unordered_set>
using namespace std;

int unionFunc(int A[], int B[], int n, int m){
    unordered_set<int> s;
    for(int i = 0; i<n; i++){
        s.insert(A[i]);
    }
    for(int i = 0; i<m; i++){
        s.insert(B[i]);
    }
    return s.size();
}
int main()
 {
	//code 
	int T;
	cin>>T;
	while(T--){
	    int N, M;
	    cin>>N>>M;
	    int *A = (int*)malloc(sizeof(int)*N);
	    int *B = (int*)malloc(sizeof(int)*M);
	    for(int i = 0; i<N; i++){
	        cin>>A[i];
	    }
	    for(int j = 0; j<M; j++){
	        cin>>B[j];
	    }
	    cout<<unionFunc(A, B, N, M)<<endl;
	}
	return 0;
}
