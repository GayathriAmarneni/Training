# Print Multiplication table of a given number.

table_number = int(input("Enter a table number: "))
for counter in range(1,11):
	print(table_number, "X", counter, "=", table_number * counter)