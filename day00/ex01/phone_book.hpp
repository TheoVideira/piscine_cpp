#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# define MAX_CONTACT 8
# define WIDTH_COLUMN 10
# include <string>
# include <sstream>
# include "contact.hpp"

class PhoneBook
{
    public:
        // Attributes
        Contact m_contacts[MAX_CONTACT];
        int     m_n_contact;
      
        // Constructor/ Destructor
        PhoneBook();
        ~PhoneBook();

        // Methods
        void    addContact();
        void    searchContact();
        int     howManyContacts();
        bool    isFull();
    
    private:
        void    contactIndex();
};

#endif