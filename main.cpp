//
//  main.cpp
//  StockPortfolioTracker
//
//  Created by Preet Dhillon on 8/7/2023.
//

#include <iostream>
#include "authenication.hpp"

int main(int argc, const char * argv[]) {
    authentication case1;
    int Input;
    bool logedIn = false;
    do {
        std::cout << "Welcome to the Stock Protfolio Tracker.\n";
        std::cout << "Please choose from the following options: \n";
        std::cout << "1: Create a new Account \n";
        std::cout << "2: Login \n";
        std::cout << "Enter: ";
        std::cin >> Input;
        switch(Input) {
            case 1:
                case1.SignUp();
                break;
            case 2:
                logedIn = case1.login();
                break;
        }
        
        if (logedIn){
            std::cout << "------Dashboard------- \n";
            std::cout << "1: View Portfolio \n";
            std::cout << "2: View Charts \n";
            std::cout << "Enter Choice: ";
            std::cin >> Input;
        }
    } while (Input != 3);
        return 0;
};

