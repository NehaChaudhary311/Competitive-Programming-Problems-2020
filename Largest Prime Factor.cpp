#include<cmath.h>
#include <iostream>
using namespace std;

long long maxPrimeFactors(long long n) 
{ 
    long long maxPrime = -1; 
  
    // Print the number of 2s that divide n 
    while (n % 2 == 0) { 
        maxPrime = 2; 
        n = n/2;
    } 
  
    // n must be odd at this point, thus skip 
    // the even numbers and iterate only for 
    // odd integers 
    for (int i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0) { 
            maxPrime = i; 
            n = n / i; 
        } 
    } 
  
    // This condition is to handle the case 
    // when n is a prime number greater than 2 
    if (n > 2) 
        maxPrime = n; 
  
    return maxPrime; 
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        long long res =maxPrimeFactors(n);
        cout<<res<<endl;
    }
    return 0;
}
