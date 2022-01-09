#include <iostream>
using namespace std;

int searching(int arr[],int n,int key){

  for(int i=0;i<n;i++)
    if (arr[i]==key)
      return i;
return -1;
}

int main() {
  int n,key;
  int arr[]={10,20,30,40,50};
  n = sizeof(arr) / sizeof(arr[0]);
  key=50;
 // cin>>n;
  //for(int i=0;i<n;i++){
    //cin>>arr[i];
  //}
  //cin>>key;
  int output=searching(arr,n,key);
   cout<<output<<endl;
} 
