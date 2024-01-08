#include <bits/stdc++.h>
using namespace std;

int main(){
     int a, b , c;
     cin>>a;
     while(a){
          cin>>b;
          cin>>c;
          int ex = b-c;
          for(int i=ex; i<=b; i++){
               cout<<i<<" ";
          }
          for(int i=ex-1; i>=1; i--){
               cout<<i<<" ";
          }
          cout<<endl;
          a--;
     }
}
