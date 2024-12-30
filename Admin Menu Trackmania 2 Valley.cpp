#include <iostream>
#include <string>

void displayAdminMenu() {
    std::cout << "=== Admin Menu ===" << std::endl;
    std::cout << "1. View Player Stats" << std::endl;
    std::cout << "2. Ban Player" << std::endl;
    std::cout << "3. Unban Player" << std::endl;
    std::cout << "4. Exit" << std::endl;
}

void viewPlayerStats() {
    std::cout << "Displaying player stats..." << std::endl;
    // Code to display player stats would go here
}

void banPlayer() {
    std::string playerName;
    std::cout << "Enter player name to ban: ";
    std::cin >> playerName;
    std::cout << "Player " << playerName << " has been banned." << std::endl;
    // Code to ban a player would go here
}

void unbanPlayer() {
    std::string playerName;
    std::cout << "Enter player name to unban: ";
    std::cin >> playerName;
    std::cout << "Player " << playerName << " has been unbanned." << std::endl;
    // Code to unban a player would go here
}

int main() {
    int choice;

    while (true) {
        displayAdminMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                viewPlayerStats();
                break;
            case 2:
                banPlayer();
                break;
            case 3:
                unbanPlayer();
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}