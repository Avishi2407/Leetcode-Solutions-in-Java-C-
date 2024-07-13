class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
         vector<int> copy = positions;
    unordered_map<int, int> health_map;
    map<int, char> direction_map;

    for (int i = 0; i < positions.size(); i++) {
        health_map[positions[i]] = healths[i];
        direction_map[positions[i]] = directions[i];
    }

    sort(positions.begin(), positions.end());
    stack<pair<int, char>> s;
    int n = positions.size();

    for (int i = 0; i < n; i++) {
        if (s.empty()) {
            s.push({positions[i], direction_map[positions[i]]});
        } else {
            while (!s.empty() && s.top().second == 'R' && direction_map[positions[i]] == 'L') {
                if (health_map[s.top().first] > health_map[positions[i]]) {
                    health_map[s.top().first]--;
                    health_map[positions[i]] = 0;
                    break;
                } else if (health_map[s.top().first] < health_map[positions[i]]) {
                    health_map[positions[i]]--;
                    health_map[s.top().first] = 0;
                    s.pop();
                } else {
                    health_map[positions[i]] = 0;
                    health_map[s.top().first] = 0;
                    s.pop();
                    break;
                }
            }
            if (health_map[positions[i]] > 0) {
                s.push({positions[i], direction_map[positions[i]]});
            }
        }
    }

    vector<int> ans;
    unordered_map<int, int> surviving_healths;
    while (!s.empty()) {
        surviving_healths[s.top().first] = health_map[s.top().first];
        s.pop();
    }

    for (int i = 0; i < n; i++) {
        if (surviving_healths.find(copy[i]) != surviving_healths.end() && surviving_healths[copy[i]] > 0) {
            ans.push_back(surviving_healths[copy[i]]);
        }
    }

    return ans;
        
    }
};