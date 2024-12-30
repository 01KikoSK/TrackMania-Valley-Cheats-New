#include <iostream>

void displayMenu() {
    std::cout << "=== TrackMania² Valley Cheat Menu ===" << std::endl;
    std::cout << "1. Infinite Speed" << std::endl;
    std::cout << "2. Unlock All Cars" << std::endl;
    std::cout << "3. God Mode" << std::endl;
    std::cout << "4. Exit" << std::endl;
}

void infiniteSpeed() {
    std::cout << "Infinite Speed Activated!" << std::endl;
    // Code to modify game speed would go here
}

void unlockAllCars() {
    std::cout << "All Cars Unlocked!" << std::endl;
    // Code to unlock cars would go here
}

void godMode() {
    std::cout << "God Mode Activated!" << std::endl;
    // Code to enable god mode would go here
}

int main() {
    int choice;

    while (true) {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                infiniteSpeed();
                break;
            case 2:
                unlockAllCars();
                break;
            case 3:
                godMode();
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