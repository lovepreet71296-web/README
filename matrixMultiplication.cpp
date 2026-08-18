#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter m : ";
    cin>>m;
    cout<<"Enter n : ";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int p,q;
    cout<<"Enter p : ";
    cin>>p;
    cout<<"Enter q : ";
    cin>>q;
    int brr[p][q];
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>brr[i][j];
        }
    }

    if(n!=p){
        cout<<"Multiplication not possible!";
        return -1;
    }

    int res[m][q];
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            res[i][j] = 0;
            for(int k=0; k<n; k++){
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
