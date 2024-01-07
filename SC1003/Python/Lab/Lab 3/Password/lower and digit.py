password = input("Please enter a password: ")
lower_alphabet = []
x = 'a'

for i in range (26):
    #make list of lower case alphabet
    lower_alphabet.append(x)
    x = chr (ord(x)+1)

def check_lower(password):
    length_password = len(password)
    print ("checking lower")
    for i in range(length_password):
        for A in range(len(lower_alphabet)):
            if password[i] == lower_alphabet[A]:
                print ("done lower")
                return password
        if i == length_password - 1 :
            password = input("Please enter a password: ")
            return(check_lower(password))

def check_digit(password):
    print ("Checking digit")
    for char in range (len(password)):
        for i in range (10):
            if password [char] == str(i):
                print("done digit")
                return password
        if char == len(password) -1:
            password = input("password: ")
            return(check_digit(check_lower(password)))


def second_half(password):
    return(check_digit(check_lower(password)))



print(second_half(password))
