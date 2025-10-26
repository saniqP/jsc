#include <iostream>
#include "resources/start.cpp"
#include <pybind11/pybind11.h>

PYBIND11_MODULE(jsc, m) {
    m.doc() = "just start c++ code";
    m.def("start_cpp_code", &start_cpp_code,
    pybind11::arg("code"),
    "just starting your c++ code");

    m.def("compile_cpp_file", &compile_cpp_file,
        pybind11::arg("path"),
        pybind11::arg("name"));

    m.def("start_cpp_binary_file", &start_cpp_binary_file,
        pybind11::arg("path"));
}