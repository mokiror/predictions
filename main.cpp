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
		printf("да");
	}

	void SecondOne() {
		printf("нет");
	}

private:

};

class Approving : public Answer {
public:

	void FirstOne() {
		printf("вполне");
	}

	void SecondOne() {
		printf("скорее всего");
	}

private:

};

class Skeptical : public Answer {
public:

	void FirstOne() {
		printf("хорошо подумайте");
	}

	void SecondOne() {
		printf("вр€д ли");
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

				//записывает ответы в файл
				std::string path = "myHistory.txt";
				std::ofstream fileOut;

				fileOut.open(path, std::ofstream::app);

				if (!fileOut.is_open()) {
					std::cout << "ERROR" << std::endl;
				}
				else {
					fileOut << "\n" << "да" << "\n";
				}
				fileOut.close();
			}
			else if (numm2 == 2) {
				obj.SecondOne();

				//записывает ответы в файл
				std::string path = "myHistory.txt";
				std::ofstream fileOut;

				fileOut.open(path, std::ofstream::app);

				if (!fileOut.is_open()) {
					std::cout << "ERROR" << std::endl;
				}
				else {
					fileOut << "\n" << "нет" << "\n";
				}
				fileOut.close();
			}
		}
		else if (numm == 2) {
			Approving obj2;
			numm2 = rand() % 2 + 1;
			if (numm2 == 1) {
				obj2.FirstOne();

				//записывает ответы в файл
				std::string path = "myHistory.txt";
				std::ofstream fileOut;

				fileOut.open(path, std::ofstream::app);

				if (!fileOut.is_open()) {
					std::cout << "ERROR" << std::endl;
				}
				else {
					fileOut << "\n" << "вполне" << "\n";
				}
				fileOut.close();
			}
			else if (numm2 == 2) {
				obj2.SecondOne();

				//записывает ответы в файл
				std::string path = "myHistory.txt";
				std::ofstream fileOut;

				fileOut.open(path, std::ofstream::app);

				if (!fileOut.is_open()) {
					std::cout << "ERROR" << std::endl;
				}
				else {
					fileOut << "\n" << "скорее всего" << "\n";
				}
				fileOut.close();
			}
		}
		else if (numm == 3) {
			Skeptical obj3;
			numm2 = rand() % 2 + 1;
			if (numm2 == 1) {
				obj3.FirstOne();

				//записывает ответы в файл
				std::string path = "myHistory.txt";
				std::ofstream fileOut;

				fileOut.open(path, std::ofstream::app);

				if (!fileOut.is_open()) {
					std::cout << "ERROR" << std::endl;
				}
				else {
					fileOut << "\n" << "хорошо подумайте" << "\n";
				}
				fileOut.close();
			}
			else if (numm2 == 2) {
				obj3.SecondOne();

				//записывает ответы в файл
				std::string path = "myHistory.txt";
				std::ofstream fileOut;

				fileOut.open(path, std::ofstream::app);

				if (!fileOut.is_open()) {
					std::cout << "ERROR" << std::endl;
				}
				else {
					fileOut << "\n" << "вр€д ли" << "\n";
				}
				fileOut.close();
			}
		}
		else {
			printf("вы ввели что-то не то");
		}
	}

	void History() {


	}

private:
	
};

void Console() {

	std::string putTheAnswer;

	std::cout << "¬ведите интересующий вас вопрос: "; 
	getline(std::cin, putTheAnswer);

	MagicSphere obj;
	obj.ForAnswer(3, 1);

	//записывает ответы в файл
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