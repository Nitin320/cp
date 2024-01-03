class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        
        sort(arr, arr+N);
        int ans;
        
        for(int i=0; i<N; i+=3){
            if(i == N-1) ans = arr[i];
            else{
                if(arr[i] == arr[i+1] && arr[i+1] == arr[i+2]) continue;
                else{
                    ans = arr[i];
                    break;
                }
            }
        }
        
        return ans;
        
    }
};
