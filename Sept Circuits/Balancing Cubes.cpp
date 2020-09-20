#include<iostream>
using namespace std;
int numOfOperations(int num){
    if(num==0)
        return 0;
    else if(num == 1)
        return 1;
    else if(num ==2)
        return 2;
    else if(num %2 == 0){
        return min(numOfOperations(num/2), numOfOperations(num/2));
    }
    else
        return max(numOfOperations(num/2),numOfOperations(num -(num/2)));



}

int main(){
    int num = 0, ans;
    cin>>num;
    ans = numOfOperations(num);
    cout<<ans;
}
/*
OR
*/
int numOfOperations(int num){
    int ans = 0;
    while(1)
    {
        if(num ==1)
            break;
        num = num - ((num/3) + (num/3));
        ans++;
        if(num <= 3)
        {
            ans++;
            break;
        }
    }
    return ans;
}
