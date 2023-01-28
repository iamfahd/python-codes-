#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    std::string user_choice;
    std::cout << "Welcome to Rock-Paper-Scissors!" << std::endl;
    std::cout &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter your choice (rock, paper, or scissors): \";\n    std::cin >>"}`&#8203; user_choice;
    int computer_choice = rand() % 3;
    std::string computer_choice_string;
    if (computer_choice == 0) {
        computer_choice_string = "rock";
    } else if (computer_choice == 1) {
        computer_choice_string = "paper";
    } else {
        computer_choice_string = "scissors";
    }
    std::cout << "The computer chose " << computer_choice_string << "." << std::endl;
    if (user_choice == "rock") {
        if (computer_choice_string == "rock") {
            std::cout << "It's a tie!" << std::endl;
        } else if (computer_choice_string == "paper") {
            std::cout << "You lose!" << std::endl;
        } else {
            std::cout << "You win!" << std::endl;
        }
    } else if (user_choice == "paper") {
        if (computer_choice_string == "rock") {
            std::cout << "You win!" << std::endl;
        } else if (computer_choice_string == "paper") {
            std::cout << "It's a tie!" << std::endl;
        } else {
            std::cout << "You lose!" << std::endl;
        }
    } else if (user_choice == "scissors") {
        if (computer_choice_string == "rock") {
            std::cout << "You lose!" << std::endl;
        } else if (computer_choice_string == "paper") {
            std::cout << "You win!" << std::endl;
        } else {
            std::cout << "It's a tie!" << std::endl;
        }
    } else {
        std::cout << "Invalid input. Please enter rock, paper, or scissors." << std::endl;
    }
    return 0;
}
