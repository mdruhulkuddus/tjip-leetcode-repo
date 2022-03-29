#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int>seen;
    for(int i = 0; i < nums.size(); i++)
    {
        int remaining = target - nums[i];
        if(seen.count(remaining))
        {
            return {seen[remaining], i};
        }
        seen[nums[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> nums = {11,7,15,2};
    int target = 9;
    vector<int> output = twoSum(nums, target);
    cout << output[0] <<" "<< output[1] << endl;
    return 0;
}

// Bruteforce
/*
 vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if( (nums[i] + nums[j]) == target)
                return {i, j};
            }
        }
    }
*/

