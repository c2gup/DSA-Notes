#include <iostream>
#include <string>
using namespace std;

void reverse_string(string& ch,int s, int e){
  if(s>=e){
      return;
  }

  swap(ch[s],ch[e]);

  reverse_string(ch,s+1,e-1);
}

int main(){


      string ch = "anupam";
      cout<<ch<<endl;

      int s = 0;
      int e = ch.size()-1;

         reverse_string(ch,s,e);
      cout<< "Before -> "<<ch<<endl; 
    
      return 0;
}