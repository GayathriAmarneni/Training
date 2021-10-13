# CRUD operations in python for single domain.

file_name = "bankCustomers.dat"
records = {}
fData = open(file_name, "r").read()
if fData == None:
	print("No data in the file.")
else:
	records = eval(fData)
def createRecord():
	while(True):
		accountNumber = input("Enter account number: ")
		customerName = input("Enter customer name: ")
		accountBalance = int(input("Enter account balance: "))
		records[accountNumber] = [customerName, accountBalance]
		fData = open(file_name, 'w')
		fData.write(str(records))
		print("Customer datails are saved successfully.")
		fData.close()
		print("Do you want to continue(YES or NO): ", end = "")
		answer = str(input())
		if answer.upper() == 'NO':
			break
def displayRecord():
	line = "Bank customers details."
	print("\t" + line)
	print("\t" + "-" * len(line))
	for record in records:
		print("\nAccount number:", record)
		print("Customer name:", records[record][0])
		print("Account balance:", records[record][1])
def updateRecord():
	accountNumber = input("Enter account number to update the fields: ")
	option = int(input("1.Customer name\n2.Balance\nChoose which field you want to update: "))
	for record in records:
		if record == accountNumber:
			if option == 1:
				records[record][0] = input("Enter new name: ")
			if option == 2:
				records[record][1] = int(input("Enter account balance: "))
		fData = open(file_name, 'w')
		fData.write(str(records))
		print("Customer datails are updated successfully.")
		fData.close()
def deleteRecord():
	accountNumber = input("Enter account number to delete: ")
	del records[accountNumber]
	fData = open(file_name, 'w')
	fData.write(str(records))
	print("Record deleted successfully.")
	fData.close()
while(1):
	print("1. Creating a new customer details.")
	print("2. Read all customer details.")
	print("3. Update a customer details.")
	print("4. Delete a customer details.")
	option = int(input("Enter your option: "))
	if option == 1:
		createRecord()
	elif option == 2:
		displayRecord()
	elif option == 3:
		updateRecord()
	elif option == 4:
		deleteRecord()
	choice = input("Enter any key to continue or enter E to exit: ")
	if choice.upper() == 'E':
		break
