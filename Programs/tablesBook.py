# Print tables book.

numberOfTables = int(input("Till what table do you want the table book: "))
row_limit = int(input("Enter limit of rows in the table: "))
for column in range(1, numberOfTables + 1):
	line = "Multiplication table of " + str(column)
	print("\n" + line)
	print("-" * len(line))
	for row in range(1, row_limit + 1):
		print(column, "X", row, "=", column * row)
