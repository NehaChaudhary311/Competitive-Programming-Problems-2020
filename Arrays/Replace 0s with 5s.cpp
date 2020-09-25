int convertFive(int n) {
    // Your code here
    int count = 1,num=0,rem,res;
    while(n)
    {
    res=n/10;
    rem=n%10;
    if(rem==0)
    {
    num=num+count*5;
    }
    
    else num = num + rem*count;
    count = count*10;
    n=n/10;
    
    }
    return num;
}
