#include <iostream>
#include <string>
#include <vector>
#include "human.h"
#include <locale.h>

using namespace std;

int main()
{
	vector<int> scores;
	setlocale(LC_ALL, "Russian");

	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(2);
	scores.push_back(2);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	Student* stud = new Student("Петров", "Иван", "Алексеевич", scores);

	cout << "Студент: " << stud->get_full_name() << endl;

	cout << "Средний бал: " << stud->get_average_score() << endl;

	vector<string> sub;

	sub.push_back("Математика");
	sub.push_back("Дискретная математика");
	sub.push_back("Информатика");
	sub.push_back("Теория вероятности");

	Teachers* teach = new Teachers("Яблонцева", "Маргарита", "Марковна", sub);

	cout << endl << "Преподователь: " << teach->get_full_name() << endl;
	cout << "Предметы:" << endl << teach->get_subject();

	system("pause");
	return 0;
}
