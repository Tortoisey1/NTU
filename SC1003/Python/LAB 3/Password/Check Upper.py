password = input("Please enter a password: ")
upper_alphabet = []
x = 'A'

for i in range (26):
    #list of upper case alphabet
    upper_alphabet.append(x)
    x = chr (ord(x)+1)



def check_upper(password):
    length_password = len(password)
    for i in range(length_password):
        for A in range (len(upper_alphabet)):
            if password[i] == upper_alphabet[A]:
                return password
    if i == length_password - 1 :
        password = input("Please enter a password: ")
        return (check_upper(password))

print(check_upper(password))
