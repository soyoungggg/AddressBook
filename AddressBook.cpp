#include "AddressBook.h"
#include <string>
#include <iostream>
#include <ctime>
AddressBook::AddressBook()		// ����Ʈ ������
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

// �̸�
std::string AddressBook::getName() const
{
	return this->name;
}
void AddressBook::setName(std::string name)
{
	this->name = name;
}

// �̸���
std::string AddressBook::getEmail() const
{
	return this->email;
}
void AddressBook::setEmail(std::string email)
{
	this->email = email;
}

// ��ȭ��ȣ
std::string AddressBook::getPhone() const
{
	return this->phone;
}
void AddressBook::setPhone(std::string phone)
{
	this->phone = phone;
}

// �ѽ���ȣ
std::string AddressBook::getFaxNum() const
{
	return this->faxNum;
}
void AddressBook::setFaxNum(std::string faxNum)
{
	this->faxNum = faxNum;
}

// �޸�
std::string AddressBook::getMemo() const
{
	return this->memo;
}
void AddressBook::setMemo(std::string memo)
{
	this->memo = memo;
}

// �������
std::string AddressBook::getBitrhDay() const
{
	return this->birthDay;
}
void AddressBook::setBitrhDay(std::string)
{
	this->birthDay = birthDay;
}

// �����
std::string AddressBook::getAnniversary() const
{
	return this->anniversary;
}
void AddressBook::setAnniversary(std::string anniversary)
{
	this->anniversary = anniversary;
}

// �޴� ȭ��
void AddressBook::selectionMenu(int selectionNum)
{

	std::cout << "-----MENU-----" << std::endl;
	std::cout << "1. �ּҷ� �Է�"   << std::endl;
	std::cout << "2. �ּҷ� ����"   << std::endl;
	std::cout << "3. �ּҷ� �˻�"   << std::endl;
	std::cout << "4. �ּҷ� ����"   << std::endl;
	std::cout << std::endl;

	std::cout << " �ּҷ� ���α׷��Դϴ�." << std::endl << std::endl;
	std::cout << " ���ϴ� �۾��� ���ڸ� �Է� ���ּ��� -->   ";
}
// �ּҷ� �Է�
void AddressBook::insertAddressBook()
{
\
	std::cout << " �ּҷ��� �Է��մϴ�." << std::endl;
	std::cout << " -------------------------------" << std::endl;
	
	//std::cout << index + 1 << "�� �ּҷ� / ���� �ּҷ� ���� [ " << 999 - (index + 1) << " ]"<< std::endl;
	std::cout << " 1. �̸� : ";
	std::cin >> name;
	this->name = name;

	std::cout << " 2. �̸��� : ";
	std::cin >> email;
	this->email = email;

	std::cout << " 3. ��ȭ��ȣ : ";
	std::cin >> phone;
	this->phone = phone;

	std::cout << " 4. �ѽ���ȣ : ";
	std::cin >> faxNum;
	this->faxNum = faxNum;

	std::cout << " 5. �޸� : ";
	std::string _memo{ "" };
	std::cin >> memo;
	std::getline(std::cin, this->memo);
	this->memo = memo;

	std::cout << " 6. ���� : ";
	std::cin >> birthDay;
	this->birthDay = birthDay;

	std::cout << " 7. ����� : ";
	std::cin >> anniversary;
	this->anniversary = anniversary;
			
	std::cout << " -------------------------------" << std::endl;
	
}

//����
void AddressBook::deleteAddressBook()
{
}

// �˻�
void AddressBook::searchAddressBook()
{
}


//�ּҷ� ���
void AddressBook::showAddressBook()
{
	std::cout << "������ ����մϴ�" << std::endl;
	std::cout << "�̸� : " << this->getName() << std::endl;
	std::cout << "�̸��� : " << this->getEmail() << std::endl;
	std::cout << "��ȭ��ȣ : " << this->getPhone() << std::endl;
	std::cout << "�ѽ���ȣ : " << this->getFaxNum() << std::endl;
	std::cout << "�޸� : " << this->getMemo() << std::endl;
	std::cout << "���� : " << this->getBitrhDay() << std::endl;
	std::cout << "����� : " << this->getAnniversary() << std::endl;
	std::cout << " -------------------------------" << std::endl;
	std::cout << std::endl << std::endl;
}
AddressBook::~AddressBook()	// �Ҹ���
{

}