Condition = True
count = 0
counter = 0

while ( Condition == True ):
    str = input("enter a string: ")
    for letter in str:
      if letter == 'a':
          count +=1  
          break
      elif letter == "#":
          counter +=1
          if counter == 4:
              Condition = False
          
print(count , "strings with letter 'a'")
