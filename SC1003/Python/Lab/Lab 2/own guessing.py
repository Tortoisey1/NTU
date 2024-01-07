import random
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
    
