#include <iostream>
using namespace std;

void double_arry(int arr[], int size, int index)
{
      if (index > size)
      {
            return;
      }

      arr[index] = 2 * arr[index];
      return double_arry(arr, size, index + 1);
}

int main()
{

      int arr[] = {10, 13, 3, 4, 5};
      int size = 5;
      int index = 0;
      cout << "Before -> ";
      for (auto x : arr)
      {
            cout << x << " ";
      }
      cout<<endl;
      double_arry(arr, size, index);
      cout << "After  -> ";
      for (auto x : arr)
      {
            cout << x << " ";
      }

      return 0;
}