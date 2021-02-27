#include "contact.hpp"
#include <string>
#include <iostream>

Contact::Contact()
{
    
}

Contact::~Contact()
{
    
}

std::string Contact::toString()
{
    std::string str("");

    str += "First name: " + this->m_first_name + "\n";
    str += "Last name: " + this->m_last_name + "\n";
    str += "Nickname: " + this->m_nickname + "\n";
    str += "Login: " + this->m_login + "\n";
    str += "Postal address: " + this->m_postal_address + "\n";
    str += "Email address: " + this->m_email_address + "\n";
    str += "Phone number: " + this->m_phone_number + "\n";
    str += "Birthday date: " + this->m_birthday_date + "\n";
    str += "Favorite meal: " + this->m_favorite_meal + "\n";
    str += "Underwear color: " + this->m_underwear_color + "\n";
    str += "Darkest secret: " + this->m_darkest_secret + "\n";
    return str;
}