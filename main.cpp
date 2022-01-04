#include <iostream>
#include <vector>
#include "find.cpp"

int main() {
    std::vector<int> v{1, 2, 42, 42, 63};
    std::cout << findLast(v, 99) << " == -1 (not present)." << '\n';
    std::cout << findLast(v, 63) << " == 4 (terminating position)" << '\n';
    std::cout << findLast(v, 42) << " == 3 (one but last position)." << '\n';
    std::cout << findLast(v, 2) << " == 1 (2nd position)." << '\n';
    std::cout << findLast(v, 1) << " == 0 (very first position)." << '\n';
    std::cout << findLast(v, 0) << " == -1 (not present)." << '\n';
    std::vector<int> v2{};
    std::cout << findLast(v2, 99) << " == -1 (empty vector)." << '\n';
}
