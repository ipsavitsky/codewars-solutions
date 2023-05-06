#include <algorithm>
#include <vector>

std::vector<int> maps(const std::vector<int> &values) {
    std::vector<int> res;
    res.reserve(values.size());
    std::transform(values.begin(), values.end(), std::back_inserter(res),
                   [](int cur) { return cur * 2; });
    return res;
}