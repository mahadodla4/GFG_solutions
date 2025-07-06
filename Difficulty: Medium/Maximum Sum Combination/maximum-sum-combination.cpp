class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
        priority_queue <pair <int, pair<int, int>>> pq;
        map<pair <int, int>, bool> vis;
        vector<int>res;
        
        int n = a.size();
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        
        pq.push({a[0]+b[0], {0,0}});
        vis[{0,0}] = true;
        
        while(res.size() < k){
            int sum = pq.top().first;
            int i = pq.top().second.first;
            int j = pq.top().second.second;
            res.push_back(sum);
            pq.pop();
            
            if(i+1 < n && !vis[{i+1,j}]){
                vis[{i+1,j}] = true;
                pq.push({a[i+1]+b[j], {i+1,j}});
            }
            if(j+1 < n && !vis[{i,j+1}]){
                vis[{i,j+1}] = true;
                pq.push({a[i]+b[j+1], {i,j+1}});
            }
        }
        
        return res;
    }
};


