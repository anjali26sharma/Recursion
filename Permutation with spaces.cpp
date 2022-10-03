//https://practice.geeksforgeeks.org/problems/permutation-with-spaces3627/1

class Solution{
public:

    void solve(string ip, string op, int index , vector<string> &v)
    {
        if(index >= ip.size())
        {
            v.push_back(op);
            return;
        }
            if(index == 0)
            {
                op.push_back(ip[index]);
                solve(ip,op,index+1,v);
            }
            else
            {
                string op1 = op;
                string op2 = op;
                op1.push_back(' ');
                op1.push_back(ip[index]);
                op2.push_back(ip[index]);
                solve(ip,op1,index+1, v);
                solve(ip,op2,index+1,v);
            }
    }
    
    vector<string> permutation(string S){
        int index = 0;
        string op = "";
        vector<string> v;
        solve(S,op,index,v);
        return v;
    }
};
