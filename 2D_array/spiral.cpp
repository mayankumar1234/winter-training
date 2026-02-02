#include<bits/stdc++.h>
using namespace std;    
void spiral(int a[3][3]){
    int top=0, bottom=2, left=0, right=2 ;
    while(top<=bottom && left<=right){
      for(int i=left;i<=right;i++){
        cout<<a[top][i]<<" ";
      }
      top++;
      for(int j=top;j<=bottom;j++){
        cout<<a[j][right]<<" ";
      }right--;
      for(int i=right;i>=left;i--){
        cout<<a[bottom][i]<<" ";
      }bottom--;
        for(int j=bottom;j>=top;j--){
            cout<<a[j][left]<<" ";
    }left++;
    }
    
   
}
int main(){
    int a[3][3] = {{5,6,7},{8,9,10},{11,12,2}};
    spiral(a);
    return 0;
}