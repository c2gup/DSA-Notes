#include <iostream>
using namespace std;

bool isSearch(int arr[],int size,int index,int target){

  if(index>=size) return false;

  if(arr[index]==target) return true;

  return isSearch(arr,size,index+1,target);
  
}

int main() {
  int arr[] ={2,3,45,56,4};
  int size = 5;
  int index = 0;
  int target = 56;
  bool ans = isSearch(arr,size,index,target);
 if(ans){
      cout<<"Ans mil gya hai";
 }else{
      cout<<"Nhi mila hai";
 }
  return 0;
}