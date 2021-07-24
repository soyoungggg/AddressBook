#pragma once
#include <iostream>
#include <ctime>

class AddressBook
{
private:
	std::string name;				// �̸�
	std::string email;				// �̸���
	std::string phone;				// ��ȭ��ȣ
	std::string faxNum;				// �ѽ���ȣ
	std::string memo;				// �޸�
	std::string birthDay;			// �������
	std::string anniversary;		// �����
	uint32_t index;					// �ε���
public:
	AddressBook();					// ������
	~AddressBook();					// �Ҹ���

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

	void selectionMenu(int);		// �޴� ȭ�� ��� �޼���
	void insertAddressBook();		// '�ּҷ� �Է�' �޼���
	void deleteAddressBook();		// '�ּҷ� ����' �޼���
	void searchAddressBook();		// '�ּҷ� �˻�' �޼���
	void showAddressBook();			// ����� �ּҷ� ��� �޼���
};

