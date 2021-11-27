#include<bits/stdc++.h>
using namespace std;

vector<string>res;


void helper(string &s,string curr,int idx,string word){

       if(idx==s.length()){
           if(word==curr){
                res.push_back(curr);
           }
       
           return;
       }


       helper(s,curr,idx+1,word);
       helper(s,curr+s[idx],idx+1,word);
       return;

}
int main(){


    string s="babgbag";

    string word="bag";
    helper(s,"",0,word);


    for(auto it:res) cout<<it<<" ";

    return 0;
}