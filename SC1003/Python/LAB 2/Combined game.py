import random
Choose = input("Please select one of the following quizzes: \n\t\
       1. Number guessing\n\t\
       2. Calculate sum\n")

if (Choose == "1"):
    n = random.randint(1, 9)
    trials = 0
    limit_trials = 3
    guess = int(input("Enter an integer from 1 to 9: "))
    while trials < limit_trials:
        trials += 1
        if guess < n:
            print ("guess is low")
            if trials < limit_trials:
                guess = int(input("Enter an integer from 1 to 9: "))
        elif guess > n:
            print ("guess is high")
            if trials < limit_trials:
                guess = int(input("Enter an integer from 1 to 9: "))
        elif guess == n:
            carry_on = False
            print ("Congratulations.You guessed it by", trials, "trials !")
            print()
            print("You can start the game now.")
            break
    else:
        print ("Sorry, you exceed the trial limit. Failed.")

elif Choose == "2":
    n = random.randint(55, 66)
    correct_answer = 0
    print("Please calculate the sum of 5 integers start from ", n)
    user_answer = int(input("Please enter your answer:"))
    for i in range (5):
        correct_answer += n
        n += 1
    if user_answer != correct_answer:
        print ("Sorry, wrong answer. Failed.")
    else:
        print ("You can start the game now.")

else:
    print ("Wrong option. Bye.")
    


