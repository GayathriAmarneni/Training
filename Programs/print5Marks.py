# Progarm to print given 5 marks.

marks = []
for counter in range(1, 6):
	print("Enter the marks of subject-" + str(counter) + ": ", end = "")
	mark = int(input())
	marks.append(mark)
print("Marks of 5 subjects are:", marks)