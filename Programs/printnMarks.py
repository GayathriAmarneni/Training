# Program to read and print n marks.

marks = []
count = int(input("Enter the count of subjects: "))
for counter in range(1, count + 1):
	print("Enter the marks of subject-" + str(counter) + ": ", end = "")
	mark = int(input())
	marks.append(mark)
print("The marks of", count, "subjects are:", marks)