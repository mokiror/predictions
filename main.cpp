#include <iostream>
#include <random>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <string>
#include <WINDOWS.H>

class Answer {
public:
	Answer() {};

	std::string answer_;
	int num_;
	int num2_;

	~Answer() {};
};

class Formal : public Answer {
public:

	void FirstOne() {
		printf("��");
	}

	void SecondOne() {
		printf("���");
	}

private:

};

class Approving : public Answer {
public:

	void FirstOne() {
		printf("������");
	}

	void SecondOne() {
		printf("������ �����");
	}

private:

};

class Skeptical : public Answer {
public:

	void FirstOne() {
		printf("������ ���������");
	}

	void SecondOne() {
		printf("���� ��");
	}

private:

};

class MagicSphere : public Answer {
public:
	MagicSphere() {};

	MagicSphere(std::string answerr) {
		answer_ = answerr;
	}; 

	void ForAnswer(int numm, int numm2) {
		num_ = numm;
		num2_ = numm2;
		numm = rand() % 3 + 1;

		if (numm == 1) {
			Formal obj;
			numm2 = rand() % 2 + 1;
			if (numm2 == 1) {
				obj.FirstOne();

				//���������� ������ � ����
				std::string path = "myHistory.txt";
				std::ofstream fileOut;

				fileOut.open(path, std::ofstream::app);

				if (!fileOut.is_open()) {
					std::cout << "ERROR" << std::endl;
				}
				else {
					fileOut << "\n" << "��" << "\n";
				}
				fileOut.close();
			}
			else if (numm2 == 2) {
				obj.SecondOne();

				//���������� ������ � ����
				std::string path = "myHistory.txt";
				std::ofstream fileOut;

				fileOut.open(path, std::ofstream::app);

				if (!fileOut.is_open()) {
					std::cout << "ERROR" << std::endl;
				}
				else {
					fileOut << "\n" << "���" << "\n";
				}
				fileOut.close();
			}
		}
		else if (numm == 2) {
			Approving obj2;
			numm2 = rand() % 2 + 1;
			if (numm2 == 1) {
				obj2.FirstOne();

				//���������� ������ � ����
				std::string path = "myHistory.txt";
				std::ofstream fileOut;

				fileOut.open(path, std::ofstream::app);

				if (!fileOut.is_open()) {
					std::cout << "ERROR" << std::endl;
				}
				else {
					fileOut << "\n" << "������" << "\n";
				}
				fileOut.close();
			}
			else if (numm2 == 2) {
				obj2.SecondOne();

				//���������� ������ � ����
				std::string path = "myHistory.txt";
				std::ofstream fileOut;

				fileOut.open(path, std::ofstream::app);

				if (!fileOut.is_open()) {
					std::cout << "ERROR" << std::endl;
				}
				else {
					fileOut << "\n" << "������ �����" << "\n";
				}
				fileOut.close();
			}
		}
		else if (numm == 3) {
			Skeptical obj3;
			numm2 = rand() % 2 + 1;
			if (numm2 == 1) {
				obj3.FirstOne();

				//���������� ������ � ����
				std::string path = "myHistory.txt";
				std::ofstream fileOut;

				fileOut.open(path, std::ofstream::app);

				if (!fileOut.is_open()) {
					std::cout << "ERROR" << std::endl;
				}
				else {
					fileOut << "\n" << "������ ���������" << "\n";
				}
				fileOut.close();
			}
			else if (numm2 == 2) {
				obj3.SecondOne();

				//���������� ������ � ����
				std::string path = "myHistory.txt";
				std::ofstream fileOut;

				fileOut.open(path, std::ofstream::app);

				if (!fileOut.is_open()) {
					std::cout << "ERROR" << std::endl;
				}
				else {
					fileOut << "\n" << "���� ��" << "\n";
				}
				fileOut.close();
			}
		}
		else {
			printf("�� ����� ���-�� �� ��");
		}
	}

	void History() {


	}

private:
	
};

void Console() {

	std::string putTheAnswer;

	std::cout << "������� ������������ ��� ������: "; 
	getline(std::cin, putTheAnswer);

	MagicSphere obj;
	obj.ForAnswer(3, 1);

	//���������� ������ � ����
	std::string path = "myHistory.txt";
	std::ofstream fileOut;

	fileOut.open(path, std::ofstream::app);

	if (!fileOut.is_open()) {
		std::cout << "ERROR" << std::endl;
	}
	else {
		fileOut << "\n" << putTheAnswer << "\n";
	}
	fileOut.close();

}


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	Console();

	

	return 0;
}