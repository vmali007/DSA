class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1) return intervals;
        vector<vector<int>> mergedIntervals;

        sort(intervals.begin(),intervals.end());
        vector<int> tempInterval = intervals[0];

        for(auto i : intervals){
            if(tempInterval[1]>=i[0]){
                tempInterval[1] = max(tempInterval[1],i[1]);
            }
            else{
                mergedIntervals.push_back(tempInterval);
                tempInterval = i;
            }
        }
        mergedIntervals.push_back(tempInterval);    
        return mergedIntervals;
    }
};
