#pragma once
#include"list.h"
#include<vector>
#include<string>
#include<iostream>


enum class states {
	letter,
	number,
	letter_number_mult,
	letter_degree_mult,
	number_letter,
	number_dot_letter,
	number_letter_after_coef,
	number_in_coef,
	number_letter_minus,

	ERROR
};


class Monom {
	friend class Polynom;
	std::vector<int> degree;
	double coef;
	bool correctness;

	const std::string Monom::using_alphabet = "xyz";
	const std::string Monom::using_symb_for_degree = "^";
	const std::string Monom::using_symb_for_multiplie = "*";
	const std::string Monom::using_separator = ".";
	const std::string Monom::using_nums = "0123456789";
	const std::string Monom::using_operators = "+-*^";
	
	int findIndex(char elem, std::string str) {
		int index = 0;
		for (index; index < str.size(); index++) {
			if (elem == str[index]) return index;
		}
		return -1;

	}

	bool in(char symb, std::string alph) {
		for (int i = 0; i < alph.size(); i++) {
			if (symb == alph[i]) return true;
		}
		return false;
	}

	void cut(std::string str) {
		coef = 0;
		char cur_symb, next_symb;
		std::string lexem;
		int i = 0;

		//get coef -- start
		while (i < str.size() && in(str[i], using_alphabet) == false) {
			lexem += str[i];
			i++;
		}
		if (lexem.size() == 0) coef = 1;
		else if (lexem == "-") coef = -1;
		else coef = std::stod(lexem);
		lexem = "";
		//get coef -- end
		

		bool degree_symb_founded=false;
		std::string cur_degree;
		for (i; i < str.size(); i++) {
			cur_symb = str[i];
			next_symb = str[(str.size()==(i-1)?i:(i+1))];
			if (in(cur_symb, using_symb_for_degree)) {
				degree_symb_founded = true;
				continue;
			}

			if (degree_symb_founded)
				cur_degree += cur_symb;
			else 
				lexem += cur_symb;

			
			if (in(next_symb, using_alphabet)||i==str.size()-1) {
				if(degree_symb_founded)
				degree[findIndex(lexem[0],using_alphabet)] += std::stod(cur_degree);
				else
				{
					degree[findIndex(lexem[0], using_alphabet)]+=1;
				}
				lexem = "";
				cur_degree = "";
				degree_symb_founded = false;
			}
		}
	
	};
	bool isCorrect( const std::string& str) {
		char cur_symb=NULL;
		enum class states a=states::number_letter_minus;
		for (int i = 0; i < str.size(); i++) {
			cur_symb = str[i];
			switch (a) {
			case(states::number_letter_minus):
				if (in(cur_symb, using_nums)) {
					a = states::number_dot_letter;
				}
				else if (in(cur_symb, using_alphabet)) {
					a = states::letter_degree_mult;
				}
				else if (cur_symb=='-') {
					a = states::number_letter;
				}
				else {
					a = states::ERROR;
				}
				break;
			case(states::number_letter):
				if (in(cur_symb, using_nums)) {
					a = states::number_dot_letter;
				}
				else if (in(cur_symb, using_alphabet)) {
					a = states::letter_degree_mult;
				}
				else {
					a = states::ERROR;
				}
				break;
			case(states::number_dot_letter):
				if (in(cur_symb, using_nums)) {
					a = a;
				}
				else if (in(cur_symb, using_separator)) {
					a = states::number_in_coef;
				}
				else if (in(cur_symb, using_alphabet)) {
					a = states::letter_degree_mult;
				}
				else {
					a = states::ERROR;
				}
				break;
			case(states::number_in_coef) :
				if (in(cur_symb, using_nums)) {
					a = states::number_letter_after_coef;
				}
				else {
					a = states::ERROR;
				}
				break;
			case(states::number_letter_after_coef):
				if (in(cur_symb, using_nums)) {
					a = a;
				}
				else if (in(cur_symb, using_alphabet)) {
					a = states::letter_degree_mult;
				}
				else {
					a = states::ERROR;
				}
				break;
			case(states::letter_degree_mult):
				if (in(cur_symb, using_alphabet)) {
					a = a;
				}
				else if (in(cur_symb,using_symb_for_degree)) {
					a = states::number;
				}
				else if (in(cur_symb,using_symb_for_multiplie)) {
					a = states::letter;
				}
				else {
					a = states::ERROR;
				}
				break;
			case(states::number):
				if (in(cur_symb, using_nums)) {
					a = states::letter_number_mult;
				}
				else {
					a = states::ERROR;
				}

				break;
			case(states::letter_number_mult):
				if (in(cur_symb,using_nums)) {
					a=a;
				}
				else if (in(cur_symb, using_alphabet)) {
					a = states::letter_degree_mult;
				}
				else if (in(cur_symb,using_symb_for_multiplie)) {
					a = states::letter;
				}
				else { 
					a = states::ERROR;
				}
				break;
			case(states::letter):
				if (in(cur_symb, using_alphabet)) {
					a = states::letter_degree_mult;
				}
				else {
					a = states::ERROR;
				}
				break;
			case(states::ERROR):
				return false;
				break;

			}
		}
		if (a == states::ERROR || !(in(cur_symb,using_alphabet)||in(cur_symb,using_nums)))
			return false;
		return true;
	};

public:
	

