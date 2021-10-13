# Program to save a bank customer details in a file using list of lists.

file_name = "bankCustomer.dat"
records = []
fileData = open(file_name, "r")
records = fileData.read()
records = eval(records)
while(True):
	accountNumber = input("Enter account number: ")
	customerName = input("Enter customer name: ")
	accountBalance = int(input("Enter account balance: "))
	records.append([accountNumber, customerName, accountBalance])
	fileData = open(file_name, 'w')
	fileData.write(str(records))
	fileData.close()
	print("Do you want to continue(YES or NO): ", end = "")
	answer = str(input())
	if answer == 'NO':
		break
fileData = open(file_name, 'r')
# records.clear()
records = fileData.readlines()
for line in records:
	print(line)
