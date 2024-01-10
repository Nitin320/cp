class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    int sum = 0, ans = 0;
	    unordered_map<int,int>mp;
	    for(int i=0; i<n; i++){
	        sum += arr[i];
	        int r = sum%k;
	        if(r<0) r+=k;
	        if(r==0) ans = max(ans, i+1);
	        else{
	            if(mp.find(r) != mp.end()) ans = max(ans, i-mp[r]);
	            else mp[r] = i;
	       }
	    }
	    
	    return ans;
	}
};
