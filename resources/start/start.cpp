#include <iostream>
#include <string>

#include <fstream>
#include <cstdlib>


void start_cpp_code(std::string code, std::string path_to_output_directory, std::string name_no_cpp) {

    std::string cpp_name = name_no_cpp + ".cpp";

    std::ofstream file(path_to_output_directory + "/" + cpp_name);

    file << code;
    file.close();

    std::string create_command = "g++ " + path_to_output_directory + cpp_name + " -o " + path_to_output_directory + name_no_cpp;
    std::string start_command = path_to_output_directory + name_no_cpp;

    system(create_command.c_str());
    system(start_command.c_str());

}



