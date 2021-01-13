/*
Given elements as nodes of the two linked lists. The task is to multiply these two linked lists, say L1 and L2. 
Note: The output could be large take modulo 109+7.

Input:
2
3 2
1
2
Output:
64
Explanation:
Testcase 1: 32*2 = 64.

*/
long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
    if(l1 == NULL || l2 == NULL) return 0;
    long long int sum1 = 0, sum2 = 0;
    long long int m = 1000000007;
    while(l1 != NULL)
    {   sum1 = ((sum1%m)*10)%m + l1->data;
        l1 = l1->next;
    }
    while(l2 != NULL)
    {   sum2 = ((sum2%m)*10)%m + l2->data;
        l2 = l2->next;
    }
    return ((sum1%m)*(sum2%m))%m;
}
