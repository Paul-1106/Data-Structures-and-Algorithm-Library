#include <iostream>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <string>
#include "main.hpp"

int main() {

    char option = ' ';
    int num = 0;
    DSA obj;

    std::cout << "****************************************\n";
    std::cout << "*               DSA MENU               *\n";
    std::cout << "****************************************\n";
    std::cout << "* h = Hash Tables                      *\n";
    std::cout << "* g = Graphs (Coming soon)             *\n";
    std::cout << "* b = Binary Search Tree (Coming soon) *\n";
    std::cout << "* l = Linked List (Coming soon)        *\n";
    std::cout << "* a = Array (Coming soon)              *\n";
    std::cout << "* q = EXIT                             *\n";
    std::cout << "****************************************\n\n";
    std::cout << "Select the case letter to view dsa examples\n\n";

    while (option != 'q') {

        std::cin >> option;

        switch(option) {

            // Comment out or comment in each function
            case 'h':
                obj.hashTable1();
                // obj.hashTable2();
                // obj.hashTable3();
                break;
            case 'g':
                break;
            case 'b':
                break;
            case 'l':
                break;
            case 'a':
                break;
            case 'q':
                std::cout << "You have exit the terminal\n";
                break;
            default:
                std::cout << "This case option is not avaliable\n";
                break;
        }
    }

    return 0;
}