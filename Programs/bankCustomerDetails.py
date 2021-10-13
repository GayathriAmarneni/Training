# Read and print account details of 1 bank customer.

class bankCustomer():
	def __init__ (self):
		self.accountNumber = str(input("Enter account number of the customer: "))
		self.name = str(input("Enter the name of the customer: "))
		self.balance = int(input("Enter the balance of the customer: "))
	def displayBankDetails(self):
		print("\nAccount balace of the customer:", self.accountNumber)
		print("Name of the customer:", self.name)
		print("Balance of the customer:", self.balance)
customer = bankCustomer()
customer.displayBankDetails()