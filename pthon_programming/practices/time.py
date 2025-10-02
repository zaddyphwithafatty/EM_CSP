# em 7th time 

import datetime

now = datetime.datetime.now()
hour = now. hour

print(f"the hour is: {hour}")

if hour >= 19:
    print("good evening")

elif hour <= 11:
    print("it is morning")

elif hour >= 12:
    print(" it is afternoon")