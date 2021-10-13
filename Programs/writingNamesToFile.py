# Program to write a name to a file.

try:
	with open('namesFile.dat', 'a') as nameFile:
		name = str(input("Enter a name: "))
		nameFile.write(name)
		nameFile.write("\n")
except IOError:
	print("Sorry File not found.")
finally:
	print("Data saved successfully.")