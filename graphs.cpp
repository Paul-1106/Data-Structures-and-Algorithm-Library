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
        for (int j{0}; j < superVector[i].size(); ++j) {

            std::cout << superVector[i][j] << "\n";
        }
    }
}

void DSA::graph2() {

    std::vector<std::vector<char>> puzzles = {{'A', 'O', 'O', 'O'}, {'O', 'A', 'O', 'O'}, {'O', 'O', 'A', 'O'}, {'O', 'O', 'A', 'O'}, {'O', 'A', 'O', 'O'}};
    int freq = 0;

    for (int i{0}; i < puzzles.size(); ++i) {
        for (int j{0}; j < puzzles[i].size(); ++j) {

            if (puzzles[i][j] == 'A') {
                freq++;
            }
        }
    }
}

// Adjacency List

void DSA::graph3(int in, std::vector<std::vector<int>> &edges) {

    std::vector<std::vector<int>> edges = {{0, 1}, {0, 2}, {2, 1}, {3, 0}};
    std::vector<std::vector<int>> superVector2(in);

    for (const auto& it : edges) {

        int u = it[0];
        int v = it[1];
        superVector2[v].push_back(u);
        superVector2[u].push_back(v);
    }
}