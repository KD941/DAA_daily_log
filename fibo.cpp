#include<iostrem>
#include<vector>
using namespace std;
int counterN =0,counterM=0;
int fiboNormal(int n)
{ counterN++;
    if(n<=1)
    {
        return n;
    }
    return fiboNormal(n-1)+fiboNormal(n-2);

}

int fiboMemo(int n,vector<int>&memo)
{
    counterM++;
    if(n<=1)
    {
        return n;
    }
    if(memo[n]!=-1)
    {
        return memo[n];
    }
    memo[n]=fiboMemo(n-1,memo)+fiboMemo(n-2,memo);
    return memo[n];

}
int main()
{
    int n;
    cin>>n;
    vector<int>memo(n+1,-1);
    
    cout<<"No memoization:"<<fiboNormal(n)<<"took"<<counterN<<"steps"<<endl;
    cout<<"Memoization:"<<fiboMemo(n,memo)<<"took"<<counterM<<"steps"<<endl;
    return 0;



}