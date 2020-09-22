// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
        string res = ""; 
        int len = S.length();
        bool x = true; 
        for (int i=0; i<len; i++) 
        { 
            if (S[i] == ' ') 
                x = true; 
            else if (S[i] != ' ' && x == true) 
            { 
                res.push_back(S[i]); 
                x = false; 
            } 
        } 
        return res;
	    
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	}

    return 0;
} 
  // } Driver Code Ends
