/*
주소록 만들기 프로젝트(Class AddressBook)
1. 이름
2. 이메일
3. 전화번호
4. 팩스번호
5. 메모(최소 500자)
6. 생년월일 검색 시(#include <ctime>) 현재 생일이라면 "Happy Birthday"
7. 기념일  검색 시(#include <ctime>) D-XX

-------------------------------------------------
1. 주소록 입력하기
2. 검색 ---> 검색방법 < 1.이름 2. 전화번호 >
            검색했을 때,
            생일이면 --> 생일 축하해요.
            기념일이면 --> 알림 / 아니면 D- XX
            이름, 이메일, 전화번호, 팩스번호, 메모 다 보여줌
*/
#include <iostream>
#include <ctime>
#include "AddressBook.h"

int main()
{
    uint32_t i{ 0U };
    uint32_t index{ 0U };
    uint32_t selction_menu{ 0U };
    std::string _name{ "" };
    std::string _phone{ "" };
    AddressBook address;
    AddressBook* addressbook{ new AddressBook[999] };	// 동적 할당
  

    time_t now = time(NULL);
    struct tm date;

    localtime_s(&date, &now);
    std::cout << " 현재 날짜 : " << date.tm_year + 1900 << "년 "<< date.tm_mon+1 << "월 " << date.tm_mday << "일 " << std::endl;
    
    while (selction_menu != 4)
    {
        address.selectionMenu(selction_menu);       // 메뉴화면 호출
        std::cin >> selction_menu;                  // 메뉴 선택
        std::cout << std::endl << std::endl;

        switch (selction_menu)
        {
        case 1: // 주소록 생성
           addressbook[i].insertAddressBook();
           i++;
            break;
        case 2: // 주소록 삭제
            std::cout << " 주소록을 삭제합니다. " << std::endl;
            std::cout << " 삭제할 주소록의 이름과 전화번호를 입력하세요 ___ " << std::endl << std::endl;
            std::cout << "이름 :   ";
            std::cin >> _name;

            std::cout << "전화번호 :   ";
            std::cin >> _phone;

            std::cout << std::endl << std::endl;

            for (i = 0; i < 999; i++)
            {
                // 입력받은 값이 저장된 값과 같으면
                if (addressbook[i].getName() == _name && addressbook[i].getPhone() == _phone)
                {
                    std::cout << i + 1 << "번째 주소록 정보를 삭제합니다." << std::endl;

                    // 입력받은 값이 저장된 주소록 배열 초기화
                    addressbook[i].setName("deleted");
                    addressbook[i].setEmail("deleted");
                    addressbook[i].setPhone("deleted");
                    addressbook[i].setFaxNum("deleted");
                    addressbook[i].setMemo("deleted");
                    addressbook[i].setBitrhDay("deleted");
                    addressbook[i].setAnniversary("deleted");

                    std::cout << "삭제했습니다" << std::endl;
                    break;
                }
            }
            if (i == 999)
            {
                std::cout << "정보와 일치하는 주소록이 없습니다. 상위 메뉴로 이동합니다 " << std::endl << std::endl;
                break;
            }
            break;

        case 3: // 주소록 검색
            std::cout << " 주소록을 검색합니다. " << std::endl;
            std::cout << " 검색할 주소록의 이름과 전화번호를 입력하세요 ___ " << std::endl << std::endl;

            std::cout << "이름 :   ";
            std::cin >> _name;
            std::cout << "전화번호 :   ";
            std::cin >> _phone;
           
            std::cout << std::endl << std::endl;

           for ( i = 0; i < 999; i++)
            {
               // 입력받은 값이 저장된 값과 같으면
              if (addressbook[i].getName() == _name && addressbook[i].getPhone() == _phone)
                {
                    std::cout << i+1 << "번째 주소록 정보와 입력한 정보가 일치합니다." << std::endl;

                    addressbook[i].showAddressBook();   // 검색한 주소록 정보 보여주는 메서드 호출
                    break;
                }
            }
                if(i == 999)
                {
                    std::cout << "입력한 정보와 일치하는 주소록이 없습니다. 상위 메뉴로 이동합니다 " << std::endl << std::endl;
                    break;
                }
                break;

        case 4: // 주소록 종료
            std::cout << " *** 프로그램을 종료합니다. *** " << std::endl;
            goto EXIT;
            break;
        }
    }
    
    EXIT:
    delete[] addressbook;
    return 0;
}
