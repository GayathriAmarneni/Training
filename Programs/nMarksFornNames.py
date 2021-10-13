# Program to read and print n marks and n names.

names = {}
marks = []
countOfStudents = int(input("Enter the count of students: "))
countOfSubjects = int(input("Enter the count of subjects: "))
for countOfStudent in range(1, countOfStudents + 1):
	print("Enter a name of the student-" + str(countOfStudent) + ": ", end = "")
	name = str(input())
	for countofSubject in range(1, countOfSubjects + 1):
		print("Enter the marks of subject-" + str(countofSubject) + ": ", end = "")
		mark = int(input())
		marks.append(mark)
	names[name] = marks
	marks = []
print("\nStudent's Marks list", names)