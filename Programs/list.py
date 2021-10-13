"""Build a list and print a items in alist"""

dogs = []
dogs.append('willie')
dogs.append('hootz')
dogs.append('peso')
dogs.append('goblin')
for dog in dogs:
	print("Hello " + dog + "!")
print("I love these dogs!")
print("\nThese are my first two dogs: ")
old_dogs = dogs[:2]
for old_dog in old_dogs:
	print(old_dog)
del dogs[0]
dogs.remove('peso')
print(dogs)
