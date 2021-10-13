# Program to read and print n names.

count = int(input("Enter the number of students: "))
names = []
for counter in range(1, count + 1):
	print("Enter a name of the student-" + str(counter) + ": ", end = "")
	name = str(input())
	names.append(name)
print("The names of", count, "students are:", names)
