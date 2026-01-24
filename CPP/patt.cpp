#include<iostream>
using namespace std;
int main(){
    // for(int i=0;i<4;i++){
    //     for(int j=3;j>=0;j--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<=i;j++){
    //         if(j%2==0){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"# ";
    //         }   
    //     }
    //     cout<<endl;
    // }
    // for(int i = 1; i <= 4; i++) {
    //     char ch = 'a';
    //     for(int j = 1; j <= i; j++) {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }   
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==0 || i==4 || j==0 || j==4){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}