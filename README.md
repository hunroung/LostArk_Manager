# LostArk_Manager v1.0.0

<p align="center"><img src="https://user-images.githubusercontent.com/56543424/203941541-81c18c18-4022-4169-bcf5-90e41b085025.png" width="50%" height="50%"></p>
<div>
<p align="center"><img src="https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white"/>
<img src="https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=Python&logoColor=white"></p>
</div>

## 프로젝트 목적

1. `LOST ARK`를 보다 더 즐겁게!
   * 로스트아크를 처음 시작한 유저라면 스토리를 따라가며 어느정도 플레이가 가능하지만 그 중에서도 제일 어려워하는것이 보스 패턴,
각인 정보 이 두가지라고 생각합니다. 저희는 랭커분들의 각인 정보를 불러와 현재 각인 트랜드 등을 파악하고 묻지도 따지지도 않고 각인을
세팅할 수 있도록 정보를 제공합니다.

   * 군단장 패턴, 가디언 패턴 등 몬스터에 대한 정보를 제공합니다. 이를 통해 패턴을 공부할 때 인터넷을 뒤져가며 공부할 필요 없이
저희 프로그램을 통해서 충분히 파훼할 수 있도록 노력하였습니다.


2. 구현파일, 라이브러리 제공
   * 저희의 아이디어보다 훨씬 좋은 아이디어를 갖고 있지만, 구현을 어려워 하는 분들을 위해 미약하지만 주요 코드들을 편하게 사용하실 수
있게 구현하였습니다. 이제는 데이터를 모을 생각보다 데이터를 어떻게 활용할지만 고민하시는게 어떨까요?


3. 출력 플랫폼 사용
   * 저희가 만든 기능들을 최대한 class 단위로 묶고 windows form에서 최대한 추가 구현을 피하였습니다.

   * 이를 통해 기능들을 필요에 따라 추가, 제거에 원할하도록 하였습니다.
   
## 디렉토리 설명

1. `0_basic_information`

   * 제작한 구현 파일과, 헤더파일, 수집한 데이터 자료 등이 모여있는 디렉토리입니다.
   
   * 해당 자료들에 대한 자세한 설명은 구현 설명란에서 확인 가능합니다.

2. `LOSTARK_MANAGER`
   * 완성된 로스트아크 매니저를 32bit, 64bit 버전의 exe로 배포하였습니다.
   
3. `LostArk_M`
   * 기능 구현 파일, 헤더파일, 수집한 데이터 등을 windows form을 통해 출력하였습니다.
   * Lostark_manager 프로그램의 소스코드입니다.
   * `0_basic_information` 디렉토리는 저희가 사용한 기능들을 따로 활용하고자 하는 분들을 위해 모아둔 파일입니다. 소스코드가 궁금하신
분들은 `LostArk_M` 파일의 소스코드를 확인해 주시기 바랍니다.
   * 자세한 구현 설명이 필요하신 분들은 구현 설명란에서 확인 가능합니다.
   
# 사용 설명
<p align="center"><img src="https://user-images.githubusercontent.com/56543424/203975007-6ad398cf-7c4e-4565-b0cd-b8ff1fc01503.png" width="100%" height="100%"></p>
<p align="center"><img src="https://user-images.githubusercontent.com/56543424/203975017-b94ddef1-787e-4870-9d53-eb09d0c40c77.png" width="100%" height="100%"></p>







# 구현 설명

## 파이썬을 사용한 스크랩 프로그램 `character_info_scriper.py`
### 사용한 모듈
1. `request` : 스크랩 할 정보가 있는 홈페이지의 주소를 통해 그 홈페이지의 HTML 문서 내용을 받아오는 모듈입니다.
2. `beautifulsoup` : HTML 문서의 내용에서 정보를 추출하기 쉽도록 HTML 문서를 탐색해주는 모듈입니다.
3. `os` : 추출한 정보를 .txt 형태의 파일로 저장하기 위해 필요한 기능을 가지고 있는 모듈입니다.
### 코드 구현
1. request 모듈을 통해 캐릭터 정보가 있는 홈페이지의 HTML 문서 내용을 받고 이 HTML 문서 내용을 beautifuosoup을 통해 탐색하기 쉬운 형태로 변환합니다.

	```python
	url = '홈페이지주소'
	r = requests.get(url)
	https = r.text
	soup = BeautifulSoup(https, "html.parser")
	```

2. beautifulsoup 모듈을 통해 받은 HTML 문서에서 원하는 정보를 추출합니다.

	```python
	#ex)
	soup.select('.profile-character-count em')[0].text # 보유하고있는 캐릭터 수
	```

3. os 모듈의 open 함수를 통해 파일을 생성하고 캐릭터 정보를 그 파일에 저장합니다.

	```python
	txtfile_url = "./저장할파일명"
	f = open(txtfile_url, 'w')
	f.write(soup.select('.profile-character-count em')[0].text)
	f.close()```
	
#### 파생된 프로그램 - `gackin_info_scriper.py`
#### 기여자 `광운대학교 양경원`

