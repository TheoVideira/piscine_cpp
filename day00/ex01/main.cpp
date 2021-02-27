#include "contact.hpp"
#include "phone_book.hpp"
#include <string>
#include <iostream>

int main()
{
    PhoneBook   phone_book;
    std::string welcome_message("Welcome to your awesome phonebook, here you can add and search a contact.\nType 'EXIT' to quit\n");
    std::string error_action(" is an invalid command (Available commands : ADD, SEARCH; EXIT)");
    std::string action;


    std::cout << welcome_message << std::endl;

    // MAIN MENU
    while(true)
    {
        if (std::cin.eof())
            break ;
        // User is prompted to type an action
        std::cout << "What would you like to do" << std::endl;
        std::cin >> action;

        if (!action.compare("ADD"))
            phone_book.addContact();
        else if (!action.compare("SEARCH"))
            phone_book.searchContact();
        else if (!action.compare("EXIT") || std::cin.eof())
            break ;
        else
            std::cout << action << error_action << std::endl;
    }
    std::cout << "Bye !" << std::endl; 
    return(0);
}