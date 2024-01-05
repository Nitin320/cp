#include <bits/stdc++.h>
using namespace std;
 
int main(){
     int a, b;
     cin>>a;
     int chest = 0, biceps = 0, back = 0;
     string now = "chest";
     
     for(int i=0; i<a; i++){
          cin>>b;
          if(now == "chest"){
               chest += b;
               now = "biceps";
          }
          else if(now == "biceps"){
               biceps += b;
               now = "back";
          }
          else{
               back += b;
               now = "chest";
          }
     }
     if(chest >= biceps && chest >= back) cout<<"chest"<<endl;
     else if(biceps >= chest && biceps >= back) cout<<"biceps"<<endl;
     else cout<<"back"<<endl;
}
