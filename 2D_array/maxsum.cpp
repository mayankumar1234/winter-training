#include<bits/stdc++.h>
using namespace std;
void columnSum(int a[3][3]){
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum=sum+a[i][j];
        }
        cout<<sum<<endl;
    }
}
int maxColumnSum(int a[3][3]){
    int maxSum=INT_MIN;
    int colIndex=-1;
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum=sum+a[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            colIndex=j;
        }
    }
    cout<<"Maximum sum = "<<maxSum<<endl;
    cout<<"Column index = "<<colIndex<<endl;
}
int main(){
    int a[3][3] = {{5,6,7},{8,9,10},{11,12,2}};
    
    columnSum(a);
    maxColumnSum(a);   

    return 0;
}