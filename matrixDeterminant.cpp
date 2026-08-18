#include<iostream>
using namespace std;

int determinant(int arr[][10], int n){
    // Base case
    if(n == 2){
        return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
    }
    int det = 0;
    for(int j = 0; j < n; j++){
        int sub[10][10];
        int subRow = 0;
        for(int i = 1; i < n; i++){
            int subCol = 0;
            for(int k = 0; k < n; k++){

                if(k == j)
                    continue;

                sub[subRow][subCol] = arr[i][k];
                subCol++;
            }
            subRow++;
        }
        int sign;
        if(j % 2 == 0)
            sign = 1;
        else
            sign = -1;
        det += sign * arr[0][j]
             * determinant(sub, n-1);
    }
    return det;
}

int main(){
    int n;
    cout<<"Enter size of matrix : ";
    cin>>n;
    int arr[10][10];
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Determinant = "
         << determinant(arr, n);
    return 0;
}
