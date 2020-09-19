void permute(string a, int l, int r)  
{  
    // Base case  
    if(l==r)
        cout<<a<<" ";  
    else{
     
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]); 
        }  
    }
}  
  
