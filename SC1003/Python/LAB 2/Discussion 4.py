User_number = int(input("Please enter pattern width: "))
counter = 4

for number in range (User_number + 1):
        print (number * "*",end="")
        print()

Reverse_number = -1 * User_number

for number in range(Reverse_number,0,1):
        print (counter * "*",end="")
        print()
        counter -= 1

