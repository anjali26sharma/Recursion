//https://leetcode.com/problems/letter-case-permutation/

class Solution {
public:
    
    void solve(string ip, string op, vector<string> &v)
    {
        if(ip.length()==0)
        {
            v.push_back(op);
            return;
        }
        if(isdigit(ip[0]))
        {
            op.push_back(ip[0]);
            ip.erase(ip.begin()+0);
            solve(ip,op,v);
        }
        else
        {
            string op1 = op;
            string op2 = op;
            op1.push_back(tolower(ip[0]));
            op2.push_back(toupper(ip[0]));
            ip.erase(ip.begin()+0);
            solve(ip,op1,v);
            solve(ip,op2,v);
        }
    }
    vector<string> letterCasePermutation(string s) {
        string op ="";
        vector<string> v;
        solve(s,op,v);
        return v;
    }
};
