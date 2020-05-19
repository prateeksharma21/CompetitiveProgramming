#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define all(c) c.begin(),c.end()
#define int ll
using ll = long long;
using pii = pair<int,int>;
const int MOD = 1e9+7, N = 1e5 + 10; 

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   vector<int> A(n);
   for(int i=0;i<n;i++){
      cin >> A[i];
   }
   auto compute = [&](vector<int> &A){
      int ans = 0;
      f(i,1,A.size()){
         ans = max(ans,A[i]-A[i-1]);
      }
      return ans;
   };
   int res = 1e18;
   f(i,1,n-1){
      vector<int> B;
      f(j,0,n){
         if(i!=j) B.pb(A[j]);
      }
      res = min(res,compute(B));
   }
   cout << res << '\n';
   return 0;
}