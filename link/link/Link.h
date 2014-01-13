#pragma once
#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

class Link
{
	int number;
	Link *link;
public:
	Link();
	~Link();
	

	unsigned int GetNumber(){ return number; };// возвращает длину массива
	bool findLink(const Link&);//поиск элемента

	void Push(int value);//добавление элемента в конец
	void Shift(int value);//(добавление элемента в начало 

	void Pop();// удаление  последний
	void Unshift();// удаление первого элемента
	bool Remove(int index);//удаление элемента из массива по указанному индексу
	bool Remove(Link &);//удаление элемента из массива 

	void Insert(int index, int value);// вставка 
	void Clear();//очистка массива
	void Reverse();

	void Shuffle();// (случайное перемешивание элементов массива)
	void Sort();//сортировка массива
	void Print()const;

	const Link* GetElem(int index)const;
	void SetElem(int, Link*);
	
	void Sort();//организовать not work 
	bool findLink();

	bool operator==(Link &l)const;
	Link& operator[](unsigned int index)const;
	friend std::ostream &operator<<(std::ostream&, Link&);
};