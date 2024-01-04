password = input("Please enter a password: ")
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

print(first_half(password))
