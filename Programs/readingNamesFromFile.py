# Program to read names from file.

try:
	with open("namesFile.dat", "r") as namesFile:
		name = namesFile.read()
		print(name)
except IOError:
	print("Sorry File not found.")
finally:
	print("Reading names from file is successfull.")
