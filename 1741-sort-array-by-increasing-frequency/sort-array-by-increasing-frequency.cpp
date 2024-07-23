class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }

        // Custom comparator for the priority queue to sort by frequency (ascending)
        // and by value (descending) when frequencies are the same.
        auto comp = [](pair<int, int>& a, pair<int, int>& b) {
            return a.second == b.second ? a.first < b.first : a.second > b.second;
        };

        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> pq(comp);

        for (auto& it : freqMap) {
            pq.push({it.first, it.second});
        }

        vector<int> res;
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            res.insert(res.end(), top.second, top.first);
        }

        return res;
    }
};