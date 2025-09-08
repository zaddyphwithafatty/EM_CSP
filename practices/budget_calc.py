# EM 7th calc

# - income, rent, utlities, groceries, transportation saving is 10


#ask the user for their income and expenses
income = float(input("Hi could you tell me what is your monhly income?"))

rent = float(input("what is your monthly rent?"))
utilities = float(input("what is your monthly utiltity bills?"))
groceries = float(input("how much do you spend on groceries each month?"))
transportation = float(input("how much doyou spend on transportation each month?"))
savings = income * 0.1
#calculat percenages of income
spend = income -(utilities +  rent -  groceries + transportation + savings)
rent_percent = (rent / income) * 100 
utilities_percent = (utilities / income) * 100
groceries_percent = (groceries / income) * 100
transportation_precent  = (transportation / income) * 100

#calculate savings (10% of income)

saving = income * 0.10
saving_percent = 10

#calculate reamining money

total_expenses = rent + utilities + groceries + transportation + saving
leftover = income - total_expenses

#print the results 

print ("your rent is $ ", rent, " and that is", round(rent_percent, 2), "% of your income")
print ("your utilities are $", utilities, "and that is", round(utilities_percent), "% of your income")
print ("your groceries $", groceries, "and tht is", round (groceries_percent), "% of your income")
print ("your transportation is $ ", transportation, " and that is", round(transportation_percent), "% of your income")
print ("you should save $", round( saving, 2), "each month, that is", saving_percent, "% of your income")
print ("you have $", round (leftover, 2), "0f spending money each month")
