#include <iostream>
#include <string>

#include <fstream>
#include <cstdlib>
#include <filesystem>

#include <unistd.h>


void start_cpp_code(std::string code) {

    std::string username = std::string(getlogin());

    std::string path = "/home/" + username + "/.cache/jsc/";

    std::string program_path = path + "program.cpp";
    std::string exec_path = path + "exec";

    if (!std::filesystem::exists(path)) {
        std::filesystem::create_directory(path);
    }



    std::ofstream program(program_path);
    program << code;
    program.close();

    std::string create = "g++ " + program_path + " -o " + exec_path;

    system(create.c_str());
    system(exec_path.c_str());

    std::filesystem::remove(program_path);
    std::filesystem::remove(exec_path);

}

void compile_cpp_file(std::string path, std::string name) {

    std::string cpp_name = name + ".cpp";

    std::string command = "g++ " + path + cpp_name + " -o " + path + name;
    std::system(command.c_str());
}

void start_cpp_binary_file(std::string path) {
    system(path.c_str());
}


