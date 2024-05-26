#include <iostream>
using namespace std;

int getUniqueElement(int arr[],int size){

      int ans = 0;
      for (int i = 0; i < size; i++)
      {
            ans = ans^arr[i];
      }

      return ans;
      


}

int main(){

    int size = 5;
    int arr[size] = {11,11,2,4,4};
    int result = getUniqueElement(arr,size);
    cout << result<<endl;

      return 0;
}