import random

def number_guessing():
    n = random.randint(1,9)
    trials = 0
    limit_trials = 3
    guess = int(input("Enter an integer from 1 to 9: "))
    while trials < limit_trials:
        trials += 1
        if guess < n:
            print ("Guess is low")
            if trials < limit_trials:
                guess = int(input("Enter an integer from 1 to 9: "))
        elif guess > n:
            print("Guess is high")
            if trials < limit_trials:
                guess = int(input("Enter an integer from 1 to 9: "))
        elif guess == n:
            print ("Congratulations. You guessed it by", trials, "trials !")
            print()
            print ("You can start the game now.")
            break
    else:
        print("Sorry, you exceed the trial limit. Failed.")

def sum_game ():
    n= random.randint (55,66)
    correct_answer = 0
    print ("Please calculate the sum of 5 integers starting from ",n)
    user_answer = input("Please enter your answer:")
    for i in range(5):
        correct_answer +=n
        n += 1
    if user_answer != str(correct_answer):
        print ("Sorry, wrong answewr. Failed.")
    else:
        print("You can start the game now.")
        


def game():
    choice_game = input("Please select one of the following quizzes: \n\t\
       1. Number guessing\n\t\
       2. Calculate sum\n")
    if choice_game == "1":
        number_guessing()
    elif choice_game == "2":
        sum_game()
    else:
        print("Wrong option. Bye.")
        
if __name__ == "__game__":
    game()
    
