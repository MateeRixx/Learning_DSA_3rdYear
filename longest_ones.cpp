#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int max_ones=0;
    int counter=0;


    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==1)

        {
            counter++;
            if(counter>max_ones)
            {
                 max_ones=counter;

            }
            
           
        }

        else{
            counter=0;

        }
    }

    return max_ones;

    
    }


int main()
{

    vector<int> sample={0,0,0,0,1,1,0,0,1,1,1,0,0,1};

    cout<<findMaxConsecutiveOnes(sample);
    

}
