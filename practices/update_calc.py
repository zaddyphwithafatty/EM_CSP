#EM 7th Calc update

def input ( )
income = float(input("Hi could you tell me what is your monthly income?"))
rent = float(input("what is your monthly rent?"))
utilities = float(input("what is your monthly utiltity bills?"))
groceries = float(input("how much do you spend on groceries each month?"))
transportation = float(input("how much doyou spend on transportation each month?"))
savings = income * 0.1
spend = income -(utilities +  rent -  groceries + transportation + savings)
rent_percent = (rent / income) * 100 
utilities_percent = (utilities / income) * 100
groceries_percent = (groceries / income) * 100
transportation_precent  = (transportation / income) * 100
def percent(type, amount):
    per = amount / income * 100

    return(f"your{type} is {per}% income.")

#calculate savings (10% of income)

saving = income * 0.10
saving_percent = 10

#calculate reamining money

total_expenses = rent + utilities + groceries + transportation + saving
leftover = income - total_expenses


print ("your rent is $ ", rent, " and that is", round(rent_percent, 2), "% of your income")
print ("your utilities are $", utilities, "and that is", round(utilities_percent), "% of your income")
print ("your groceries $", groceries, "and tht is", round (groceries_percent), "% of your income")
print ("your transportation is $ ", transportation, " and that is", round(transportation_precent), "% of your income")
print ("you should save $", round( saving, 2), "each month, that is", saving_percent, "% of your income")
print ("you have $", round (leftover, 2), "0f spending money each month")
print(percent("rent", rent))
print(percent("utilities", utilities))
print(percent("groceries", groceries))
print(percent("transportation", transportation))
print(percent("saving", saving))
print(percent("total_expenses", total_expenses))

