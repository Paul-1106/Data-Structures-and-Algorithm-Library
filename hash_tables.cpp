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

void DSA::hashTable4() {
    
    // finding a number in hashset
    std::unordered_set<int> hashSet;
    std::unordered_set<int> hashSet2;
    
    hashSet.insert(30);
    hashSet.insert(50);
    hashSet.insert(45);
    hashSet.insert(5);
    hashSet.insert(85);

    hashSet2.insert(10);
    hashSet2.insert(35);
    hashSet2.insert(100);
    hashSet2.insert(15);

    if (hashSet.find(50) != hashSet.end()) {
        std::cout << "There is a number 50 in Hashset 1.\n";
    }
    else {
        std::cout << "There is not a number 50 in Hashset 1.\n";
    }

    if (hashSet2.find(50) != hashSet2.end()) {
        std::cout << "There is a number 50 in Hashset 2.\n";
    }
    else {
        std::cout << "There is not a number 50 in Hashset 2.\n";
    }
}

void DSA::hashTable5() {

    // adding numbers to hashset
    std::unordered_set<int> hashSet;
    std::vector<int> vec1 = {20, 50, 8, 30, 19, 65, 105, 25, 94};

    for (int i{0}; i < vec1.size(); ++i) {

        if (vec1[i] > 50) {
            hashSet.insert(vec1[i]);
        }
        else {
            continue;
        }
    }

    for (const int& i : hashSet) {
        std::cout << i << "\n";
    }
}

void DSA::hashTable6() {

    //removing numbers to hashset
    std::unordered_set<int> hashSet;

    // duplicate numbers will automactically remove an element
    hashSet.insert(10);
    hashSet.insert(25);
    hashSet.insert(25);
    hashSet.insert(45);
    hashSet.insert(35);
    hashSet.insert(70);
    hashSet.insert(90);
    hashSet.insert(35);

    // 
    for (auto it = hashSet.begin(); it != hashSet.end();) {
        
        if (*it % 10 == 0) {
            hashSet.erase(it);
        }
    }

    for (const int& i : hashSet) {
        std::cout << i << "\n";
    }
}