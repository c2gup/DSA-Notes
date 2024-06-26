#include <iostream>
#include <vector>
using namespace std;

// Question: How do you print an array in  using recursion?
//  void print_array( int arr[], int size, int index){
//          if(index>=size){
//             return;
//          }

        
//          print_array(arr,size,index+1);
//           cout<<arr[index]<<endl;


//  }

//  search in a arry --->

//   void search_arry(int arr[], int size, int index,int target){
//       if(index>=size){
//             return;
//       }

//       if(target == arr[index]){
//             cout<< "index - "<<index<<endl;
//       }

//       search_arry(arr,size,index+1,target);
//   }

// Print all even elements in the array -->

// void print_even(int arr[],int size,int index,vector<int>& ans){
//       if(index>=size){
//             return;
//       }

//       if(arr[index]%2 == 0){
//             ans.push_back(arr[index]);
//       }

//       print_even(arr,size,index+1,ans);
// }
void print_even(int n1,vector<int>& ans){
      if(n1==0){
            return;
      }
       print_even(n1/10,ans);
     int digit = n1%10;
     ans.push_back(digit);

     
}
int main() {  

      // int arr[5] = {1,2,64,55,8};
      // int size = 5; 
      // int index = 0;
      int n1 =3456;
      
      vector<int>ans;
      // print_array(arr,size,index);
      // search_arry(arr,size,index,target);
      // print_even(arr,size,index,ans);
      print_even(n1,ans);

      for(auto nums:ans){
            cout<<nums<<endl;
      }
    

    return 0;
}