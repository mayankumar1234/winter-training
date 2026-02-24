class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // max heap
        // pair(diff,value)
        // we want the largest distance at top
        priority_queue<pair<int,int>>maxHeap;
        for(int i:arr){
            int distance=abs(i-x);
            maxHeap.push({distance,i});

            if(maxHeap.size()>k){
                maxHeap.pop();

            }

        }
        vector<int>result;
        while(!maxHeap.empty()){
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        sort(result.begin(),result.end());
        return result;
    }
};