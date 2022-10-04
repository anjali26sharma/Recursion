//https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
    void solve(int O, int C, string op, vector<string> &v)
    {  
        
        if(O==0 && C==0)
        {
           v.push_back(op);
            return;
        }
        if(O== C)
        {
            op.push_back('(');
            solve(O-1,C,op,v);
        }
        else if(O==0 && C!=0)
        {
            op.push_back(')');
            solve(O,C-1,op,v);
                
        }
        else if(O<C)
        {
            string op1 = op;
            string op2 = op;
            op1.push_back('(');
            op2.push_back(')');
            solve(O-1,C,op1,v);
            solve(O,C-1,op2,v);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        string op ="";
        vector<string> v;
        solve(n,n,op,v);
        return v;
    }
};
