#include <iostream>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <string>
#include "main.hpp"


void DSA::hashTable1() {

    // Pairing string and int
    std::unordered_map<std::string, int> hashMap;
    
    hashMap["One"] = 1;
    hashMap["Two"] = 2;
    hashMap["Three"] = 3;
    hashMap["Five"] = 5;
    hashMap["Ten"] = 10;

    for (const auto& au : hashMap) {
        std::cout << au.first << ", " << au.second << "\n";
    }
    
}

void DSA::hashTable2() {

    // Amount of zeros
    std::unordered_map<int, int> hashMap2;
    int freq = 0;

    hashMap2[1] = 10;
    hashMap2[2] = 0;
    hashMap2[3] = 20;
    hashMap2[4] = 50;
    hashMap2[5] = 0;
    hashMap2[6] = 0;

    for (auto& au : hashMap2) {
        if (au.second == 0) {
            freq += 1;
        }
    }
}

void DSA::hashTable3() {

    std::vector<int> nums = {10, 30, 50, 25, 60, 30, 90};
    std::unordered_map<int, int> hashMap3;
    int target = 90;
    int n = nums.size();

    // sum of two numbers
    for (const int& i : nums) {

        if (hashMap3.find(i) != hashMap3.end()) {
            hashMap3[i]++;
        }
    }

    for (int i{0}; i < nums.size(); ++i) {

        if (nums[i] == target) {
            std::cout << "TARGET!\n";
        }
        else {
            std::cout << "target missed.\n";
        }
    }
}