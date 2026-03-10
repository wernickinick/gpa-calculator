# GPA Calculator (C++)

<img width="429" height="422" alt="Screenshot 2026-03-09 at 10 38 16 PM" src="https://github.com/user-attachments/assets/6aa0f86e-8759-492b-895b-a98868f13496" />


## Author

Nicholas Wernicki

## Description

This program is a simple GPA calculator written in C++. It asks the user how many classes they have, then asks for the subject name and grade for each class. The program converts the numeric grades into a GPA value and calculates the overall GPA.

The GPA scale used in this program is:

* 90 – 100 → 4.0
* 80 – 89 → 3.0
* 70 – 79 → 2.0
* 60 – 69 → 1.0
* Below 60 → 0.0

After all grades are entered, the program calculates the average GPA and prints it to the screen.

## Features

* ASCII calculator style interface
* Allows the user to enter multiple classes
* Stores subjects and grades using vectors
* Converts percentage grades to GPA scale
* Calculates and displays the final GPA

## How It Works

1. The program starts and displays a calculator style title screen.
2. The user enters how many classes they have.
3. The program asks for the subject name and grade for each class.
4. The grades are converted to GPA values.
5. The GPA values are averaged.
6. The final GPA is printed.

## Example Output

enter how many classes you have: 3

enter your subject: Math
enter your grade: 95

enter your subject: English
enter your grade: 88

enter your subject: History
enter your grade: 72

your gpa is 3

## Requirements

* C++ compiler (g++ or clang++)
* Standard library headers:

  * iostream
  * string
  * vector

## How to Compile

g++ -o main main.cpp 

## How to Run

./main

## Notes

This program was created as a beginner C++ project to practice:

* loops
* vectors
* conditionals
* user input
* basic GPA calculation logic

Future improvements could include:

* printing class GPAs
* supporting weighted GPA
* adding better input validation
* adding a GUI
