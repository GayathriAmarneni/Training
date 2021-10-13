# Program to read and print n bank customer details.

class bankCustomers():
	def __init__(self):
		self.count = int(input("Enter the count of customers: "))
		for counter in range(1, self.count + 1):
			self.accountNumber = str(input("Enter account number of the customer: "))
			self.name = str(input("Enter the name of the customer: "))
			self.balance = int(input("Enter the balance of the customer: "))
	def displayBankDetails(self):
		for counter in range(1, self.count + 1):
			print("\nBank customerDetails\n")
			print("Account balace of the customer:", self.accountNumber)
			print("Name of the customer:", self.name)
			print("Balance of the customer:", self.balance)
customer = bankCustomers()
customer.displayBankDetails()