void rotate(int A[], int n) 
{ 
    int temp = A[n - 1], i; 
    for (i = n - 1; i > 0; i--) {
        A[i] = A[i - 1];
    }
    A[0] = temp; 
} 
