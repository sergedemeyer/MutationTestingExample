#include <iostream>
#include <vector>
#include "find.cpp"
#include "concatenate.cpp"

int main() {
    std::vector<int> v{1, 2, 42, 42, 63};
    std::vector<int> empty{};

    std::cout << "FINDLAST" << '\n';
    std::cout << findLast(v, 99) << " == -1 (not present)." << '\n';
    std::cout << findLast(v, 63) << " == 4 (terminating position)" << '\n';
    std::cout << findLast(v, 42) << " == 3 (double occurrence, last position)." << '\n';
    std::cout << findLast(v, 2) << " == 1 (2nd position)." << '\n';
    std::cout << findLast(v, 1) << " == 0 (very first position)." << '\n';
    std::cout << findLast(v, 0) << " == -1 (not present)." << '\n';
    std::cout << findLast(empty, 99) << " == -1 (empty vector)." << '\n';

    std::cout << "FINDFIRST" << '\n';
    std::cout << findFirst(v, 99) << " == -1 (not present)." << '\n';
    std::cout << findFirst(v, 63) << " == 4 (terminating position)" << '\n';
    std::cout << findFirst(v, 42) << " == 2 (double occurrence, first position)." << '\n';
    std::cout << findFirst(v, 2) << " == 1 (2nd position)." << '\n';
    std::cout << findFirst(v, 1) << " == 0 (very first position)." << '\n';
    std::cout << findFirst(v, 0) << " == -1 (not present)." << '\n';
    std::cout << findFirst(empty, 99) << " == -1 (empty vector)." << '\n';


    std::cout << concatenate("Hello", " world") << '\n';
}
