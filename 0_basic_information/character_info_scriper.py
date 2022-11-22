from bs4 import BeautifulSoup
import requests
import re
import os
import sys

#print("<로스트아크 캐릭터 정보 스크랩핑>\n")
#print("캐릭터명 : ", end = '')
charac = sys.argv[1]
txtfile_name = "character_info_"
txtfile_name += charac
txtfile_name += ".txt"
#print(txtfile_name, end='')
#print(" 로 저장되었습니다.")
# print("")
#print(os.getcwd(), end='')
#print(" 위치에 저장되어있습니다.")

url = 'https://lostark.game.onstove.com/Profile/Character/'
url += charac

r = requests.get(url)
https = r.text
soup = BeautifulSoup(https, "html.parser")

clas = str(soup.select('.profile-character-info__img'))  # 클래스
cla = re.sub('[^가-힣]', '', clas)
# print(cla)
# print(soup.select('.profile-character-count em')[0].text) # 전체 캐릭터 수
# print(soup.select('.profile-character-info__server')[0].text) # 현재 서버명

# 전체 서버 캐릭터와 서버명
i = 0
C = []
for el in soup.select('.profile-character-list__server'):
    C.append(el.text)
    C.append(re.sub("Lv.[0-9][0-9]", "\n", soup.select(
        '.profile-character-list__char')[i].text.replace("\n", "")).strip())
    i += 1
# print(C)

# print(soup.select('.profile-character-info__name')[0].text) # 캐릭명
# print(soup.select('.level-info2__item span')[1].text) # 아이템 레벨
# print(soup.select('.profile-ability-basic li span')[1].text) # 공격력
# print(soup.select('.profile-ability-basic li span')[3].text) # 최대생명력
# print(soup.select('.profile-ability-battle li span')[1].text) # 치
# print(soup.select('.profile-ability-battle li span')[3].text) # 특
# print(soup.select('.profile-ability-battle li span')[5].text) # 제
# print(soup.select('.profile-ability-battle li span')[7].text) # 신
# print(soup.select('.profile-ability-battle li span')[9].text) # 인
# print(soup.select('.profile-ability-battle li span')[11].text) # 숙
# print(soup.select('.level-info__item span')[1].text) # 전투레벨

gackin = [e.text for e in soup.select('.swiper-slide span')]
print(gackin)  # 각인 효과

# 전체서버의 캐릭터 수// -> 서버이름 -> 서버캐릭터 수 -> 이름 나열 -> 서버이름 반복

txtfile_url = "./character_info_"
txtfile_url += charac
txtfile_url += ".txt"
f = open(txtfile_url, 'w')
f.write(cla)  # 클래스
f.write("\n")
f.write(soup.select('.profile-character-count em')[0].text)  # 전체 캐릭터 수
f.write("\n")
f.write(soup.select('.profile-character-info__server')[0].text)  # 현재 서버명
f.write("\n")
for ca in C:  # 전체 서버와 전체 캐릭터모음
    f.write(ca)
    f.write("\n")
f.write(soup.select('.profile-character-info__name')[0].text)  # 캐릭명
f.write("\n")
f.write(soup.select('.level-info2__item span')[1].text)  # 아이템 레벨
f.write("\n")
f.write(soup.select('.profile-ability-basic li span')[1].text)  # 공격력
f.write("\n")
f.write(soup.select('.profile-ability-basic li span')[3].text)  # 최대 생명력
f.write("\n")
f.write(soup.select('.profile-ability-battle li span')[1].text)  # 치
f.write("\n")
f.write(soup.select('.profile-ability-battle li span')[3].text)  # 특
f.write("\n")
f.write(soup.select('.profile-ability-battle li span')[5].text)  # 제
f.write("\n")
f.write(soup.select('.profile-ability-battle li span')[7].text)  # 신
f.write("\n")
f.write(soup.select('.profile-ability-battle li span')[9].text)  # 인
f.write("\n")
f.write(soup.select('.profile-ability-battle li span')[11].text)  # 숙
f.write("\n")
f.write(soup.select('.level-info__item span')[1].text)  # 전투레벨
f.write("\n")
for gac in gackin:
    f.write(gac)
    f.write("\n")
f.close()
