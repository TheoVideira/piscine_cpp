#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
public:
    // Attributes
    std::string m_first_name;
    std::string m_last_name;
    std::string m_nickname;
    std::string m_login;
    std::string m_postal_address;
    std::string m_email_address;
    std::string m_phone_number;
    std::string m_birthday_date;
    std::string m_favorite_meal;
    std::string m_underwear_color;
    std::string m_darkest_secret;

    // Constructor/ Destructor
    Contact();
    ~Contact();
    std::string toString();
};

#endif