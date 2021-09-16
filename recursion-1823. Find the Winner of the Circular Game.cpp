class Solution {
public:
    
         int ans=0;
        void solve(vector<int>&v,int idx,int k){
            
               if(v.size()==1){
                    ans=v[0];
                   return;
               }
            
            idx=(idx+k)%v.size();
              
             v.erase(v.begin()+idx);
            solve(v,idx,k);
            
            
        }
    int findTheWinner(int n, int k) {
        
        
        
        vector<int>v;
        
        for(int i=1;i<=n;i++){
            
            v.push_back(i);
        }
        
        int idx=0;
        solve(v,idx,k-1);
        
        return  ans;
    }
};
