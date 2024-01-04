import usercreation

def start():
    choice = input("Please select one of the following options:\n\t"
              "1. User registration\n\t"
              "2. User Login\n\t"
              "3.Play the game as a guest\n")
    if choice == "1":
        new_user = input("Input your user name: ")
        usercreation.check_users(new_user)
        usercreation.password_prompt()
        usercreation.user_registration(password_prompt(),new_user)
    else:
        print("Wrong input")
        
start()
