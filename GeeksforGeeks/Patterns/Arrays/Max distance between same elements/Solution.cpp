class Solution {
  public:
    int maxDistance(vector<int>& arr) {
        unordered_map<int, int> first;
        int maxDist = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (first.find(arr[i]) == first.end()) {
                first[arr[i]] = i;
            } else {
                maxDist = max(maxDist, i - first[arr[i]]);
            }
        }

        return maxDist;
    }
};