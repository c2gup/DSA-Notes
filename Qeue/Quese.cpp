#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
      int *arr;
      int front;
      int size;
      int rear;

      Queue(int size)
      {
            arr = new int[size];
            this->size = size;
            front = -1;
            rear = -1;
      };

      void push(int val)
      {
            if (rear == size - 1)
            {

                  cout << "overflow hit" << endl;
                  return;
            }
            else if (front == -1 && rear == -1)
            {
                  front++;
                  rear++;

                  arr[front] = val;
            }
            else
            {

                  rear++;
                  arr[rear] = val;
            }
      }

      void pop()
      {
            if (front == -1)
            {
                  cout << "Queue underflow" << endl;
                  return;
            }
            else
            {
                  cout << arr[front] << endl;
                  front++;
            }
      }

      bool empty()
      {
            if (front == -1)
            {
                  return true;
            }
            else
            {
                  return false;
            }
      }



};

int main()
{
      // This is stl queue->

      //     queue<int> q;
      //     q.push(10);
      //     q.push(20);
      //     q.push(30);

      //     // Printing the queue elements
      //     while (!q.empty()) {
      //         cout << q.front() << " "; // Print the front element
      //         q.pop();                  // Remove the front element
      //     }

      Queue q(5);

      q.push(10);
      q.push(20);
      q.push(30);
      q.push(40);
      q.push(50);

      q.pop();
      q.pop();
      q.pop();
      q.pop();
      q.pop();

      return 0;
}
