//https://leetcode.com/problems/subsets/

class Solution {
public:
    
   void solve(vector<int> ip, vector<int> op, vector<vector<int>> &v)
   {
       if(ip.size()==0)
       {
           v.push_back(op);
           return;
       }
       
       vector<int> op1 = op;
       vector<int> op2 = op;
        
       op2.push_back(ip[0]);
       ip.erase(ip.begin()+0);
       solve(ip,op1,v);
      solve(ip,op2,v);
       
   }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> op;
        solve(nums,op,v);
        return v;
    }
};
