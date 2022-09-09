# CM3106 - Computer Graphics Using C
by [:simple-github: yashppawar](https://github.com/yashppawar)

Reference : [Colorado BGI Docs](https://home.cs.colorado.edu/~main/bgi/doc/)

---
## Installation
Download and install the :material-file: cs1300-setup.msi[^1] from the CSCI 1300 Software Package[^2], then use the :fontawesome-solid-terminal: `cs1300-command-prompt.exe` to build and run!

??? missing "VS Code does not recognize `<graphics.h>` "
    to fix the above error, we update the [C/C++ Configurations](https://code.visualstudio.com/docs/cpp/config-msvc#_cc-configurations) :material-file: `c_cpp_properties.json` and udpate the `includePath`
    ``` json linenums="1"
    {
        "configurations": [
            {
                "name": "Win32",
                "includePath": [
                    "${workspaceFolder}/**",
                    "C:\\Program Files (x86)\\Colorado\\cs1300\\include" // Add this line
                ],
                // Other Properties
            }
        ]
    }
    ```
    The properties file can be opened by opening the Command palette (by using shortcut ++ctrl+shift+p++) and then typing "C configurations" > "Edit Configurations (JSON)"


## :computer: Build and Run!
The code files are C++ files, these can have any of the following extensions `.C`, `.cc`, `.cpp`, `.CPP`, `.c++`, `.cp`, or `.cxx`.[^3]

To build we will use the **GNU g++** compiler 
=== "windows"
    ``` bat
    C:\Codes> g++ input-file.cc -o output.exe
    ```
=== "GNU/linux"
    ```bash
    $ g++ input-file.cc -o output.out
    ```

and then to execute the program
=== "windows"
    ``` bat
    C:\Codes> output.exe
    ```
=== "GNU/linux"
    ```bash
    $ ./output.out
    ```

[^1]: :material-file: [https://home.cs.colorado.edu/~main/cs1300/cs1300-setup.msi](https://home.cs.colorado.edu/~main/cs1300/cs1300-setup.msi)
[^2]: CSCI 1300 Software Package - [https://home.cs.colorado.edu/~main/cs1300/README.html](https://home.cs.colorado.edu/~main/cs1300/README.html)
[^3]: C++ File Extensions : [:material-stack-overflow: StackOverflow](https://stackoverflow.com/questions/1545080/c-code-file-extension-what-is-the-difference-between-cc-and-cpp)
