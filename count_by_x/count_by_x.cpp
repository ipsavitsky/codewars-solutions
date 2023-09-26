#include <vector>

std::vector<int> countBy(int x,int n){
  std::vector<int> res;
  res.reserve(n);
  std::generate_n(std::back_inserter(res), n, [cur = 0, x]() mutable {
    return cur += x;
  });
  return res;
}
