#include<iostream>
#include<string>
using namespace std;
int main(){
   string s;
   while(cin>>s && s!="0"){
      int v=0,degree=1;
      for(int k=0;k<s.size();k++)v+=s[k]-'0';
      while(v%9==0 && v!=9){
         int sum=0;
         for(;v;v/=10)sum+=v%10;
         v=sum;degree++;
      }
      if(v%9)cout<<s<<" is not a multiple of 9."<<endl;
      else cout<<s<<" is a multiple of 9 and has"
         <<" 9-degree "<<degree<<"."<<endl;
   }
}
