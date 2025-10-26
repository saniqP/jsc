cmake CMakeLists.txt
make jsc -j4

rm -rf jscLib

mkdir jscLib

mv "jsc.cpython-313-x86_64-linux-gnu.so" jscLib
cp -r jsc.pyi jscLib

rm -rf CMakeFiles _deps CMakeCache.txt cmake_install.cmake Makefile
