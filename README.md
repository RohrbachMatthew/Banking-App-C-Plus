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
