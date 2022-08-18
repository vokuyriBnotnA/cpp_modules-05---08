#include "Span.hpp"

Span::Span(unsigned int i) : N(i), num(0) {this->tm = new int[i];}
Span::~Span(){delete this->tm;}

void Span::addNumber(int i){
	if (this->num > this->N)
		throw(std::out_of_range("Error"));
	this->tm[this->num] = i;
	this->num++;
}

int Span::shortestSpan(){
	int min = INT_MAX;
	for(unsigned int i = 0; i < this->N; i++){
		for(unsigned int c = i + 1; c < this->N; c++){
			if (abs(this->tm[i] - this->tm[c]) < min)
				min = abs(this->tm[i] - this->tm[c]);
		}
	}
	return min;
}

int Span::longestSpan(){
	if (this->N <= 1)
		throw(std::length_error("Span is too short"));
	int max = 0;
	for(unsigned int i = 0; i < this->N; i++){
		for(unsigned int c = i + 1; c < this->N; c++){
			if (abs(this->tm[i] - this->tm[c]) > max)
				max = abs(this->tm[i] - this->tm[c]);
		}
	}
	return max;
}