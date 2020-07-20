/*
You have an empty sequence, and you will be given  queries. Each query is one of these three types:

1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<stack>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, i = 0;
    cin >> N;
    
    stack<long int> myStack, maxStack;
    
    while(i < N){
        int type, x;
        cin >> type;
        if(type == 1){
            cin >> x;
            // Push to stacks
            myStack.push(x);
            if(!maxStack.empty()){
                if(x >= maxStack.top()){ maxStack.push(x); }
           }else{
                maxStack.push(x);
            }
        }else if(type == 2){
            // delete element at top
            if(!myStack.empty()){ 
                if(myStack.top() == maxStack.top()) { maxStack.pop(); }
                myStack.pop();
            }
        }else if(type == 3){
            // print maximum
            cout << maxStack.top() << endl;
        }
        
        i++;
    }
    return 0;
}
