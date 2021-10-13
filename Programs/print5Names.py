# Program to read and print 5 names.

names = []
for counter in range(1, 6):
	print("Enter a name of the student-" + str(counter) + ": ", end = "")
	name = str(input())
	names.append(name)
print("The names of", 5, "students are:", names)