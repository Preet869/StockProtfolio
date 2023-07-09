#include "authenication.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>

bool authentication::SignUp() {
    std::string username, password;
    std::ofstream newfile;
    
    newfile.open("/Users/ppreet/Desktop/Work/Work/Programming/C++/StockPortfolioTracker/StockPortfolioTracker/input.txt", std::ios::app);
    if (newfile.is_open()) {
        std::cout << "To create your account you need to Enter a Username and Password \n";
        std::cout << "Username: ";
        std::cin >> username;
        std::cout <<"Enter Password: ";
        std::cin >> password;
        newfile << "Username: " << username << " Password: " << password << "\n";
        std::cout << "account created! \n";
        newfile.close();
    }else {
        std::cout << "Error opening the file!\n";
    }
    return 0;
};
    

bool authentication::login() {
    std::string inputusername, inputpassword;
    std::ifstream inputfile("/Users/ppreet/Desktop/Work/Work/Programming/C++/StockPortfolioTracker/StockPortfolioTracker/input.txt");

    if (inputfile.is_open()) {
        std::cout << "Username: ";
        std::cin >> inputusername;
        std::cout << "Password: ";
        std::cin >> inputpassword;

        bool found = false;
        std::string line;

        while (std::getline(inputfile, line)) {
            // Check if the line contains the username and password information
            if (line.find("Username: " + inputusername) != std::string::npos &&
                line.find("Password: " + inputpassword) != std::string::npos) {
                found = true;
                break;
            }
        }

        if (found) {
            std::cout << "--Login success--\n";
            return true;
        } else {
            std::cout << "Login failed. Invalid username or password.\n";
            return false;
        }
    } else {
        std::cout << "Unable to open the input file.\n";
    }
    return 0;
};
