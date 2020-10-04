/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/
bool comparator(struct val p1, struct val p2) 
{ 
    return (p1.second < p2.second); 
} 
/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{
//Your code here
    int l = 1; 

    sort(p, p + n, comparator); 

    int s = p[0].second; 

    for (int i = 1; i < n; i++) { 
 
        if (p[i].first > s) { 
            l++; 
            s = p[i].second; 
        } 
    } 
    return l; 
}
