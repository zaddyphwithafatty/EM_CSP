# Em 7th conditional notes 

#What puts something inside of the “if” statement? tab
homework_done = input("is your homework done?")
homework_done = "yes" 
if homework_done == "no":
    print("Then go do your homework!")
else:
    print("yes you can go")

grade = input("what is your grade?")

grade = 100
if grade > 89:
    print(f"you have{grade} thats an A")
elif grade > 79:
    print(f"you have {grade}% thats a B!")

else:
    print(f"you have {grade}%! thats a C or lower")

#logical operatiors and, or not


name = input("what is your name: ")

if name == "ms Larose":
    print("you are the teacher!")
elif name == "tia" or name == "ashley": 
    print("you are the TA")
else:
    print(f"hello {name}, you are a student!")


#What do if statements do? check if something is true or false
# to check if something is true or false
#What are boolean statements? alwsay true or false
#What do else statements do?specifies a block of code

#What kind of statement do you use if you have more than 2 needed outcomes? elif

#What do each of the different symbols mean in conditionals? 
#< less than
#> greater than
#<= less than or equal 
#>= greater or equal to
#== are they equal
#!not equal to
#What are the 3 logical operators? and or not
#What are logical operators for? can be usd to mka edecision in code or evalute conplex statements
#What does a nested conditional statement do? a condition that only happens inside anothe rone
