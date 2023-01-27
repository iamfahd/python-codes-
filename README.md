# guess game by using python

import random

# Generate a random number between 1 and 100
answer = random.randint(1, 100)

# Start the guessing game
guess = None
while guess != answer:
    guess = int(input("Guess a number between 1 and 100: "))
    if guess < answer:
        print("Too low.")
    elif guess > answer:
        print("Too high.")
    else:
        print("Correct! The answer was", answer)
