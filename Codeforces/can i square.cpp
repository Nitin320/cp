#include <bits/stdc++.h>
using namespace std;

int main(){
     long long int a, b;
     cin>>a;
     while(a){
          cin>>b;
          long long int c;
          long long int sum = 0;
          for(int i=0; i<b; i++){
               cin>>c;
               sum += c;
          }
          long long int ans = sqrt(sum);
          if(ans*ans == sum) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
          a--;
     }
}
