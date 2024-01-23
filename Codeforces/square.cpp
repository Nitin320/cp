#include <bits/stdc++.h>
using namespace std;

int main(){
     int a, b = 0, c = 0, x, y;
     cin>>a;
     while(a){
          cin>>x>>y;
          b = x;
          cin>>x>>y;
          c = x;
          cin>>x>>y;
          if(b == c) c = x;
          cin>>x>>y;
          
          cout<<abs(b-c)*abs(b-c)<<endl;
          a--;
     }
}
