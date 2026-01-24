#include<bits/stdc++.h>
using namespace std; 
int linear_search(int arr[],int n, int key){
    for(int i=0;i<5;i++){
        if(arr[i]==key  ){
            if(arr[i]<5){
                return 2*key;
            }else{
                return key/2;
            }
            
        }
    }

}   
int main(){
    int arr[5]={2,3,1,5,4};
    int key=1;
    
    cout<< linear_search(arr,5,1);
}