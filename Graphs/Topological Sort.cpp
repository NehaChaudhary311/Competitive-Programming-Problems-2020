void dfstopo(vector<int> adj[],stack<int> &stk,bool visited[],int s){
    visited[s] = true;
    for(auto i : adj[s]){
        if(!visited[i])
        dfstopo(adj,stk,visited,i);
    }   
    stk.push(s);
}
vector<int> topoSort(int V, vector<int> adj[]) {
    stack<int> stk;
    bool visited[V]={false};
    for(int i=0;i<V;i++){
        if(!visited[i])
        dfstopo(adj,stk,visited,i);
    }
    vector<int> ans;
    while(!stk.empty()){
        ans.push_back(stk.top());
        stk.pop();
    }
    return ans;
}
