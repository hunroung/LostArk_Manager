from bs4 import BeautifulSoup
import requests
import re
import os
import sys


charac = sys.argv[1]
txtfile_name = "gackin_info_"
txtfile_name += charac
txtfile_name += ".txt"


url = 'https://lostark.game.onstove.com/Profile/Character/'
url += charac

r = requests.get(url)
https = r.text
soup = BeautifulSoup(https, "html.parser")

gackin = [e.text for e in soup.select('.swiper-slide span')]

txtfile_url = "./gackin_info_"
txtfile_url += charac
txtfile_url += ".txt"
f = open(txtfile_url, 'w')
for gac in gackin:
    f.write(gac)
    f.write("\n")
f.close()
