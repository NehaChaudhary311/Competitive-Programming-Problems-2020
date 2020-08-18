/*
Input:
2
ABC
ABSG

Output:
ABC ACB BAC BCA CAB CBA 
ABGS ABSG AGBS AGSB ASBG ASGB BAGS BASG BGAS BGSA BSAG BSGA GABS GASB GBAS GBSA GSAB GSBA SABG SAGB SBAG SBGA SGAB SGBA
*/

#include <iostream>
using namespace std;
void permute(string a, int l, int r)  
{  
     
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

int main()  
{  
    int T = 0;
    cin>>T;
    while(T>0){
        string str;
        cin>>str;
        permute(str, 0, str.length()-1);
        cout<<endl;
        T--;
    }
    return 0;  
} 
