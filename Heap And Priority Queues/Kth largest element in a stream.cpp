class KthLargest {
private:
   priority_queue <int, vector<int>, greater<int>> pq;
    int a;
public:
    KthLargest(int k, vector<int>& nums) {
          a=k;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>k)
                pq.pop();
        } 
    }
    int add(int val) {
        pq.push(val);
        if(pq.size()>a)
            pq.pop();
        return pq.top();
    }
};
