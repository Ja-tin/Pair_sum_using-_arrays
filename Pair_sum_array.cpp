#include <iostream>
#include <vector>
using namespace std;

int main(){
  // vector <int> arr{10,20,30};
  int n;
  cout<<"Enter the number of elements in vector:-";
  cin>>n;
  vector <int> arr(n);
  for(int i=0; i<arr.size(); i++){
    cout<<"Enter the value of element "<<i+1<<":- ";
    cin>>arr[i];
  }
  cout<<"Array is:- ";
  cout<<"{";
  for(int j=0; j<arr.size();j++){
    cout<<arr[j];
    if (j!= n - 1) {
            cout << ", ";
        }
  }
  cout<<"}";
  cout<<endl;
  
  int sum;
  cout<<"Enter the value of Sum:-";
  cin>>sum;
  for(int k=0; k<arr.size(); k++){
    for(int l=k+1; l<arr.size(); l++){
      if(arr[k]+arr[l]==sum){
      cout<<"("<<arr[k]<<","<<arr[l]<<")"<<endl;
    }
  }
}
  
}