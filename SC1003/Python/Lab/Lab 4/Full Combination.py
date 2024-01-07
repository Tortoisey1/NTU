import random

current_users = {"Test": 'Test12345', "Jack": 'Test12345', "Tom": 'Password1'}
lower_alphabet = []
x = 'a'

for i in range (26):
    #make list of lower case alphabet
    lower_alphabet.append(x)
    x = chr (ord(x)+1)

upper_alphabet = []
x = 'A'

for i in range (26):
    #list of upper case alphabet
    upper_alphabet.append(x)
    x = chr (ord(x)+1)

def check_users(new_user):
    if new_user in current_users:
        print ("The user exists. Please choose another user name.")
        new_user = input("Input ur user name:")
        check_users(new_user)
    else:
        current_users[new_user] = None
        return new_user

def password_prompt():
    password = input("Input your password:\n"
      "1.the password has at least one upper case letter\n"
      "2.the password has at least one lower case letter\n"
      "3.the password has at least one digit\n"
      "4.its length is more than 8\n")
    return password

def check_length(password):
    length_password = len(password)
    while length_password < 8 :
        password = weak_password()
        length_password = len(password)
    else:
        return password

def check_upper(password):
    length_password = len(password)
    for i in range(length_password):
        for A in range (len(upper_alphabet)):
            if password[i] == upper_alphabet[A]:
                return password
    if i == length_password - 1 :
        password = weak_password()
        return(check_upper(check_length(password)))

def first_half(password):
    return (check_upper(check_length(password)))

def check_lower(password):
    length_password = len(password)
    if first_half(password) == False:
        first_half(password)
    for i in range(length_password):
        for A in range(len(lower_alphabet)):
            if password[i] == lower_alphabet[A]:
                return password
        if i == length_password - 1 :
            password = weak_password()
            return(check_lower(first_half((password))))

def check_digit(password):
    for char in range (len(password)):
        for i in range (10):
            if password [char] == str(i):
                return password
        if char == len(password) -1:
            password = weak_password()
            return(check_digit(check_lower(password)))

def second_half(password):
    return(check_digit(check_lower(password)))

def weak_password():
    print("Your password is weak. Please enter a new password")
    password = password_prompt()
    return password

def user_registration(password,new_user):
    password = second_half(first_half(password))
    current_users[new_user] = password
    print("New User registered. You can start the game.")

def check_old_password(old_username,password):
    if current_users[old_username] == password:
        print("Welcome back,",old_username,",You can start the game.")
    else:
        print("Wrong password")

def check_old_users(old_username):
    if old_username in current_users:
        password = input ("What's your password:")
        check_old_password(old_username,password)
    else:
        print("Wrong Username.")

def number_guessing():
    n = random.randint(1,9)
    trials = 0
    limit_trials = 3
    while True:
        try:
            guess = int(input("Enter an integer from 1 to 9: "))
            break
        except ValueError:
            print("Wrong type of input.")
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
            carry_on = False
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

def main():
    choice = input("Please select one of the following options:\n\t"
              "1. User registration\n\t"
              "2. User Login\n\t"
              "3.Play the game as a guest\n")
    if choice == "1":
        new_user = input("Input your user name: ")
        check_users(new_user)
        user_registration(password_prompt(),new_user)
    elif choice == "2":
        old_username = input("Input user name:")
        check_old_users(old_username)
    elif choice == "3":
        game()
    else:
        print("Wrong input")
        
main()

