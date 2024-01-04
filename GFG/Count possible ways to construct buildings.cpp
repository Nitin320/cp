int TotalWays(int N)
	{
	    long long int n1 = 2;
	    long long int n2 = 3;
	    
	    long long int mod=1e9+7;
	    long long int ans;
	    
	    if(N == 1) return 4;
	    else if(N == 2) return 9;
	    else{
	        for(long long int i=3; i<=N; i++){
	            ans = (n1+n2)%mod;
	            n1 = n2;
	            n2 = now;
	        }
	        return (ans*ans)%mod;
	    }
	}
