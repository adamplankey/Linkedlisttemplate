#include <iostream>
#include "ListCollection.h"
//#include "FeetInches.h"

using namespace std;

void setFeetInches(FeetInches &f, int feet, int inches) {
	f.setFeet(feet);
	f.setInches(inches);
}

int main() {
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Integer Tester" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;

	ListCollection<int> l1;

	cout << l1.size() << "  " << l1.capacity() << endl;

	l1.pushFront(25);
	l1.pushFront(56);
	l1.pushFront(33);

	l1.displayList();
	cout << l1.size() << "  " << l1.capacity() << endl;

	cout << endl;

	l1.pushBack(55);
	l1.pushBack(-4);
	l1.pushBack(12);
	
	l1.displayList();
	cout << l1.size() << "  " << l1.capacity() << endl;

	

	l1.pushBack(1234);
	l1.displayList();
	cout << l1.size() << "  " << l1.capacity() << endl;

	cout << endl;
    cout << l1.popFront() << endl;
	cout << l1.popFront() << endl;
	cout << l1.popFront() << endl;
	cout << l1.popFront() << endl;
	cout << l1.popFront() << endl;
	cout << l1.popFront() << endl;
	cout << l1.popFront() << endl;

	cout << l1.popFront() << endl;

	cout << l1.popFront() << endl;
	cout << l1.popBack() << endl;

	l1.displayList();

	cout << l1.size() << "  " << l1.capacity() << endl;

	cout << l1.getElement(2) << endl;
	l1.displayList();
	cout << l1.size() << "  " << l1.capacity() << endl;

	l1.setElement(2, 40);
	l1.displayList();
	cout << l1.size() << "  " << l1.capacity() << endl;



    ListCollection<int> l11;
	l11.insertOrdred(25);
	l11.insertOrdred(56);
	l11.insertOrdred(33);
	l11.insertOrdred(123);
	l11.insertOrdred(33);
	l11.insertOrdred(12);

	l11.displayList();
	cout << l11.size() << "  " << l11.capacity() << endl;

	cout << endl;

	l11.removeElement(12);
	l11.removeElement(33);


	l11.displayList();
	cout << l11.size() << "  " << l11.capacity() << endl;

/*
    ListCollection<int> l3=l1+l11;
	l3.displayList();
	cout << l3.size() << "  " << l3.capacity() << endl;
*/
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "FeetInches Tester" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;

	ListCollection<FeetInches> FIl1;
	FeetInches f(5, 2);

	cout << FIl1.size() << "  " << FIl1.capacity() << endl;

	FIl1.pushFront(f);
	setFeetInches(f, 3, 3);
	FIl1.pushFront(f);
	setFeetInches(f, 2, 17);
	FIl1.pushFront(f);
	setFeetInches(f, 1, 4);
	FIl1.pushFront(f);

	FIl1.displayList(true);
	cout << FIl1.size() << "  " << FIl1.capacity() << endl;

	cout << endl;

	setFeetInches(f, 55, 2);
	FIl1.pushBack(f);
	setFeetInches(f, 123, 7);
	FIl1.pushBack(f);
	setFeetInches(f, 90, 9);
	FIl1.pushBack(f);


	FIl1.displayList(true);
	cout << FIl1.size() << "  " << FIl1.capacity() << endl;

	
	setFeetInches(f, 1234, 10);
	FIl1.pushBack(f);
	FIl1.displayList(true);
	cout << FIl1.size() << "  " << FIl1.capacity() << endl;

	cout << endl;

	cout << FIl1.popFront() << endl;
	cout << FIl1.popFront() << endl;
	cout << FIl1.popBack() << endl;
	cout << endl;
	FIl1.displayList(true);
	cout << FIl1.size() << "  " << FIl1.capacity() << endl;

	
	cout << FIl1.getElement(2) << endl;
	FIl1.displayList(true);
	cout << FIl1.size() << "  " << FIl1.capacity() << endl;

	setFeetInches(f, 17, 2);
	FIl1.setElement(2, f);
	FIl1.displayList(true);
	cout << FIl1.size() << "  " << FIl1.capacity() << endl;

	cout << endl;

    ListCollection<FeetInches> FIl2;
	setFeetInches(f, 3, 3);
	FIl2.insertOrdred(f);
	setFeetInches(f, 7, 9);
	FIl2.insertOrdred(f);
	setFeetInches(f, 90, 9);
	FIl2.insertOrdred(f);


	FIl2.displayList(true);
	cout << FIl2.size() << "  " << FIl2.capacity() << endl;

	cout << endl;

	setFeetInches(f, 90, 9);
	FIl2.removeElement(f);


	FIl2.displayList(true);
	cout << FIl2.size() << "  " << FIl2.capacity() << endl;

	setFeetInches(f, 3, 3);
	FIl2.removeElement(f);

	FIl2.displayList(true);
	cout << FIl2.size() << "  " << FIl2.capacity() << endl;

	cout << endl;

	return 0;
}
