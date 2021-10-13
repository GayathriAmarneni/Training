#Program to calculate m to the power n.

base = int(input("Enter base number: "))
exponent = int(input("Enter exponent number: "))
result = 1
for exponent in range(0, exponent + 1, 1):
	result = result * base
print(base, "to the power of", exponent, "is", result)