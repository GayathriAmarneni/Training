# Framework program in python.

dataFile = "framework.dat"
menuFile = "menu.cfg"
fieldsFile = "fields.cfg"
records = {}
fieldValues = []
fData = open(dataFile, 'r').read()
if fData == None:
	print("No data in the file.")
else:
	records = eval(fData)
fFields = open(fieldsFile, "r")
fieldNames = fFields.readlines()
fields = []
fieldCounter = 0
for fieldName in fieldNames:
	if fieldCounter == 0:
		fieldName = fieldName.strip()
		fieldValue = fieldName
		fieldCounter += 1
	else:
		fieldName = fieldName.strip()
		fields.append(fieldName)
def createRecord():
	while(True):
		fieldCounter = 0
		for fieldName in fieldNames:
			if fieldCounter == 0:
				fieldName = fieldName.strip()
				print("Enter " + fieldName + ": ", end = "")
				fieldValue1 = input()
				fieldCounter += 1
			else:
				fieldName = fieldName.strip()
				print("Enter " + fieldName + ": ", end = "")
				fieldValue2 = input()
				fieldValues.append(fieldValue2)
		records[fieldValue1] = fieldValues
		fData = open(dataFile, 'w')
		fData.write(str(records))
		print("Record saved successfully.")
		fData.close()
		break
def displayRecords():
	for record in records:
		counter = 0
		count = 0
		for fieldName in fieldNames:
			if counter == 0:
				fieldName = fieldName.strip()
				print(fieldName + ": " + record)
				counter += 1
			else:
				fieldName = fieldName.strip()
				print(fieldName + ": " + records[record][count])
				count += 1
		print("-----------")
def updateRecord():
	fieldValue1 = input("Enter field value to update the fields: ")
	counter = 1
	for fieldName in fields:
		print(counter, '. ', fieldName, sep = '')
		counter += 1
	option = int(input("Enter your option: "))
	for record in records:
		if record == fieldValue1:
			print("Enter new", fields[option - 1] + ": ", end = '')
			records[record][option - 1] = input()
			fData = open(dataFile, 'w')
			fData.write(str(records))
			print("Record datails are updated successfully.")
			fData.close()
def deleteRecord():
	fieldValue1 = input("Enter field value to delete: ")
	if fieldValue1 in records:
		del records[fieldValue1]
		fData = open(dataFile, 'w')
		fData.write(str(records))
		print("Record deleted successfully.")
		fData.close()
	else:
		print("Record is not found.")
def exit():
	quit()
while(1):
	fmenu = open(menuFile, 'r')
	menuLine = fmenu.read()
	print(menuLine)
	options = [createRecord, displayRecords, updateRecord, deleteRecord, exit]
	length = len(options)
	option = int(input("Enter your option: "))
	if option > length:
		print("Enter a valid option.")
	else:
		options[option - 1]()
	choice = input("Enter any key to continue or enter E to exit: ")
	if choice.upper() == 'E':
		break

