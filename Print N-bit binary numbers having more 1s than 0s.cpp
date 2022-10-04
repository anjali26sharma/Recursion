//https://practice.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1

class Solution{
public:	
	
	void solve(int one, int zero,int n, string op, vector<string> &v)
	{
	    
	    if(n==0)
	   {
	       v.push_back(op);
	       return;
	   }
	   if(one == zero)
	   {
	       string op1 = op;
	       op1.push_back('1');
	       solve(one+1,zero,n-1,op1,v);
	   }
	   if(one>zero)
	   {
	       string op1 = op;
	       string op2 = op;
	       op1.push_back('1');
	       op2.push_back('0');
	       solve(one+1,zero,n-1,op1,v);
	       solve(one,zero+1,n-1,op2,v);
	   }
	    
	}
	vector<string> NBitBinary(int N)
	{
	    string op = "";
	    vector<string> v;
	    solve(0, 0,N, op ,v);
	    return v;
	}
};
