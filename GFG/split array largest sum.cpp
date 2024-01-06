class Solution {
public:
    int splitArray(int arr[], int n, int m) {
        
        int left = 0, right = 0;
        for(int i=0; i<n; i++){
            left = max(left, arr[i]);
            right += arr[i];
        }
        
        while(left < right){
            int mid = (left+right)/2;
            int sum = 0, pieces = 1;
            for(int i=0; i<n; i++){
                if(sum + arr[i] > mid){
                    sum = arr[i];
                    pieces++;
                }
                else sum += arr[i];
            }
            if(pieces <= m) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};
