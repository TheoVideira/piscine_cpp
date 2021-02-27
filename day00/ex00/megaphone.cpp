#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"; 
    else {
        for (int i = 1; i < argc; i++) {
            std::string s(argv[i]);
            for (std::string::size_type j = 0; j < s.length(); j++)
                std::cout << char(toupper(s[j]));
        }
    }
    std::cout << std::endl ;
    return 0;
}
