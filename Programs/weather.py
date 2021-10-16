# Program to show the temperature of a given city.

import requests
cityName = input("Enter the city name that you want to know the temperature: ")
url = 'https://api.openweathermap.org/data/2.5/weather?q='+cityName+'&appid=beb80d5b9f9e719f37e5993766fbabee&units=metric'
response = requests.get(url).json()
print(response)
#print("Temperature: ", response['main']['temp'], chr(176) + "C", sep = '')
print("Temperature: ", response['main']['temp'], u'\N{DEGREE SIGN}' + "C", sep = '')