	Monom() {
		degree.resize(using_alphabet.size(),0);
		coef = 0;
		correctness = true;
	};
	Monom(const Monom& m) = default;
	Monom(std::string str) {
		degree.resize(using_alphabet.size(), 0);
		coef = 0;
		correctness = isCorrect(str);
		//if (correctness == false) throw "Wrong monom";
		if (correctness)
			cut(str);
	};


	double calculate(std::vector<double> vect) {
		if (vect.size() != degree.size()) throw "Sizes are not equal";
		double result =coef;
		for (int i = 0; i < vect.size(); i++) {
			for (int j = 0; j < degree[i]; j++) {
				result *= vect[i];
			}
		}
		return result;
	};
	bool isSimilar(const Monom& m) {
		for (int i = 0; i < degree.size(); i++) {
			if (degree[i] != m.degree[i])return false;
		}
		return true;
	};

	Monom& operator=(const Monom& m) {
		correctness = m.correctness;
		degree = m.degree;
		coef = m.coef;

		return *this;
	};
	Monom& operator*=(const Monom& m) {
		coef *= m.coef;
		for (int i = 0; i < degree.size(); i++) {
			degree[i] += m.degree[i];
		}
		return *this;
	};
	Monom operator*(const Monom& m) {
		Monom tmp(*this);
		tmp *= m;
		return tmp;
	};

	Monom& operator*=(double m) {
		coef *= m;
	};
	Monom operator*(double m){
		Monom tmp(*this);
		tmp.coef *= m;
		return tmp;
		};
	
	Monom derivative(char var) {
		if (!in(var, using_alphabet)) throw "Uncorrect letter";
		Monom m(*this);
		int index = findIndex(var,using_alphabet);
		m.coef *= m.degree[index];
		m.degree[index]=(m.degree[index]<0)?0:(m.degree[index]-1);
		return m;
	}
	Monom integral(char var) {
		if (!in(var, using_alphabet)) throw "Uncorrect letter";
		Monom m(*this);
		if (coef == 0) return m;
		int index = findIndex(var, using_alphabet);
		
		m.degree[index] += 1;
		m.coef /= (m.degree[index]);
		return m;
	}

	const bool operator==(const Monom& m) noexcept {
		if (coef != m.coef) return false;
		return isSimilar(m);
	};
	const bool operator!=(const Monom& m) noexcept {
		return !operator==(m);
	};
	const bool operator<=(const Monom& m) noexcept {
		if (isSimilar(m) && coef <= m.coef) return 1;
		else if (isSimilar(m) && coef > m.coef) return 0;
		
		int degsum1=0, degsum2=0;
		for (int i = 0; i < degree.size(); i++) {
			degsum1 += degree[i];
			degsum2 += m.degree[i];
		}
		
		if (degsum1 < degsum2)return 1;
		else if (degsum1 > degsum2) return 0;

		for (int i = 0; i < degree.size(); i++) {
			if (degree[i] > m.degree[i]) return 0;
		}

		return 1;
	};
	const bool operator>=(const Monom& m) noexcept {
		return !(operator<(m));
	};
	const bool operator<(const Monom& m) noexcept {
		return (operator!=(m) && operator<=(m));
	};
	const  bool operator>(const Monom& m) noexcept {
		return (operator!=(m) && operator>=(m));
	};
	

	friend std::istream& operator>>(std::istream& istream, Monom& m) {
		std::string str;
		istream >> str;
		m = Monom(str);
		return istream;
	};
	friend std::ostream& operator<<(std::ostream& ostream, Monom& m) {
		if (m.coef == 0)return ostream << m.coef;
		if (m.coef != 1)
			ostream << m.coef;
		for (int i = 0; i < m.using_alphabet.size(); i++) {
			if (m.degree[i] > 1)
				ostream << m.using_alphabet[i] << "^" << m.degree[i];
			else if (m.degree[i] == 1)
				ostream << m.using_alphabet[i];
		}
		return ostream;
	};

	double getCoef() { return coef; }
	std::vector<int> getDegrees() { return degree; };
	bool getCorrectness() { return correctness; }
};


