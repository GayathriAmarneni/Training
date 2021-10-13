# Program to print the series 1, 4, 27, 256,... upto n terms.

countOfTerms = int(input("Enter the count of terms to be printed: "))
for counter in range(1, countOfTerms + 1):
	power = pow(counter, counter)
	if counter < countOfTerms:
		print(power, end = ", ")
	if counter == countOfTerms:
		print(power,end = ".")