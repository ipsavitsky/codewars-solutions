#include <numeric>
#include <vector>

int square_sum(const std::vector<int> &numbers) {
    return std::accumulate(
        numbers.begin(), numbers.end(), 0,
        [](int sum, int current) { return sum + current * current; });
}
