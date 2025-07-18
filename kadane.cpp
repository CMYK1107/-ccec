#include<bits/stdc++.h>
#define TASK ""
const int N=1e6+5;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // freopen(TASK".inp","r",stdin);
    // freopen(TASK".out","w",stdout); 

    return 0;
}
// Function to implement Kadane's algorithm
int kadane(vector<int>& arr) {
  int max_current = arr[0];
  int max_global = arr[0];

  for (size_t i = 1; i < arr.size(); i++) {
    max_current = max(arr[i], max_current + arr[i]);
    if (max_current > max_global) {
      max_global = max_current;
    }
  }

  return max_global;
}