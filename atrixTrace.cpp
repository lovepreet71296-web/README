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
  if(m != n){
    cout<<"Trace is not possible for a non-square matrix!";
    return -1;
  }
  int trace = 0;
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      if(i==j) trace += arr[i][j];
    }
  }
  cout<<"Trace of the matrix is : "<<trace;
}
