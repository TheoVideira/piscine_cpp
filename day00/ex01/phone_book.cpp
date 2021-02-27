#include "phone_book.hpp"
#include "contact.hpp"
#include <string>
#include <iostream>
#include <limits>

PhoneBook::PhoneBook()
{
    this->m_n_contact = 0;
}

PhoneBook::~PhoneBook()
{
    
}

void PhoneBook::contactIndex()
{
    int         n_contact = this->howManyContacts();
    int         n_sp;
    std::string output;

    for (int i = 0; i < n_contact; i++)
    {
        // index
        output += "|";
        std::string s;
        std::stringstream out;
        out << i;
        s = out.str();
        n_sp = WIDTH_COLUMN - s.length();
        for (int sp = 0; sp < n_sp; sp++)
            output += ' ';
        output += i + '0';
        output += "|";
        // first_name
        n_sp = WIDTH_COLUMN - this->m_contacts[i].m_first_name.length();
        for (int sp = 0; sp < n_sp; sp++)
            output += ' ';
        if (n_sp >= 0)
            output += this->m_contacts[i].m_first_name;
        else
        {
            output += this->m_contacts[i].m_first_name.substr(0, 9);
            output += ".";
        }
        output += "|";
        // last_name
        n_sp = WIDTH_COLUMN - this->m_contacts[i].m_last_name.length();
        for (int sp = 0; sp < n_sp; sp++)
            output += ' ';
        if (n_sp >= 0)
            output += this->m_contacts[i].m_last_name;
        else
        {
            output += this->m_contacts[i].m_last_name.substr(0, 9);
            output += ".";
        }
        output += "|";
        // nickname
        n_sp = WIDTH_COLUMN - this->m_contacts[i].m_nickname.length();
        for (int sp = 0; sp < n_sp; sp++)
            output += ' ';
        if (n_sp >= 0)
            output += this->m_contacts[i].m_nickname;
        else
        {
            output += this->m_contacts[i].m_nickname.substr(0, 9);
            output += ".";
        }
        output += "|\n";
    }
    std::cout << output << std::endl;
}

int PhoneBook::howManyContacts()
{
    return this->m_n_contact;
}

bool PhoneBook::isFull()
{
    return this->m_n_contact == MAX_CONTACT;
}

void PhoneBook::addContact()
{
    std::string full_message("Sorry but your phonebook is full, you can't add contacts anymore");
    int         index = this->howManyContacts(); 

    if (this->isFull())
    {
        std::cout << full_message << std::endl;
        return ;
    }
    else
    {
        std::cout << "Please enter your contact info. FYI you can't correct errors." << std::endl;
        std::cout << "Contact's first name : " << std::endl;
        std::cin >> this->m_contacts[index].m_first_name;
        if (std::cin.eof())
            return ;
        std::cout << "Contact's last name : " << std::endl;
        std::cin >> this->m_contacts[index].m_last_name;
        if (std::cin.eof())
            return ;
        std::cout << "Contact's nickname : " << std::endl;
        std::cin >> this->m_contacts[index].m_nickname;
        if (std::cin.eof())
            return ;
        std::cout << "Contact's login : " << std::endl;
        std::cin >> this->m_contacts[index].m_login;
        if (std::cin.eof())
            return ;
        std::cout << "Contact's postal address : " << std::endl;
        std::cin >> this->m_contacts[index].m_postal_address;
        if (std::cin.eof())
            return ;
        std::cout << "Contact's email address : " << std::endl;
        std::cin >> this->m_contacts[index].m_email_address;
        if (std::cin.eof())
            return ;
        std::cout << "Contact's phone number : " << std::endl;
        std::cin >> this->m_contacts[index].m_phone_number;
        if (std::cin.eof())
            return ;
        std::cout << "Contact's birthday date : " << std::endl;
        std::cin >> this->m_contacts[index].m_birthday_date;
        if (std::cin.eof())
            return ;
        std::cout << "Contact's favorite meal : " << std::endl;
        std::cin >> this->m_contacts[index].m_favorite_meal;
        if (std::cin.eof())
            return ;
        std::cout << "Contact's underwear color : " << std::endl;
        std::cin >> this->m_contacts[index].m_underwear_color;
        if (std::cin.eof())
            return ;
        std::cout << "Contact's darkest secret : " << std::endl;
        std::cin >> this->m_contacts[index].m_darkest_secret;
        if (std::cin.eof())
            return ;
        std::cout << "Contact successfully added." << std::endl;
        this->m_n_contact++;
    }
}

void PhoneBook::searchContact()
{
    int n_contact = this->howManyContacts();
    int index = -1;

    if (!n_contact)
    {
        std::cout << "You don't have any contact, please add one before using SEARCH" << std::endl;
        return ;
    }
    else
    {
        // print contact index
        this->contactIndex();

        //Choosing which contact to display info
        std::cout << "Which contatct info do you want ? [0-" << n_contact - 1 << "]." << std::endl;
        while (true)
        {
            std::cin >> index;
            if (std::cin.eof())
                return;
            if (!std::cin)
            {
                std::cout << "Input is not a number" << std::endl;
                std::cin.clear();
		        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                index = -1;
            }
            if (index >= 0 & index <= n_contact - 1)
                break ;
            std::cout << "Please pick a valid index." << std::endl;
        }
        //Display contact info
        std::cout << "Contact info :\n" << std::endl;
        std::cout << this->m_contacts[index].toString() << std::endl;
    }
}