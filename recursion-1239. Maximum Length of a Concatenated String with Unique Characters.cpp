// 1239. Maximum Length of a Concatenated String with Unique Characters
class Solution {
public:
    
     bool isUnique(string s){
         
           set<char>st;
         for(int i=0;i<s.length();i++){
             
            
             
               if(st.find(s[i])!=st.end()) return false;
             
              st.insert(s[i]);
         }
         
         return true;
         
         
     }
    
    
      void solve(vector<string>&nums, string str,int idx,int &maxlen){
          
           if(!isUnique(str)) return;
         
          
           int size=str.length();
          
             cout<<size<<" ";
           maxlen=max(maxlen,size);
          
            for(int i=idx;i<nums.size();i++){
                  
                 string curr=nums[i];
                solve(nums,str+curr,i+1,maxlen);
            }
          
        
      }
    int maxLength(vector<string>& arr) {
    
        
        int maxlen=0;
         
        solve(arr,"",0,maxlen);
        return maxlen;
         
        
        
    }
};
