import FinalGame


def start():
    choice = input("Please select one of the following options:\n\t"
              "1. User registration\n\t"
              "2. User Login\n\t"
              "3.Play the game as a guest\n")
    if choice == "3":
        FinalGame.game()
    else:
        print("Wrong input")
        
start()
