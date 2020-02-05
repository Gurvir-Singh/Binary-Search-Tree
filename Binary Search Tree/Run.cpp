#include "BSTree.h"
#include <iostream>
#include <string>
#include "Run.h"

void run() {
    int rootVal = NULL;
    std::cout << "Please enter the value for the root node: ";
    std::cin >> rootVal;
    BSTree BST(rootVal);
    bool exitSelected = false;
    while (exitSelected == false) {
        std::cout << "What would you like to do? Enter the number associated with the option." << std::endl << "1.) Add number" << std::endl << "2.) Find number" << std::endl << "3.) exit" << std::endl;
        int option;
        std::cin >> option;
        if (option == 1) {
            std::cout << "What number would you like to add?" << std::endl;
            int numToAdd;
            std::cin >> numToAdd;
            BST.addNumber(numToAdd);
            std::cout << "\n";
        }
        else if (option == 2) {
            std::cout << "What number would you like to find?" << std::endl;
            int numToFind;
            std::cin >> numToFind;
            BST.findNumber(numToFind, &BST.StartingNode);
        }
        else if (option == 3) {
            exitSelected = true;
        }
        else {
            std::cout << "Please enter a valid option" << std::endl;
            break;
        }
    }
}