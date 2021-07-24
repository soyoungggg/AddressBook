#pragma once
#include <iostream>
#include <ctime>

class AddressBook
{
private:
	std::string name;				// 이름
	std::string email;				// 이메일
	std::string phone;				// 전화번호
	std::string faxNum;				// 팩스번호
	std::string memo;				// 메모
	std::string birthDay;			// 생년월일
	std::string anniversary;		// 기념일
	uint32_t index;					// 인덱스
public:
	AddressBook();					// 생성자
	~AddressBook();					// 소멸자

	std::string getName() const;
	void setName(std::string name);

	std::string getEmail() const;
	void setEmail(std::string email);

	std::string getPhone() const;
	void setPhone(std::string phone);

	std::string getFaxNum() const;
	void setFaxNum(std::string faxNum);

	std::string getMemo() const;
	void setMemo(std::string memo);

	std::string getBitrhDay() const;
	void setBitrhDay(std::string);

	std::string getAnniversary() const;
	void setAnniversary(std::string);

	void selectionMenu(int);		// 메뉴 화면 출력 메서드
	void insertAddressBook();		// '주소록 입력' 메서드
	void deleteAddressBook();		// '주소록 삭제' 메서드
	void searchAddressBook();		// '주소록 검색' 메서드
	void showAddressBook();			// 저장된 주소록 출력 메서드
};

