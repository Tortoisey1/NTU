User_number = int(input("Please enter pattern width: "))

for number in range (2 * User_number):
        if number < 5:
            print (number * "*",end="")
            print()
        else:
            print ( (10 - number)*"*",end="")
            print()
