current_users = {"Test": 'Test12345', "Jack": 'Test12345', "Tom": 'Password1'}

def check_old_password(old_username,password):
    if current_users[old_username] == password:
        print("Correct password")
    else:
        print("Wrong password")

def check_old_users():
    old_username = input("input user name: ")
    if old_username in current_users:
        print("ok")
        password = input ("What's your password:")
        check_old_password(old_username,password)
    else:
        print("No")
        
if __name__ == "__Userlogin__":
    check_old_users()

    
