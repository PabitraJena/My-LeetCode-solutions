// 950. Reveal Cards In Increasing Order

#include <vector>
#include <queue>
#include <algorithm>

class Solution {
public:
    std::vector<int> deckRevealedIncreasing(std::vector<int>& deck) {
        int n = deck.size();

        std::sort(deck.begin(), deck.end());

        std::queue<int> q;
        for (int i = 0; i < n; ++i){
            q.push(i);
        }

        std::vector<int> res(n);

        for (int num : deck){
            int next_index = q.front();
            q.pop();
            res[next_index] = num;

            if (!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return res;
    }
};
