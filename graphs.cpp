#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
#include <string>
#include "main.hpp"

void DSA::graph1() {

    std::vector<std::vector<int>> superVector = {{100, 101, 102, 103}, {200, 201, 202, 203}};

    for (int i{0}; i < superVector.size(); ++i) {
        for (int j{i}; j < superVector[i].size(); ++j) {

            std::cout << superVector[i][j] << "\n";
        }
    }
}