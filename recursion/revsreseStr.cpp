#include <iostream>
using namespace std;

void print_reverse(string &str, int s,int e){
      
     if(s>=e) return;

     swap(str[s],str[e]);
return print_reverse(str,s+1,e-1);

      
}

int main(){

      string str = "anupam";

      int s = 0;
      int e = str.length()-1;

      print_reverse(str,s,e);

      

      cout<<str<<endl;
      
      return 0;
}