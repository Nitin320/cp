int sumOfPowers(int a, int b){
	    
	   int ans=0;
        for(int i=a;i<=b;i++)
        {
            int temp=i;
            for(int j=2;j*j<=temp;j++)
            {
                while(temp%j==0)
                {
                    temp/=j;
                    ans++;
                }
            }
            if(temp>1) ans++;
            continue;
        }
        return ans;
	}
