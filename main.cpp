#include <iostream>
#include <string>

std::string CorrectUsername;
std::string CorrectPassword;
std::string Try;

int Choose;

void Info(){
    // Displays current account info
    std::cout << "=======================" << std::endl;
    std::cout << "Username: " << CorrectUsername << std::endl;
    std::cout << "Password: " << CorrectPassword << std::endl;
    std::cout << "=======================" << std::endl;
}

void Menu(){
    // Shows menu options
    std::cout << "[1] - Register" << std::endl;
    std::cout << "[2] - Login" << std::endl;
    std::cout << "[3] - Delete Account" << std::endl;
    std::cout << "[4] - Exit" << std::endl;
}

void ChooseFunction(){
    // Gets user's menu selection
    std::cout << "Choose: ";
    std::cin >> Choose;
    std::cin.ignore(); // Clears leftover newline from input buffer
}

int main(){
    while(true){
        Info();
        Menu();
        ChooseFunction();

         switch(Choose){
         case 1:
            // User registration
            std::cout << "Create a username: ";
            std::getline(std::cin, CorrectUsername);
            std::cout << "Create a password: ";
            std::getline(std::cin, CorrectPassword);
            break;

         case 2:
            // User login
            std::cout << "Enter your username: ";
            std::getline(std::cin, Try);

             if (Try == CorrectUsername){
                 std::cout << "Enter your password: ";
                 std::getline(std::cin, Try);

                  if (Try == CorrectPassword)
                      std::cout << "Logged in!" << std::endl;
                  else
                      std::cout << "Invalid Password!" << std::endl;
             }
             else {
                std::cout << "Invalid Username!" << std::endl;
             }
             break;

         case 3:
            // Deletes account data
            CorrectUsername = "";
            CorrectPassword = "";
            break;

         case 4:
            // Exit
            return 0;

         default:
            // Handles invalid menu selection
            std::cout << "Invalid Selection!" << std::endl;
            break;
         }
    }
}
