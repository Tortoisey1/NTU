password = input("Please enter a password: ")
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

def check_length(password):
    length_password = len(password)
    while length_password < 8 :
        print ("checking length")
        password = input("Please enter a password: ")
        length_password = len(password)
    else:
        print("done length")
        return password

    
def check_upper(password):
    length_password = len(password)
    print("checking upper")
    for i in range(length_password):
        for A in range (len(upper_alphabet)):
            if password[i] == upper_alphabet[A]:
                print ("done upper")
                return password
    if i == length_password - 1 :
        password = input("Please enter a password: ")
        return(check_upper(check_length(password)))
        

def first_half(password):
    return (check_upper(check_length(password)))

def check_lower(password):
    length_password = len(password)
    print ("checking lower")
    if first_half(password) == False:
        first_half(password)
    for i in range(length_password):
        for A in range(len(lower_alphabet)):
            if password[i] == lower_alphabet[A]:
                print ("done lower")
                return password
        if i == length_password - 1 :
            password = input("Please enter a password: ")
            return(check_lower(first_half((password))))

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


def main(password):
    return(second_half(first_half(password)))

print(main(password))
