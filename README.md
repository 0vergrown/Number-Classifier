# Number Classifier

The Number Classifier is a simple C++ program that prompts the user to input a number and then determines whether the number is positive, negative, or zero. It's designed to help beginners understand basic programming concepts such as conditional statements, input/output operations, and basic arithmetic operations in C++.

## Features
- **User Input:** Accepts integer inputs from the user.
- **Classification:** Determines if the entered number is positive, negative, or zero.
- **Easy to Use:** Clear prompts and immediate feedback on input.

## How to Install and Run
To run the Number Classifier, follow these steps:

### Prerequisites
Ensure you have a C++ compiler installed on your computer. GCC, Clang, and MSVC are some of the popular compilers.

### Installation
1. **Clone the repository:**
   ```bash
   git clone https://github.com/yourusername/number-classifier.git
   ```
2. **Navigate to the directory:**\
   Navigating to the directory containing your program on a command line interface (CLI) depends on your operating system. Here’s how you can do it on Windows, macOS, and Linux:
   ### On Windows
   - **Open Command Prompt**: You can search for "cmd" in the Start menu and click on the "Command Prompt" to open it.
   - **Change Directory**: Use the `cd` (change directory) command to navigate to the directory where your program is located. For example, if your program is in a folder named "number-classifier" on your desktop, you would type:
      ```bash
      cd Desktop\number-classifier
      ```
   Make sure to replace "Desktop\number-classifier" with the actual path where your program is stored.

   ### On macOS and Linux
   - **Open Terminal**: You can find the Terminal in your Applications folder under Utilities on macOS, or search for it in your applications menu on Linux.
   - **Change Directory**: Use the `cd` command just like in Windows, but the path might look slightly different. For example, if your program is in a folder named "number-classifier" on your desktop, you would type:
      ```bash
      cd ~/Desktop/number-classifier
      ```
   Here, `~` signifies your home directory, and paths are typically case-sensitive on macOS and Linux.

   ### General Tips for Using the `cd` Command
   - **Go to Home Directory**: Just type `cd` and press enter, or `cd ~`.
   - **Go Up One Directory**: Type `cd ..` to move up one level in the directory structure.
   - **View Directory Contents**: Before changing directories, you might want to see what's inside the current directory. You can type `dir` on Windows or `ls` on macOS and Linux to list the contents of the directory.
   
   These commands should help you navigate the filesystem in the command line interface effectively, allowing you to locate and manage your program files.

### Compilation
Compile the program using a C++ compiler. For example, if you are using GCC, you can compile the program as follows:
```bash
g++ main.cpp -o number-classifier
```

### Running the Program
After compiling, run the program using:
```bash
./number-classifier
```
Follow the on-screen prompts to enter a number.

## How It Works
The program starts by asking the user to input a number. After receiving the input, it checks whether the number is greater than, less than, or equal to zero. Based on this check, it outputs whether the number is positive, negative, or zero.

## Contributing
Contributions to this project are welcome. You can contribute by:
- Submitting bugs and feature requests.
- Improving the efficiency of the algorithms used.
- Enhancing the functionality with additional features.

## License
This project is licensed under the CC0 1.0 Universal License - see the [LICENSE](LICENSE) file for details.

## Why This Project Exists

The Number Classifier program was developed as part of a school assignment with a clear objective: "Write a C++ program that prompts the user to input a number. The program should then output the number and a message saying whether the number is positive, negative, or zero."

This assignment was designed to help students understand and implement basic concepts in C++ programming, including:
- **User Input/Output:** How to interact with users via the console.
- **Conditional Statements:** Using `if-else` statements to make decisions within the program.
- **Basic Program Structure:** Understanding the flow of a simple C++ program.
