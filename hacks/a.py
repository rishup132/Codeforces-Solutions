import requests
from bs4 import BeautifulSoup


b = requests.get('https://codeforces.com/contest/995/submission/39760227')
hd = open('a.json','w')
#hd.write(b.text)
soup = BeautifulSoup(b.text, 'html.parser')

a = soup('pre')

for i in a:
    print(i.contents[0])