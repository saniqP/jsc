# jsc - Just Start C++(on python)

This lib is starting c++ code in python

## Installing

```zsh
git clone https://github.com/saniqP/jsc.git
cd jsc
chmod +x install.sh
./install.sh
```

in directory jsc created directory `jscLib`.
Move `jscLib` in your project directory.

## Using

```python
from jscLib import jsc

jsc.start_cpp_code(
    code = """
#include <iostream>
using namespace std;

int main() {
    cout << "hello saniqp" << endl;
}
""")

jsc.compile_cpp_file(path="/home/saniqp/.config/", name="test")

jsc.start_cpp_binary_file(path="/home/saniqp/.config/test")
```