## 레이드 경매 입찰가 계산 기능 `RaidCalHeader.h`
### 코드 구현
1. 물품 가격, 레이드 인원 및 선택 사항으로 최소 이득금을 입력 받고 계산 진행

    ```C++
    void AllCal() {
    commission = price * 0.05; //수수료

    equal_price = Equal_distribution(price, num); //동일 분배 입찰가
    equal_distribution = equal_price / (num - 1); //동일 분배금

    benefit_price = Benefit_distribution(price, num); //선 입찰가
    benefit = (price * 0.95 - benefit_price) - benefit_price/(num-1);

    max_price = Min_benefit(price, num, min_benefit); //최소 이득 입찰가
    }
    ```
    
2. 각 계산별 함수 구현

    ```C++
    double Equal_distribution(double price, int num)
		  {
			  double bid_price;
			  bid_price = price * 0.95 * (num - 1) / num;
			  return bid_price;
		  }

		  //선 입찰 (상대방 입찰 시 동일 분배가 되는 가격)
		double Benefit_distribution(double price, int num)
		{

			double bid_price;
			bid_price = price * 0.95 * (num - 1) / (num * 1.1);

			return bid_price;
		}

		//최소 이득 계산
		double Min_benefit(double price, int num, int benefit)
		{
			double bid_price;
			bid_price = (price * 0.95 - benefit) * (num - 1) / num;

			return bid_price;
		}
    ```
    
#### 기여자 `광운대학교 장시원`
## 시뮬레이션 `CardSimulHeader.h`  `card_simulator.cpp`
### 코드 구현
1. `RockHeader.h` 어빌리티 스톤 세공 시뮬레이터로 성공, 실패 시마다 10%의 확률 변동이 일어난다.

    ```C++
    Rocksimulator() {
			srand((unsigned int)time(NULL));
		}
		int rock_simul() {
			int num = rand() % 100;
			if (num < p) {
				if (p != 25)
					p -= 10;
				return 1;
			}
			else {
				if (p != 75)
					p += 10;
				return 2;
			}
		}
    ```

2. `CardSimulHeader.h` 카드 시뮬레이터로 카드 팩 별로 정해진 확률에 따라 카드를 반환한다.

    ```C++
    void legend_hero() //전설 ~ 영웅 카드 팩
		{
			result = "";

			int num = rand() % 10;
			if (num < 2) {
				result = legend;
				legend_count++;
			}
			else {
				result = hero;
				hero_count++;
			}
		}
		void legend_rare() //전설 ~ 희귀 카드 팩
		{
			int num = rand() % 100;
			if (num < 4) {
				result = legend;
				legend_count++;
			}
			else if (num >= 4 && num < 20) {
				result = hero;
				hero_count++;
			}
			else {
				result = rare;
				rare_count++;
			}
		}
    ...
    ```
#### 기여자 `광운대학교 장시원`
  

## 캐릭터 프로필, 각인 `Gackin.cpp`  `Gackin.h`
### 코드 구현
1. 캐릭터 정보 생성시 캐릭터 이름을 전달받는다. 이 때 해당 캐릭터 정보 파일이 없으면 스크래핑 해온다.

	```C++
	void mkfile(char* name) {
    	char path[50] = ".\\character_info_scriper.exe ";
    	strcat_s(path, name);
    	std::system(path);
	}
	```
2. 파일이 존재할 경우( 혹은 1. 이후 ) txt 파일 양식에 맞춰 정보를 받아온다.

	```C++
	....
	 if (oneC[0] == '@')   // @으로 시작할 경우 서버 이름
        {

            for (int i = 0; i < MAX_JOB_LENGTH; i++)
            {
                server[servercount][i] = oneC[i];
            }
            servercount++;


        }
        else                   // 아닐 경우 캐릭터 이름
        {
            for (int i = 0; i < MAX_NAME_LENGTH; i++)
            {
                name[chcount][i] = oneC[i];
            }
            server_char_count[servercount]++;
            chcount++;

        }
	....
	```
3. 캐릭터 프로필 양식 `Gackin.h`

	```C++
	....
	private:
        char job[MAX_JOB_LENGTH];                      //직업
        int total_char_count;                          //캐릭터 수
        char server[MAX_SERVER_COUNT][MAX_JOB_LENGTH]; //서버 이름
        int server_char_count[MAX_CHAR_LENGTH] = { 0 };//서버 캐릭터 수
        char name[MAX_CHAR_LENGTH][MAX_NAME_LENGTH];   //이름
        char main_char[MAX_NAME_LENGTH];               //메인 캐릭터
        char itemlevel[MAX_ITEM_LENGTH];               //아이템레벨
        int damage;                                    //공격력
        int hp;                                        //생명력
        int critical;                                  //치명
        int specialization;                            //특화
        int swiftness;                                 //신속
        int domination;                                //제압
        int endurance;                                 //인내
        int expertise;                                 //숙련
        char level[MAX_NAME_LENGTH];                   //레벨
        char gackin_name[8][MAX_NAME_LENGTH];          //각인정보
        int gackin_count = 0;                          //각인 갯수
        int servercount = 0;                           //서버 갯수
        int errorcode = 0;			       //에러 flag
	....
	```
	
	
