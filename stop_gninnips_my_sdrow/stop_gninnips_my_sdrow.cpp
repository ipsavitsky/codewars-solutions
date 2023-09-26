#include <string>
#include <algorithm>

std::string spinWords(const std::string &str) {
  std::string res = str;
  using s_it = std::string::iterator;
  s_it cur = res.begin();
  while (cur <= res.end()) {
    s_it space_it = std::find_if(cur, res.end(), isspace);
    if (std::distance(cur, space_it) >= 5) {
      std::reverse(cur, space_it);
    }
    cur = space_it + 1;
  }
  return res;
}
