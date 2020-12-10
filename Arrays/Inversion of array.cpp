//APPROACH 1: O(n^2) - Check for each distant/close pair - where a[i] > a[i+1], if you find any such pair... counter++;


//APPROACH 2: O(nlogn)- Merge Sort, while merging, comparisons would be made, and accordingly counter++ would be made.
#include<iostream>
using namespace std;

long long a[10000000];
long long counter = 0;

void merge(long long a[], long long p, long long q, long long r){
    long long l = q-p+1;
    long long a1[l];

    long long l2 = r-q;
    long long a2[l2];
    
    for(long long i = 0;i<l;i++){
        a1[i] = a[i+p];
    }
    
    for(long long i = 0;i<l2;i++){
        a2[i] = a[q+i+1];
    }
    
    long long left = 0, right = 0, k = p;
    
    while(left < l && right < l2)
    {
        if(a1[left] <= a2[right]){
            a[k] = a1[left];
            left++;
        }
        else{
            a[k] = a2[right];
            right++;
            
            counter += (l-left); // Increementing counter
        }
        k++;
    }
    
    while(left < l){
        a[k++] = a1[left++];
      //  counter++;
    }
    
    while(right < l2){
        // counter++;
        a[k++] = a2[right++];
    }
}

void mergeSort(long long a[], long long p, long long r){
    
    if(p < r)
    {
        long long q = (p+r)/2;
        mergeSort(a, p, q);
        mergeSort(a, q+1, r);
        merge(a, p, q, r);
    }
}

int main() {
    
    long long t;
    cin >> t;
    while(t--){
        counter = 0;
        long long n;
        cin >> n;
        for(long long i = 0;i<n;i++){
            cin >> a[i];
        }
        
        mergeSort(a, 0, n-1);
        cout << counter << endl;
    }
    
    return 0;
}
