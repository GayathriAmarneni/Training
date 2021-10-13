# Program to save bank customer details in a file using List in dictionary.

fileName = "customer.dat"
records = {}
fData = open(fileName, 'r')
records = fData.read()
if fData == None:
	print("No data in the file.")
else:
	records = eval(records)
def display():
	for account_number, details in records.items():
		print("\nAccount number: " + account_number)
		for customerName, accountBalance in details.items():
			print(customerName + ":", accountBalance)
while(True):
	accountNumber = input("Enter account number: ")
	customerName = input("Enter customer name: ")
	accountBalance = int(input("Enter account balance: "))
	records[accountNumber] = {'CustomeName':customerName, 'Accountbalance': accountBalance}
	fData = open(fileName, 'w')
	fData.write(str(records))
	fData.close()
	print("Do you want to continue(YES or NO): ", end = "")
	answer = str(input())
	if answer.upper() == 'NO':
		display()
		break
