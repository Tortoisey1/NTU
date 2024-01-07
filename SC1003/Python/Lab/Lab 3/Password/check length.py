password = input("Please enter a password: ")
x = 0
def check_length(password,x):
    length_password = len(password)
    while length_password < 8 :
        password = input("Please enter a password: ")
        length_password = len(password)
    else:
        x += 1
        return x

x = check_length(password,x)
print(x)
