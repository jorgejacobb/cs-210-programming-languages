# CS-210 Programming Languages - Project Reflection

## Project Summary
This project is a C++ program that simulates a digital clock system displaying both a 12-hour and a 24-hour format side by side. The program allows users to interact with the clocks using a simple menu-driven interface to add hours, minutes, or seconds, or exit the program. It was designed to help reinforce fundamental programming skills such as modular function design, loops, conditionals, and user input handling. The purpose of the project was to deepen understanding of time manipulation logic and create a maintainable, user-friendly terminal application.

## What I Did Well
One thing I did particularly well in this project was structuring the program using clear and reusable functions. I separated the logic for displaying the clocks, handling time calculations, and managing the menu system, which made the code more organized and easier to debug.

## What Could Be Improved
One area where the code could be improved is in reducing repetition between the 12-hour and 24-hour clock display functions. Currently, some logic is duplicated, and refactoring these into a shared function with parameters could make the code more efficient and easier to maintain.

## Challenges and Solutions
One of the biggest challenges in this project was managing the rollover logic when incrementing seconds, minutes, and hours. For example, when seconds reached 60, I had to reset them to 0 and correctly increment the minutes, and so on up to hours. It was easy to introduce off-by-one errors or forget a condition. To solve this, I broke the time adjustment logic into smaller, well-defined functions and tested each step carefully. 

## Transferable Skills
This project helped strengthen several skills that I can carry into future programming work. I gained experience in breaking down a problem into smaller, manageable functions, which is crucial for writing scalable and maintainable code.

## Code Quality
To ensure good code quality, I focused on writing modular functions with clear names that reflected their specific purposes. This made the code more readable and easier to maintain. I also added comments where needed to explain logic that wasn’t immediately obvious, especially in the time rollover sections. Consistent indentation and spacing helped keep the structure clean. If I were to expand the program, I would consider using classes to encapsulate clock behavior, which would further improve reusability and adaptability. Overall, I made sure the program was logically organized and easy to navigate for anyone reviewing the code.
