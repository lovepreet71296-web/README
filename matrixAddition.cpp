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
  if(m!=p || n!=q){
    cout<<"Addition not possible";
    return -1;
  }
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cout<<arr[i][j] + brr[i][j]<<" ";
    }
    cout<<endl;
  }
}
