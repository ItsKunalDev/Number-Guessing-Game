## Number Guessing Game

Overview
The Number Guessing Game is written in C++ and challenges players to guess a randomly generated number within a specific range. The difficulty level of the game determines the number of attempts allowed, with Easy offering 10 attempts, Medium offering 7 attempts, and Hard offering 5 attempts.

Features
- Choose between three difficulty levels: Easy, Medium, and Hard.
- Randomly generate a target number between 1 and 100.
- Provide feedback for each guess, indicating whether the guess is too high or too low.
- Display the number of attempts made.

Gameplay
1. The game starts with a welcome message and prompts the player to select a difficulty level.
2. Based on the selected difficulty level, the player is given a set number of attempts:
   - Easy: 10 attempts
   - Medium: 7 attempts
   - Hard: 5 attempts
3. The player guesses the number and receives feedback:
   - "The number is greater than your guess."
   - "The number is less than your guess."
4. The game ends when the player either guesses the number correctly or runs out of attempts.

Files
- `Number Guessing Game.cpp`: Contains the source code for the game.

Instructions to Run
1. Ensure you have a C++ compiler installed (e.g., g++).
2. Save the code to a file named `Number Guessing Game.cpp`.
3. Open a terminal and navigate to the directory containing `Number Guessing Game.cpp`.
4. Compile the code using the following command:
   ```
   g++ -o NumberGuessingGame "Number Guessing Game.cpp"
   ```
5. Run the executable:
   ```
   ./NumberGuessingGame
   ```

Classes

`zyp`
- Attributes:
  - `int a`: Stores the player's chosen difficulty level.
- Methods:
  - `zyp()`: Constructor that prompts the user to select a difficulty level.
  - `function()`: Displays a message confirming the selected difficulty level and starts the game.

`game_body`
- Inheritance: Inherits from the `zyp` class.
- Attributes:
  - `int n`: Stores the difficulty level (inherited from `zyp`).
- Methods:
  - `game_body()`: Constructor that initializes the difficulty level.
  - `body()`: Implements the core game logic, including generating the random target number, handling guesses, and providing feedback.

Code Flow
1. The `main()` function welcomes the player and creates an instance of the `game_body` class.
2. The `function()` method confirms the difficulty level.
3. The `body()` method executes the guessing game, providing feedback and determining the game outcome.

Dependencies
- Standard C++ libraries: `<iostream>`, `<cstdlib>`, `<ctime>`

Example Output
```
Welcome to the Number Guessing Game!
I'm thinking of a number between 1 and 100.
Please select the difficulty level:
1. Easy
2. Medium
3. Hard

Enter your choice: 2

Great! You have selected the Medium difficulty level.
Let's start the game!

Enter your guess: 50
Incorrect! The number is greater than 50.
Enter your guess: 75
Incorrect! The number is less than 75.
Enter your guess: 63
Congratulations! You guessed the correct number in 3 attempts!
```

Customization
- Modify the range of the random number by changing the `rand() % 100 + 1` expression in the `body()` method.
- Adjust the number of attempts for each difficulty level in the `body()` method.

Notes
- Ensure the input is a valid integer to avoid runtime errors.
- The random number generator uses `srand(time(0))` to ensure randomness for each game session.



