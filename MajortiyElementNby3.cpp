#include<bits/stdc++.h>
using namespace std;
vector<int> AppearNby3(vector<int>&nums , int &n)
{
    

    map<int,int> temp;
    vector <int> ans;
    int minimum_value=(n/3)+1;


    for(int i=0;i<n;i++)
    {
        temp[nums[i]]+=1;

        if(temp[nums[i]]==minimum_value)
        {
            ans.push_back(nums[i]);

        }

    }

    return ans;





}
int main()
{

    vector<int> sample={1,1,1,1,3,2,2,2};
    int N=sample.size();
    
    for(auto numbers:AppearNby3(sample,N))
    {
        cout<<numbers<<" ";
        
    }
    


    return 0;

}