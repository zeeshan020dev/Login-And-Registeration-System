# C++ Console Login & Registration System

A simple, console-based user authentication system built with C++. This project provides basic functionalities for user registration, login, and account information recovery. It's designed as a straightforward demonstration of fundamental C++ concepts for beginners.

## 🌟 Features

* **User Registration:** New users can create an account by providing a User ID, Name, Email, and Password.
* **Secure Password Entry:** Passwords are masked with asterisks (`*`) during input for basic privacy.
* **User Login:** Registered users can log in using their email and password.
* **Account Recovery:**
    * Forgot Password? Recover account details using your email address.
    * Forgot Email? Recover account details using your password.
* **Menu-Driven Interface:** A clean, interactive command-line menu for easy navigation.

## ⚙️ Getting Started

### Prerequisites

To compile and run this project, you will need a C++ compiler. The code uses the `<conio.h>` header, which is common in Windows environments (like with MinGW/g++ or older Turbo C++ compilers).

### Compilation & Execution

1.  **Save the Code:** Save the source code as `login.cpp`.
2.  **Open a Terminal/Command Prompt:** Navigate to the directory where you saved the file.
3.  **Compile the Code:** Use a C++ compiler like g++ to create an executable file.

    ```bash
    g++ login.cpp -o login
    ```

4.  **Run the Executable:** Execute the compiled program from your terminal.

    * On Windows:
        ```bash
        .\login.exe
        ```
    * On Linux/macOS (Note: `<conio.h>` is not standard and may require an alternative like ncurses):
        ```bash
        ./login
        ```

## 🛠️ How It Works

The program uses a `struct` named `Register` to store user information (ID, name, email, password) in an array. A global counter keeps track of the number of registered users.

* **`registerAccount()`**: Prompts the user for their details and stores them in the `Register` array.
* **`loginAccount()`**: Compares the user's input email and password against all records in the array.
* **`forgotPassword()` / `forgotEmail()`**: Searches the array for a matching email or password to display the user's stored information.

## ⚠️ Limitations

* **Non-Persistent Storage:** All user data is stored in memory and will be **lost** when the program is closed. There is no database or file-based storage.
* **Fixed User Limit:** The system can only store a maximum of 25 user accounts, as defined by the array size `R[25]`.
* **Basic Security:** The password is not encrypted; it is stored as plain text in memory. This is not suitable for production environments.
* **Platform Dependency:** The use of `<conio.h>` and `system("cls")` makes this code primarily compatible with Windows.

## 🚀 Future Improvements

* Implement file I/O to save and load user data, making it persistent.
* Replace the fixed-size array with a dynamic data structure like a `std::vector`.
* Add password hashing for improved security.
* Refactor the code to remove `goto` and global variables for better programming practice.

---

## 👤 Authors

**[Muhammad Zeeshan Islam](https://github.com/zeeshan020dev)**  
Co-Founder – Unicodrex | Technical Associate – Skill Sprint

[![GitHub](https://img.shields.io/badge/GitHub-zeeshan020dev-black?logo=github)](https://github.com/zeeshan020dev)

Kashaf Gillani

