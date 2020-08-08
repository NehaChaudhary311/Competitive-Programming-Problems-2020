#include<cstdio>
#include<algorithm>
using namespace std;

int T, N, K, A[1024], B[1024];

int main() {
    scanf("%d", &T);
    for (;T--;) {
    bool yes = true;
    
    scanf("%d%d", &N, &K);
    for (int i=0; i<N; i++) scanf("%d", A+i);
    for (int i=0; i<N; i++) scanf("%d", B+i);
    sort(A, A+N);
    sort(B, B+N);
    for (int i=0; i<N; i++) {
        if (A[i]+B[N-1-i] < K) {
        yes = false;
        break;
        }
    }
    puts(yes ? "YES" : "NO");
    }
    return 0;
}
