#include <iostream>
#include <string>
using namespace std;

void last_occr(string ch,int i , int &ans ,char target){

      if(i<0){
        return;
      }

      if(ch[i] == target){
            ans = i;
            return;
      }
      

      last_occr( ch, i-1, ans ,target);

}

int main(){

      
      string ch = "abcdedfdgd";
      int ans = -1;
      int i = 0;
      char target ='d';
       
      last_occr( ch, ch.size()-1, ans ,target);
      

      cout<< "Your and is ->"<<ans<<endl;


      return 0;
}