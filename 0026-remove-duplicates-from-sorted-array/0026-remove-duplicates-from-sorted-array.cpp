class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
      int n= arr.size();
        int i=0;
        int j=1;
        while(j<n){
            if(arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
                j++;
            }
            else{
                j++;
            }
       
            
        }
        arr.resize(i+1);
        return i+1;
    }
};