#include<bits/stdc++.h> 
using namespace std; 




//User function Template for C++
class Solution
{
    bool check(int n)
    {
        int hash[10]={0},x;
        while(n!=0)
        {
            x=n%10;
            if(hash[x]==0)
            {
                hash[x]=1;
            }
            else
            {
                return false;
            }
            n=n/10;
        }
        return true;
    }
public:
    vector<int> uniqueNumbers(int L,int R)
    {
        vector<int> a;
        for(int i=L; i<=R; i++)
        {
            if(check(i)==true)
            {
                a.push_back(i);
            }
        }
        return a;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r ;
        cin >> l >> r;
		Solution ob;
		vector<int> numbers = ob.uniqueNumbers(l,r);
		
		for(int num : numbers){
		   cout<<num<<" ";
		}
		cout<<endl;
        
    }
    return 0;
}  