class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        // Set the minimum weight capacity to be the maximum weight of any package
        // and the maximum weight capacity to be the sum of all package weights
        int min_capacity = *max_element(weights.begin(), weights.end());
        int max_capacity = accumulate(weights.begin(), weights.end(), 0);

        // Perform a binary search to find the minimum weight capacity that can
        // ship all packages within the given number of days
        while (min_capacity < max_capacity) {
            int mid_capacity = (min_capacity + max_capacity) / 2;
            int current_weight = 0;
            int days_needed = 1;
            for (int weight : weights) {
                if (current_weight + weight > mid_capacity) {
                    days_needed++;
                    current_weight = weight;
                } else {
                    current_weight += weight;
                }
            }

            if (days_needed <= days) {
                max_capacity = mid_capacity;
            } else {
                min_capacity = mid_capacity + 1;
            }
        }

        return min_capacity;
        
    }
};