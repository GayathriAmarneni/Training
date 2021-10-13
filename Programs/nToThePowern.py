# Program to calculate n to the power n.

base = int(input("Enter a base number: "))
result = 1
counter = 0
while counter < base:
	result = result * base
	counter = counter + 1
print(base, "to the power of", base, "is", result)

