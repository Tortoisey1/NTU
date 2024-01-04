current_users = {"Test": 'Test12345', "Jack": 'Test12345', "Tom": 'Password1'}

new_user = input("Input your user name: ")

        
def check_users(new_user):
    if new_user in current_users:
        new_user = input("input ur user name:")
        check_users(new_user)
    else:
        print(new_user)
        return new_user
    
check_users(new_user)
