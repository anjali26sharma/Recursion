//https://practice.geeksforgeeks.org/problems/reverse-a-stack/1

class Solution{
public:

    void insert(stack<int> &s, int item)
    {
        if(s.size()==0)
        {
            s.push(item);
            return;
        }
        
        int val = s.top();
        s.pop();
        insert(s,item);
        s.push(val);
    }
    stack<int> Reverse(stack<int> s){
        if(s.size()==1)
        return s;
        int val = s.top();
        s.pop();
        stack<int> s2 = Reverse(s);
        insert(s2,val);
        return s2;
        
    }
};
