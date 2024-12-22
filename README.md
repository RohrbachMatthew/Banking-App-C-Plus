# Banking App

This is a simple banking application that calculates the future balance of an investment with and without monthly deposits over a specified number of years.

## Features

- Prompts the user for initial investment amount, monthly deposit, annual interest rate, and number of years.
- Calculates and displays the balance and interest earned each year with and without monthly deposits.

## Files

- `main.cpp`: Contains the main function that interacts with the user and displays the results.
- `investment.h`: Header file defining the `Investment` class.
- `investment.cpp`: Implementation file for the `Investment` class.

## Usage

1. Compile the program using a C++ compiler:
    ```sh
    g++ -o BankingApp main.cpp investment.cpp
    ```

2. Run the compiled program:
    ```sh
    ./BankingApp
    ```

3. Follow the prompts to enter the initial investment amount, monthly deposit, annual interest rate, and number of years.

4. The program will display the investment balance and interest earned each year with and without monthly deposits.

   -----------------------------------------------------------------------------------------------------------------------------------------
   -----------------------------------------------------------------------------------------------------------------------------------------

Project Summary
The Banking App is designed to help users calculate the future balance of an investment with and without monthly deposits over a specified number of years. It addresses the problem of manually calculating compound interest and future investment value, providing a clear and automated way to visualize how different investment strategies affect the growth of their funds.

What Did You Do Particularly Well?
The program effectively prompts the user for necessary inputs and provides clear, formatted output tables showing the investment growth with and without monthly deposits. The use of a class (Investment) to encapsulate the investment logic is a good practice, promoting modularity and reusability.

Where Could You Enhance Your Code?
Input Validation: Adding checks to ensure the user inputs valid data (e.g., non-negative numbers) would make the program more robust.
Error Handling: Implementing error handling for unexpected situations (e.g., invalid input types) would improve the program's reliability.
Optimization: The balance calculation methods could be optimized for better performance, especially for large numbers of years or high-frequency calculations.
These improvements would make the code more user-friendly, secure, and efficient by preventing invalid inputs and handling errors gracefully.

Most Challenging Pieces of Code
The most challenging part might have been implementing the balance calculation methods, especially ensuring the correct application of compound interest formulas. Overcoming this likely involved careful testing and debugging to ensure accuracy. Utilizing resources like online tutorials, documentation, and forums would have been helpful in understanding and implementing these financial calculations.

Transferable Skills
Object-Oriented Programming (OOP): The use of classes and encapsulation is a fundamental OOP skill that is applicable to many other projects.
User Input Handling: Prompting and processing user input is a common requirement in many applications.
Financial Calculations: Understanding and implementing financial formulas can be useful in various domains, including finance and data analysis.
Maintainability, Readability, and Adaptability
Modular Design: By separating the investment logic into its own class (Investment), the program is easier to maintain and extend.
Clear Naming Conventions: Using descriptive variable and method names makes the code more readable.
Documentation: Adding comments and a README.md file helps others understand the purpose and usage of the program.
Consistent Formatting: Following consistent code formatting standards improves readability and maintainability.
