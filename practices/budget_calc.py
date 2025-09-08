# EM 7th calc

# - income, rent, utlities, groceries, transportation saving is 10
spend = income -(utilities +rent -  groceries + traonsportation + savings)
precent_rent = incomen * 100
monthly_income = 3000
mortgage = 1200
monthly_utilities = 200
monthly_groceries = 250
transportation = 500
#ask the user for their income and expenses
income = float(input("hi ould you tell me wat is your monhly income?"))

rent = float(input("what is your monthly rent?"))
utilities = float(input("what ar your monthly utiltity bills?"))
groceries = float(input("how much do you spend on groceries each month?"))
trasportation = float(input("how much doyou spend on transportation each month?"))

#calculat percenages of income

rent_percent = (rent / income) * 100 
utilities_percent = (utilities / income) * 100
groceries_percent = (groceries / income) * 100
transportation_income = (trasportation / income) * 100

#calculate savings (10% of income)

saving = income * 0.10
saving_percent = 10

#calculate reamining money

total_expenses = rent + utilities + groceries + trasportation + saving
leftover = income - total_expenses

#print the results 

print("your rent is $ ", rent " and that is", round(rent_percent), "% of your income")
print("your utilities are $", utilities, "and that is", round(utilities_percent), "% of your income")
print("your groceries $", groceries, "and tht is", round (groceries_percent), "% of your income")
print("your transportation is $ ", trasportation " and that is", round (transportation_percent), "% of your income")
print("you should save $", round( savings, 2), "each month, that is", saving_percent, "% of your income")
print("you have $", round (leftover, 2), "0f spending money each month")
