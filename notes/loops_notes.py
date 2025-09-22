# Em 7th loops notes 

foods = ["chocolate", "pasta", "brownies", "cookies", "garlic bread", "fajitas"]

#for loop
for food in foods:
    print(f"{food} is my favorite food")
#loops repeat the code inside them for a specified amount of time.
# print(f:{food} is my favorite food!")
for x in range(1,20):
    print(x)

 #while loops
 #1 iterator--> how many times the loop has run
 #2 set stopping point
 #3 increase interiator

"""i = 0
while True:
    print(i)
    i+=1"""

# infinite loop( one of 3 steps missing)


#correct while loop
i = 1
while i <20:
    print(i)
    i+= 1
# every loop is an iteration of the same code 
x = 1

while x < 21:
    if x % 2 == 0:
        print(f"{x} is an even number.")
    else:
        print(f"{x} is an odd number.")
    print(x)
    x+= 1
    
import random

d = 1
end = random.randint(1,20)

"""while d != end:
    print("duck")
    d+=1

print("goose")"""

while True:
    if d == end:
        print("goose!")
        break
    else:
        print("duck")
        d += 1
# break is breaking the code of loop
