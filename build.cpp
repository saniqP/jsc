#include <iostream>
#include "resources/start.cpp"
#include <pybind11/pybind11.h>

PYBIND11_MODULE(jsc, m) {
    m.doc() = "just start c++ code";
    m.def("start_cpp_code", &start_cpp_code,
    pybind11::arg("code"),
    pybind11::arg("path_to_output_directory"),
    pybind11::arg("name_no_cpp"),
    "just starting your c++ code");

    m.def("compile_cpp_file", &compile_cpp_file,
        pybind11::arg("path_to_directory"),
        pybind11::arg("name_cpp"));

    m.def("start_cpp_binary_file", &start_cpp_binary_file,
        pybind11::arg("path_to_directory_binary_file"));
}