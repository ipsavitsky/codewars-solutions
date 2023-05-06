#include <numeric>
#include <vector>

int positive_sum(const std::vector<int> arr) {
    return std::accumulate(arr.begin(), arr.end(), 0, [](int sum, int cur) {
        return sum += std::max(0, cur);
    });
}