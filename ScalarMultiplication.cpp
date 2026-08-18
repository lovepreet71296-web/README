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
  int k;
  cout<<"Enter k : ";
  cin>>k;
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cout<<k*arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
