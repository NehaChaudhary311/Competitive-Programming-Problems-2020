class Solution {
    bool t[1001];
public:
    bool divisorGame(int n) {
        bool t[n+1];
        for(int i=0;i<=n;i++) t[i]=false;
        for(int i=1;i<=n;i++)
        {
            if(i==1) t[i]=false;
            else if(i==2) t[i]=true;
            else
            for(int j=1;j*j<=i;j++)
            {
                if(i%j==0)
                {
                   t[i] = !t[i-j];
                    break;
                }
            }
        }
        return t[n];
    }
};
