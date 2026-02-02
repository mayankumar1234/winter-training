#include <bits/stdc++.h>
using namespace std;

bool search(int arr[4][4], int key){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[4][4];
    int key;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    cin >> key;
    cout << search(arr, key);
}
