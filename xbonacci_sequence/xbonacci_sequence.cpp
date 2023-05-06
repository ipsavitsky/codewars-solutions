#include <algorithm>
#include <numeric>
#include <vector>

std::vector<int> xbonacci(std::vector<int> signature, int n) {
    if (signature.empty()) {
        return std::vector<int>(n, 0);
    }
    std::vector<int> sequence(signature.begin(),
                              signature.begin() +
                                  std::min<std::size_t>(signature.size(), n));
    signature.reserve(n);

    auto xbon = [&signature = signature]() mutable {
        int k = std::accumulate(signature.begin(), signature.end(), 0);
        for (std::remove_reference_t<decltype(signature)>::iterator cur =
                 signature.begin();
             cur != std::prev(signature.end()); ++cur) {
            *cur = *std::next(cur);
        }
        signature.back() = k;
        return k;
    };

    std::generate_n(std::back_inserter(sequence),
                    n - static_cast<int>(signature.size()), xbon);
    return sequence;
}