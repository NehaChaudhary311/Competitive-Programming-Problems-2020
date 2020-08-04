/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */

node * insert(node * T,int x)
{
	if (T == NULL)
    {
        T = (node*)malloc(sizeof(node));
        T->val = x;
        T->left = NULL;
        T->right = NULL;
    }
    else if (x > T->val)
    {
        T->right = insert_hidden(T->right, x);
        if (BF_hidden(T) == -2)
        {
            if (x > T->right->val)
            {
                T = RR_hidden(T);
            }
            else
            {
                T = RL_hidden(T);
            }
        }
    }
    else if (x < T->val)
    {
        T->left = insert_hidden(T->left, x);
        if (BF_hidden(T) == 2){
            if (x < T->left->val)
            {
                T = LL_hidden(T);
            }
            else
            {
                T = LR_hidden(T);
            }
        }
    }
    T->ht = ht_hidden(T);
    return(T);
  
}
