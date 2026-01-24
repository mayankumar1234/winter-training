class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int n = arr.size();
         if(n < 3) return -1;

        int max = INT_MIN;
        int smax = INT_MIN;
        int tmax = INT_MIN;

        for(int i = 0; i < n; i++) {
            if(arr[i] > max) {
                tmax = smax;
                smax = max;
                max = arr[i];
            }
            else if(arr[i] > smax ) {
                tmax = smax;
                smax = arr[i];
            }
            else if(arr[i] > tmax) {
                tmax = arr[i];
            }
        }

        return (tmax == INT_MIN) ? -1 : tmax;
    }
};
