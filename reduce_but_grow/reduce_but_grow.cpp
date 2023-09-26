#include <vector>
#include <numeric>

int grow(std::vector<int> nums) {
    return std::reduce(nums.begin(), nums.end(), 1, std::multiplies<int>());
}
