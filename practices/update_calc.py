#EM 7th Calc update

def get_user_inputs():
    # Ask the user for their income and expenses
    income = float(input("Hi, could you tell me what is your monthly income? "))
    rent = float(input("What is your monthly rent? "))
    utilities = float(input("What is your monthly utility bills? "))
    groceries = float(input("How much do you spend on groceries each month? "))
    transportation = float(input("How much do you spend on transportation each month? "))

    return income, rent, utilities, groceries, transportation

def calculate_percentages(income, rent, utilities, groceries, transportation):
    # Calculate the savings (10% of income)
    savings = income * 0.10

    # Calculate the total expenses and leftover money
    total_expenses = rent + utilities + groceries + transportation + savings
    leftover = income - total_expenses

    # Calculate percentages of income for each expense
    rent_percent = (rent / income) * 100
    utilities_percent = (utilities / income) * 100
    groceries_percent = (groceries / income) * 100
    transportation_percent = (transportation / income) * 100

    return savings, rent_percent, utilities_percent, groceries_percent, transportation_percent, leftover

def print_results(rent, utilities, groceries, transportation, savings, rent_percent, utilities_percent, groceries_percent, transportation_percent, leftover):
    # Print the results
    print(f"Your rent is ${rent}, and that is {round(rent_percent, 2)}% of your income.")
    print(f"Your utilities are ${utilities}, and that is {round(utilities_percent, 2)}% of your income.")
    print(f"Your groceries are ${groceries}, and that is {round(groceries_percent, 2)}% of your income.")
    print(f"Your transportation is ${transportation}, and that is {round(transportation_percent, 2)}% of your income.")
    print(f"You should save ${round(savings, 2)} each month, that is 10% of your income.")
    print(f"You have ${round(leftover, 2)} of spending money each month.")

# Main program execution
income, rent, utilities, groceries, transportation = get_user_inputs()
savings, rent_percent, utilities_percent, groceries_percent, transportation_percent, leftover = calculate_percentages(income, rent, utilities, groceries, transportation)
print_results(rent, utilities, groceries, transportation, savings, rent_percent, utilities_percent, groceries_percent, transportation_percent, leftover)
