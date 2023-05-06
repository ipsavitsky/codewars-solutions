#include <algorithm>
#include <vector>

std::vector<int> tribonacci(std::vector<int> signature, int n) {
    std::vector<int> sequence(signature.begin(),
                              signature.begin() + std::min(3, n));

    auto trib = [&signature = signature]() mutable {
        int k = signature[0] + signature[1] + signature[2];
        signature[0] = signature[1];
        signature[1] = signature[2];
        signature[2] = k;
        return k;
    };

    std::generate_n(std::back_inserter(sequence), n - 3, trib);
    return sequence;
}