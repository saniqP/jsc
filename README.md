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

`file`: ```python
from libs.jscLib import jsc
import getpass

jsc.start_cpp_code(
    code="""
#include <iostream>
#include <string>
using namespace std;

int main() {
    string from_lang = "python";
    string to_lang = "c++";
    
    cout << "hello from " << from_lang << " to " << to_lang << endl;
}
""",

    path_to_output_directory="/home/saniqp/test/",

    name_no_cpp="test"
)
```

`output`: `hello from python to c++`
