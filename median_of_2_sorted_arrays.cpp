vector<int> merged_array(vector<int>&arr_1 , vector<int>&arr_2)
{
    int n1=arr_1.size();
    int n2=arr_2.size();
    if(n1==0 ){
        return arr_2;

    }

    if(n2==0)
    {
        return arr_1;

    }

    if(n1==0 && n2==0)
    {
        return {};

    }
    vector<int>arr_3;
    

   arr_3.reserve(arr_1.size() + arr_2.size());

   arr_3.insert(arr_3.end(), arr_1.begin(), arr_1.end());
   arr_3.insert(arr_3.end(), arr_2.begin(), arr_2.end());


     sort(arr_3.begin(),arr_3.end());

     return arr_3;



}


class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr_1, vector<int>& arr_2) {
        vector<int>mergedArray=merged_array(arr_1 , arr_2);
    double ans;


    
    if(mergedArray.size()%2==1)
    {
        ans=mergedArray[mergedArray.size()/2];

    }
    else{
         
        ans=(double)(mergedArray[mergedArray.size()/2]+mergedArray[(mergedArray.size()/2)-1])/2;


    }

    return ans;
    }
};
