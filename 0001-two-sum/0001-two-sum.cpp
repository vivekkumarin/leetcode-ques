class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>map;
        for(int i=0;i<n;i++){
            int num=nums[i];
            int needmorenum=target -num;
            if(map.find(needmorenum)!=map.end()){
                return {map[needmorenum],i};
            }
            map[num]=i;
        }
        return  {-1};
        
    }
};