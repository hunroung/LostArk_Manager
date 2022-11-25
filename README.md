# 개발 진척도
![My project-1 (2)](https://user-images.githubusercontent.com/56543424/203941331-66ddc1a1-1b63-439c-b27e-3c339d5d8fe7.png)

## 각인 추천 기능
1. `Gackin.h` : 각인 추천에 필요한 여러 함수, 클래스들 선언 ( 사실상 대부분의 기능에서 활용될 메인 라이브러리 )
   * 캐릭터 정보를 담을 멤버 변수 규격을 정하였습니다.
   * 군단장 패턴, 가디언 패턴 등등 몬스터에 대한 정보를 담을 클래스를 규격화 하고있습니다. 
   ( 상속 가능하게 만들어서 분할 할 예정입니다. )


2. `character_info_scriper.py` : 캐릭터 정보를 스크래핑하여, txt파일로 저장하는 기능
   * 이미 완성되었습니다.
   * `Gackin.h` 에 캐릭터 클래스 규격에 맞춰서 캐릭터 정보를 스크래핑하고, txt 파일로 저장해줍니다.
   * 각인 추천 기능의 핵심적인 기능으로 `양경원` 학생이 제작하였습니다.
   * 해당 기능을 통해 랭커들의 정보를 스크래핑한 뒤, 랭커들의 각인을 분석하여 추천 기능을 제작할 예정입니다.
   
### 코멘트

로스트아크 매니저 기능을 구현하기 위해서는 가장 먼저 랭커들
(게임내 랭킹이 높은 사람들)의 정보, 또는 내 캐릭터의 정보를 데이터로 저장할 
필요가 있었습니다. 이 때문에 홈페이지에서 정보를 가져오는 스크랩 프로그램을
 만들기로 계획했습니다.

홈페이지에서 정보를 가져오기위해 빠르게 배울 수 있고 모듈이 많아 원하는 
프로그램을 구현하기 쉬운 파이썬을 사용했습니다. 파이썬 모듈로는 requests 
모듈과 beautifulsoup 모듈을 사용했습니다. 파이썬의 requests 모듈은 HTTP 
요청을 보내 홈페이지의 소스코드를 받는 모듈이며, beautifulsoup 모듈은 
requests를 통해 받은 소스코드를 원하는 데이터들을 추출할 수 있도록 
정리해주는 모듈입니다.

현재까지는 로스트아크 홈페이지에 닉네임을 검색하면 그 닉네임을 가진 
캐릭터의 정보를 추출해 정리한 뒤 .txt 파일에 저장하는 프로그램까지 구
현이 완료되었습니다.
