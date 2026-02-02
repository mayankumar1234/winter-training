#include<bits/stdc++.h>
using namespace std;
long long countPerfectSquaresInRange(long long L, long long R) {
    // add your code here
  long long start=sqrt(L);
  long long end=sqrt(R);
   if(start>end)
   return 0;
   return end-start+1;
}

int main() {
    long long L, R;
    cin >> L >> R;
    cout << countPerfectSquaresInRange(L, R);
    return 0;
}
