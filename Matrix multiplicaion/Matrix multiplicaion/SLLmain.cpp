#include <iostream>
#include "LinkedList.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	LinkedList<int> list1;//it will call the constructor of LL and will set head &tail to 0
//	list1.addAfter(100,200);
	
	list1.addToHead(5);//it will execute the if case because list is empty
	list1.addToHead(10);
	list1.addToHead(15);
	list1.addToTail(30);
	// 15 10 5 30
	list1.traversing();
	list1. addBefore(15,12);
	cout<<"result after add before"<<endl;
	list1.traversing();
	cout<<endl<<"result of searching ";
	cout<<list1.searching(35);
	cout<<endl<<"result of searching ";
	cout<<list1.searching(10);
	
	list1.addAfter(100,25);
	//15 10 25 5 30
	cout<<endl<<"after calling addAfter"<<endl;
	list1.traversing();
	cout<<"largest is at location"<<endl;
	cout<<list1.largest()<<endl;
	list1.traversing();
	
	
	cout<<endl<<"Processing character type"<<endl;
	LinkedList<char> list2;
	list2.addToHead('a');
	list2.addToTail('c');
	list2.addAfter('a','b');
	list2.traversing();
	cout<<"Calling remove from head"<<endl;
	//a b c
	cout<<list2.removeFromHead();//a
	cout<<endl;
	list2.traversing();
	//b c
	
	return 0;
}

