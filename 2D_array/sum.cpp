#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3][3] = {{5,6,7},{8,9,10},{11,12,2}};
    
    int maxSum = INT_MIN;
    int rowIndex = -1;

    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 3; j++) {
            sum += a[i][j];
        }

        if(sum > maxSum) {
            maxSum = sum;
            rowIndex = i;
        }
    }

    cout << "Maximum sum = " << maxSum << endl;
    cout << "Row index = " << rowIndex << endl;

    return 0;
}
