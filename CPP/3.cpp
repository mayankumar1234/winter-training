#include<iostream>
using namespace std;
// void hello(){
//     cout<<"Hello World";
// }
// void hello2(){
//     hello();
// }
//  this will not work, series matters in cpp
// void hello2(){
//     hello();
// }
// void hello(){
//     cout<<"Hello World";
// }
float sub (float a,float b){
    return(a-b);
}
int main() {
    // hello2();
    cout<<sub(5.4,2.3);
    return 0;
}