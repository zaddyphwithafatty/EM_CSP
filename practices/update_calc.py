#EM 7th Calc update

def get_input(prompt):
    value = float(input(prompt))
    return value

def calculate_percent(income, expense):
    return (expense / income) * 100

def main():
    print("Welcome to the Financial Calculator!")

    income = get_input("Enter your monthly income: $")
    rent = get_input("Enter your monthly rent: $")
    food = get_input("Enter your monthly food cost: $")
    transportation = get_input("Enter your monthly transportation cost: $")
    entertainment = get_input("Enter your monthly entertainment cost: $")

    print("\nHere is the percentage of your income spent on each category:")
    print(f"Rent: {calculate_percent(income, rent):.2f}%")
    print(f"Food: {calculate_percent(income, food):.2f}%")
    print(f"Transportation: {calculate_percent(income, transportation):.2f}%")
    print(f"Entertainment: {calculate_percent(income, entertainment):.2f}%")

    total_expenses = rent + food + transportation + entertainment
    print(f"\nTotal Expenses: ${total_expenses:.2f}")
    print(f"Total Percent of Income Spent: {calculate_percent(income, total_expenses):.2f}%")

main()
