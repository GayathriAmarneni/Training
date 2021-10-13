# Program to check wheather a given number is prime or not.

import math
number = int(input("Enter a number to check prime or not: "))
if number == 2:
	print(number, "is a prime number")
elif number > 1 and number % 2 != 0:
	for counter in range(3, (int)(math.sqrt(number) + 1), 2):
		if (number % counter) == 0:
			print(number, "is not a prime number,")
			break
	else:
		print(number, "is a prime number.")
else:
	print(number, "is not a prime number.")