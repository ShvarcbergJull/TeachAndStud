#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class human
{
public:
	human(string last_name, string name, string second_name)
	{
		this-> last_name = last_name;
		this-> name = name;
		this-> second_name = second_name;
	}

	string get_full_name()
	{
		ostringstream full_name;
		full_name << this->last_name << ' '	<< this->name << ' ' << this->second_name;
		return full_name.str();
	}

private:
	string name;
	string last_name;
	string second_name;
};


class Student : public human
{
public:
	Student(string last_name, string name, string second_name, vector<int>scores) : human(last_name, name, second_name)
	{
		this->scores = scores;
	}

	float get_average_score()
	{
		unsigned int count_scores = this->scores.size();
		unsigned int sum_scores = 0;
		float average_scores;

		for (unsigned int i = 0; i < count_scores; i++)
			sum_scores += this->scores[i];

		average_scores = (float)sum_scores / (float)count_scores;

		return average_scores;
	}

private:
	vector<int> scores;
};

class Teachers : public human
{
public:

	Teachers(string last_name, string name, string second_name, vector<string>subject) : human(last_name, name, second_name)
	{
		this->subject = subject;
	}

	string get_subject()
	{
		ostringstream sub;
		for (int i = 0; i < subject.size(); i++)
		{
			sub << this->subject[i] << endl;
		}

		return sub.str();
	}
  
private:
	vector<string>subject;
};
