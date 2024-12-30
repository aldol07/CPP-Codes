class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxtill = 0;
        int chunks = 0;
        for (int i = 0;i < arr.size();i++) {
            maxtill = max(maxtill, arr[i]);
            if (maxtill == i) {
                chunks++;
            }
        }
        return chunks;
    }
};