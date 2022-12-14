//https://practice.geeksforgeeks.org/problems/power-set4302/1	

public:
	
	
		void solve(string ip, string op, vector<string> &v)
		{
		    
		    if(ip.length()==0)
		    {
		       v.push_back(op);
		       return;
		        
		    }
		    
		    string op1 = op;
		    string op2 = op;
		    op2.push_back(ip[0]);
		    ip.erase(ip.begin()+0);
		    solve(ip,op1,v);
		    solve(ip,op2,v);
		}
		vector<string> AllPossibleStrings(string s){
		    string op = "";
		    vector<string> v;
		    solve(s,op,v);
		     sort(v.begin(), v.end());
		    v.erase(v.begin()+0);
		    return v;
		}
};
