import random
n = random.randint(55, 66)
correct_answer = 0
print("Please calculate the sum of 5 integers start from ", n)
user_answer = int(input("Please enter your answer:"))
for i in range (5):
    correct_answer += n
    n += 1
if user_answer != correct_answer:
    print ("Sorry, wrong answer. Failed.")
else:
    print ("You can start the game now.")
