#Print the bigger number among two numbers.

number1 = int(input("Enter the first number: "))
number2 = int(input("Enter the second number: "))
if (number1 == number2):
	print(number1 + " and " + number2 + " are equal.")
elif (number1 > number2):
	print(number1, "is greater than", number2)
else:
	print(number2, "is greater than", number1)
