# Program to display meaning of a word.

import requests
import subprocess
word = input("Enter a word to know the meaning: ")
url = 'https://api.dictionaryapi.dev/api/v2/entries/en/' + word
response = requests.get(url).json()
audio = 'vlc -I null -- play-and-exit http:' + response[0]['phonetics'][0]['audio'] 
subprocess.run(audio)
# print(response)
print("The meaning of " + word + " is "+ response[0]['meanings'][0]['definitions'][0]['definition'])