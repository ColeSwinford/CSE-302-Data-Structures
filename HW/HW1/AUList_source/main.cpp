#include <iostream>
#include "AUList.h"

int main(int argc, char** argv) {
	AUList TestList;
	AUList* NewList;
	std::cout<<"Newly Created List: ";
	TestList.PrintList();
	for (int i=0; i<10; i++)
	  TestList.PutItem(100-i*10);
	std::cout<<"List after 'PutItem' calls: ";
	TestList.PrintList();
	std::cout << "Mean: ";
	std::cout << TestList.getMean()<< std::endl;
	std::cout << "Population Standard Deviation: ";
	std::cout << TestList.getStdev() << std::endl;
	std::cout << "Duplicate List: ";
	TestList.DuplicateNV(4).PrintList();
	std::cout<<"Length after 'PutItem' calls: " <<TestList.GetLength() <<std::endl;
	std::cout<<"IsFull after 'PutItem' calls? " <<TestList.IsFull() <<std::endl;
	TestList.DeleteItem(50);
	std::cout<<"List after 'DeleteItem' call: ";
	TestList.PrintList();
	std::cout<<"IsFull after 'DeleteItem' call? " <<TestList.IsFull() <<std::endl;
	std::cout<<"Index of value 80: "<<TestList.GetItem(80)<<std::endl;
	std::cout<<"Index of value 25: "<<TestList.GetItem(25)<<std::endl;
	TestList.MakeEmpty();
	std::cout<<"List after 'MakeEmpty': ";
	TestList.PrintList();
	return 0;
}