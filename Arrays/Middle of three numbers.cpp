class Solution{
  public:
    int middle(int a, int b, int c){
        
        int x = a - b; 
        int y = b - c; 
        int z = a - c;   
        
        //x > 0 implies a>b
        //y > 0 implies b>c
        if (x * y > 0) return b; 
        //now, b can't be the middle, so checking between a and c
        //which we can do using values of x and z
        else if (x * z > 0) return c; 
        else return a; 
    }
};
