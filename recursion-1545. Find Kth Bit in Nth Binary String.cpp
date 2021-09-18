1545. Find Kth Bit in Nth Binary String

class Solution {
public:
    
    
        void invert(string &s){
            
            for(int i=0;i<s.length();i++){
                
                 s[i]=s[i]=='1'?'0':'1';
            }
            
          
        }
    
      void Reverse(string& str){
    int n = str.length();
 
  
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
          
          
         }
    
    
        char solve(string &s,int idx,int k,int n){
            
            
              if(idx==n){
                  
                  return s[k-1];
              }
            
              string tmp=s;
            
              Reverse(tmp);
            
              invert(tmp);
              
              s=s+"1"+tmp;
            
         return   solve(s,idx+1,k,n);
            
             
        }
    char findKthBit(int n, int k) {
          
           string s="0";
        
          return solve(s,1,k,n);
    }
};
