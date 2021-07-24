#include "AddressBook.h"
#include <string>
#include <iostream>
#include <ctime>
AddressBook::AddressBook()		// 디폴트 생성자
{

	this->name = std::string("");
	this->email = std::string("");
	this->phone = std::string("");
	this->faxNum = std::string("");
	this->memo = std::string("");
	this->birthDay = std::string("");
	this->anniversary = std::string("");
	this->index = uint32_t{ 0U };
	
}

// 이름
std::string AddressBook::getName() const
{
	return this->name;
}
void AddressBook::setName(std::string name)
{
	this->name = name;
}

// 이메일
std::string AddressBook::getEmail() const
{
	return this->email;
}
void AddressBook::setEmail(std::string email)
{
	this->email = email;
}

// 전화번호
std::string AddressBook::getPhone() const
{
	return this->phone;
}
void AddressBook::setPhone(std::string phone)
{
	this->phone = phone;
}

// 팩스번호
std::string AddressBook::getFaxNum() const
{
	return this->faxNum;
}
void AddressBook::setFaxNum(std::string faxNum)
{
	this->faxNum = faxNum;
}

// 메모
std::string AddressBook::getMemo() const
{
	return this->memo;
}
void AddressBook::setMemo(std::string memo)
{
	this->memo = memo;
}

// 생년월일
std::string AddressBook::getBitrhDay() const
{
	return this->birthDay;
}
void AddressBook::setBitrhDay(std::string)
{
	this->birthDay = birthDay;
}

// 기념일
std::string AddressBook::getAnniversary() const
{
	return this->anniversary;
}
void AddressBook::setAnniversary(std::string anniversary)
{
	this->anniversary = anniversary;
}

// 메뉴 화면
void AddressBook::selectionMenu(int selectionNum)
{

	std::cout << "-----MENU-----" << std::endl;
	std::cout << "1. 주소록 입력"   << std::endl;
	std::cout << "2. 주소록 삭제"   << std::endl;
	std::cout << "3. 주소록 검색"   << std::endl;
	std::cout << "4. 주소록 종료"   << std::endl;
	std::cout << std::endl;

	std::cout << " 주소록 프로그램입니다." << std::endl << std::endl;
	std::cout << " 원하는 작업의 숫자를 입력 해주세요 -->   ";
}
// 주소록 입력
void AddressBook::insertAddressBook()
{
\
	std::cout << " 주소록을 입력합니다." << std::endl;
	std::cout << " -------------------------------" << std::endl;
	
	//std::cout << index + 1 << "번 주소록 / 남은 주소록 공간 [ " << 999 - (index + 1) << " ]"<< std::endl;
	std::cout << " 1. 이름 : ";
	std::cin >> name;
	this->name = name;

	std::cout << " 2. 이메일 : ";
	std::cin >> email;
	this->email = email;

	std::cout << " 3. 전화번호 : ";
	std::cin >> phone;
	this->phone = phone;

	std::cout << " 4. 팩스번호 : ";
	std::cin >> faxNum;
	this->faxNum = faxNum;

	std::cout << " 5. 메모 : ";
	std::string _memo{ "" };
	std::cin >> memo;
	std::getline(std::cin, this->memo);
	this->memo = memo;

	std::cout << " 6. 생일 : ";
	std::cin >> birthDay;
	this->birthDay = birthDay;

	std::cout << " 7. 기념일 : ";
	std::cin >> anniversary;
	this->anniversary = anniversary;
			
	std::cout << " -------------------------------" << std::endl;
	
}

//삭제
void AddressBook::deleteAddressBook()
{
}

// 검색
void AddressBook::searchAddressBook()
{
}


//주소록 출력
void AddressBook::showAddressBook()
{
	std::cout << "정보를 출력합니다" << std::endl;
	std::cout << "이름 : " << this->getName() << std::endl;
	std::cout << "이메일 : " << this->getEmail() << std::endl;
	std::cout << "전화번호 : " << this->getPhone() << std::endl;
	std::cout << "팩스번호 : " << this->getFaxNum() << std::endl;
	std::cout << "메모 : " << this->getMemo() << std::endl;
	std::cout << "생일 : " << this->getBitrhDay() << std::endl;
	std::cout << "기념일 : " << this->getAnniversary() << std::endl;
	std::cout << " -------------------------------" << std::endl;
	std::cout << std::endl << std::endl;
}
AddressBook::~AddressBook()	// 소멸자
{

}