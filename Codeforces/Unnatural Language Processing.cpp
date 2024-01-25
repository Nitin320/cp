#include <bits/stdc++.h>
using namespace std;

int main(){
     long long int a;
     cin>>a;
     
     while(a--){
          long long int b;
          cin>>b;
          string s, r;
          cin>>s;
          
          for(long long int i=0; i<b; i++){
               if(s[i] == 'a' || s[i] == 'e') r+='V';
               else r+='C';
          }
          for(long long int i=b-1; i>=0; i--){
               if(i>3 && r[i]=='C' && r[i-1]=='V' && r[i-2]=='C'){
                    s.insert(i-2, ".");
                    i-=2;
               }
               if(i>2&& r[i]=='V' && r[i-1]=='C'){
                    s.insert(i-1, ".");
                    i-=1;
               }
          }
          cout<<s<<endl;
     }
}
