#include <iostream> 
using namespace std; 
  
bool isAutomorphic(int N) 
{ 
    // Store the square 
    int sq = N * N; 
  
    // Start Comparing digits 
    while (N > 0) { 
        // Return false, if any digit of N doesn't 
        // match with its square's digits from last 
        if (N % 10 != sq % 10) 
            return false; 
  
        // Reduce N and square 
        N /= 10; 
        sq /= 10; 
    } 
  
    return true; 
} 
  
// Driver code 
int main() 
{ 
    int N;
    cin>>N;
  
    isAutomorphic(N) ? cout << "Automorphic"
                     : cout << "Not Automorphic"; 
  
    return 0; 
} 
