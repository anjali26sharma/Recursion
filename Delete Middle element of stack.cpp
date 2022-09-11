https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1

class Solution
{
    public:
    //Function to delete middle element of a stack.
    
    
    void solve(stack<int> &s, int m)
    {
        if(m==1)
       { s.pop();
        return;
       }
        int val = s.top();
        s.pop();
        solve(s,m-1);
        s.push(val);
        
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        if(sizeOfStack == 1)
        {s.pop();
        return; }
        solve(s,(sizeOfStack/2)+1);
        
        
        
        
    }
};
