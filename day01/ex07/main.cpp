#include <iostream>
#include <fstream>
#include <string>
#include <cerrno> 
#include <exception>

static bool bad_arguments( int argc, char **argv )
{
    if (argc != 4) {
        std::cerr << "This program needs 3 arguments. You may refer to usage for more info." << std::endl;
        return true; 
    } else if (std::string(argv[1]).empty()) {
        std::cerr << "Filename can't be empty !" << std::endl;
        return true;
    } else if (std::string(argv[2]).empty()) {
        std::cerr << "String to replace can't be empty !" << std::endl;
        return true;
    } else if (std::string(argv[3]).empty()) {
        std::cerr << "Replacing string can't be empty !" << std::endl;
        return true;
    } else {
        return false;
    }
}

static void print_usage( void )
{
    std::cout << std::endl << "Usage: ./replace [filename] [s1] [s2]" << std::endl
        << "Replaces every occurence of [s1] from [filename] by [s2] in [filename].replace"
        << std::endl;       
}

static void replace(std::string &line, const std::string &s1, const std::string &s2)
{
    size_t pos = 0;
    size_t l1  = s1.length();

    while ((pos = line.find(line, pos)) != std::string::npos)
        line.replace(pos, l1, s2);
}

int         main( int argc, char **argv )
{
    if (bad_arguments(argc, argv)) {
        print_usage();
        return 1;
    }


    const std::string filename = argv[1];
    const std::string s1 = argv[2];
    const std::string s2 = argv[3];

    std::ifstream   file_in;
    std::ofstream   file_out;
    std::string     line;
    

    file_in.open(filename.c_str());
    if (file_in.fail()) {
        std::cerr << "Unable to open file:" << std::strerror(errno) << std::endl;
        return 1;
    }

    file_out.open((filename + ".replace").c_str(), std::ios::trunc);
    if (file_out.fail()) {
        std::cerr << "Unable to open output file: " << std::strerror(errno) << std::endl;
        file_in.close();
        return 1;
    }


    while (true) {
        try {
            std::getline(file_in, line);
            replace(line, s1, s2);
            file_out << line;
            if (file_in.eof())
                break ;
            else
                file_out << std::endl;
        }
        catch (std::exception &e) {
            std::cerr << "An exception occureed: " << e.what() << std::endl;
            break ;
        }
    }


    file_in.close();
    file_out.close();
    return 0;
}