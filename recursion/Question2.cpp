// Array even elements stroe in the vector

#include<iostream>
#include<vector>
using namespace std;

vector<int> even_store(int arr[],int size,int index){
         

         if(index>=size){
            return vector<int>();
         }

         

      vector<int>v =even_store(arr,size,index+1);
      if(arr[index] % 2 == 0 ){
            v.push_back(arr[index]);
         }

         return v;
}

int main(){

      int arr[] ={10,13,3,4,5};
      int size = 5;
      int index = 0;
     vector<int>ans = even_store(arr,size,index);

     for(auto s:ans){
      cout<<s<<endl;
     }
      return 0;
}