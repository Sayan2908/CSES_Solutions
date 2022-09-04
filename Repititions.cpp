#include <iostream>
using namespace std;
int main() {
   string s;
   int i,c=0,f=1;
   cin>>s;
   for(i=1;i<s.length();i++){
       if(s.at(i)==s.at(i-1)){
           f++;
       }
       else{
               if(f>c)
               c=f;
               f=1;
               
           }
       
   }
   if(f>c)
   c=f;
   cout<<c;
   return 0;
}