#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define int ll
#define f(i,x,n) for(int i=x;i<n;i++)
#define all(c) c.begin(),c.end()
using ll = long long;
using pii = pair<int,int>;
const int MOD = 1e9+7, N = 1e5 + 10;
 
void test(){
   int n;
   cin >> n;
   int sm = 1;
   vector<int> A = {1};
   while(sm<n){
      A.pb(A.back()*2);
      sm += A.back();
   }
   sm -= n;
   int c = A.size()-1;
   while(sm){
      if(A[c]/2<=sm){
         sm -= A[c]/2;
         A[c] /= 2;
      }else{
         A[c] -= sm;
         sm = 0;
      }
      c--;
   }
   cout << A.size()-1 << '\n';
   f(i,1,A.size()){
      cout << A[i]-A[i-1] << ' ';
   }
   cout << '\n';
   return;
}

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int tt = 1;
   cin >> tt;
   f(i,0,tt) test();   
   return 0;
}