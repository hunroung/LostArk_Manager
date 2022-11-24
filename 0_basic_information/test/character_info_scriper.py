from bs4 import BeautifulSoup
import requests
import re
import os
import sys


charac = sys.argv[1]
txtfile_name = "character_info_"
txtfile_name += charac
txtfile_name += ".txt"


url = 'https://lostark.game.onstove.com/Profile/Character/'
url += charac

r = requests.get(url)
https = r.text
soup = BeautifulSoup(https, "html.parser")

clas = str(soup.select('.profile-character-info__img'))  
cla = re.sub('[^가-힣]', '', clas)

i = 0
C = []
for el in soup.select('.profile-character-list__server'):
    C.append(el.text)
    C.append(re.sub("Lv.[0-9][0-9]", "\n", soup.select(
        '.profile-character-list__char')[i].text.replace("\n", "")).strip())
    i += 1


gackin = [e.text for e in soup.select('.swiper-slide span')]

txtfile_url = "./character_info_"
txtfile_url += charac
txtfile_url += ".txt"
f = open(txtfile_url, 'w')
f.write(cla)
f.write("\n")
f.write(soup.select('.profile-character-count em')[0].text)
f.write("\n")
f.write(soup.select('.profile-character-info__server')[0].text)
f.write("\n")
for ca in C:
    f.write(ca)
    f.write("\n")
f.write(soup.select('.profile-character-info__name')[0].text)
f.write("\n")
f.write(soup.select('.level-info2__item span')[1].text) 
f.write("\n")
f.write(soup.select('.profile-ability-basic li span')[1].text)  
f.write("\n")
f.write(soup.select('.profile-ability-basic li span')[3].text)  
f.write("\n")
f.write(soup.select('.profile-ability-battle li span')[1].text)  
f.write("\n")
f.write(soup.select('.profile-ability-battle li span')[3].text) 
f.write("\n")
f.write(soup.select('.profile-ability-battle li span')[5].text) 
f.write("\n")
f.write(soup.select('.profile-ability-battle li span')[7].text)  
f.write("\n")
f.write(soup.select('.profile-ability-battle li span')[9].text) 
f.write("\n")
f.write(soup.select('.profile-ability-battle li span')[11].text)  
f.write("\n")
f.write(soup.select('.level-info__item span')[1].text)  
f.write("\n")
for gac in gackin:
    f.write(gac)
    f.write("\n")
f.close()
