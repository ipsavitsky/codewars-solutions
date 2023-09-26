#include <string>

std::string sliceString(std::string str) {
    return std::string(std::next(str.begin()), std::prev(str.end()));
}
