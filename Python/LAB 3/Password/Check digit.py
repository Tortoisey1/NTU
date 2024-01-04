password = input("password:")

def check_digit(password):
    print ("Checking digit")
    for char in range (len(password)):
        for i in range (10):
            if password [char] == str(i):
                return password
        if char == len(password) -1:
            password = input("password: ")
            return(check_digit(password))


print(check_digit(password))
