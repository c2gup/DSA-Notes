#include <iostream>
 using namespace std;
 int last_Occurarnce(string &str,char x,int index,int ans){

      if(index>=str.length()){
            return ans;

      }

       if(str[index] == x){
                  ans = index;
                 
            }
             last_Occurarnce(str,x,index+1,ans);

            return ans;
 }

 int main(){

   string str = "anuukesse";
   int index = 0;
   int ans = -1;
   char x = 's';

     ans =  last_Occurarnce(str,x,index,ans);

      cout <<ans<<endl;
      return 0;
 }