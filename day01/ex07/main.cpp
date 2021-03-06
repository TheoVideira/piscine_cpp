#include <iostream>
#include <fstream>
#include <string>

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
    std::cout << std::endl << "Usage: ./replace [filename] [s1] [s1]" << std::endl
        << "Replaces every occurence of [s1] from [filename] by [s2] in [filename].replace"
        << std::endl;       
}

int         main( int argc, char **argv )
{
    if (bad_arguments(argc, argv)){
        print_usage();
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream   file_in;
    std::ofstream   file_out;
    std::string     line;
    
    file_in.open(filename.c_str());

    if (file_in.fail())
    {
        std::cerr << "Unable to open file" << std::endl;
    }

    file_out.open((filename + ".replace").c_str());
    {
        std::cerr << "Unable to open file" << std::endl;
    }

    // Open input and output file
    
    // Check for errors

    // Replace strings
    file_in.close();
    file_out.close();
    return 0;
}