//https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1

class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int S, int D, int H) {
       if(N==1)
       {
           cout<<"move disk "<< N <<" from rod "<< S <<" to rod "<<D<<endl;
           return 1;
       }
       
       int small = toh(N-1,S,H,D);
       cout<<"move disk "<< N <<" from rod "<< S <<" to rod "<<D<<endl;
       int small2 = toh(N-1,H,D,S);
       return small + small2 + 1;
    }

};
