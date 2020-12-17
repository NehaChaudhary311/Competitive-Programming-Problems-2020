class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	    
	    int len = S.length();
	    int l = 0, h = len -1;
        while (h > l) { 
            if (S[l++] != S[h--]) { 
                return 0; 
            } 
        }
        return 1;
	}

};
