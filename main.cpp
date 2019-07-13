#include<iostream>
#include"Node.h"

int main()
{
	// test create list cons()
	Node* p = cons(1, cons(2, nullptr));
	cout << " p is " << endl;
	printList(p);

	p = reverse(p);
	cout << "after reverse p is " << endl;
	printList(p);

	Node* q = cons(5, cons(6, cons(7, nullptr)));
	cout << "q is " << endl;
	printList(q);

	// test searchInOder()
	cout << "search 1 in q" << endl;
	cout << "result is " << searchInOrder(1, q);

	cout << "delete lists " << endl << endl;
	deleteList(p);
	deleteList(q);

	// test hasDuplicates()
	p = cons(1, cons(2, cons(2, cons(3, nullptr))));
	cout << "after create p. p is " << endl;
	printList(p);
	cout << "is there same numbers in p " << hasDuplicates(p) << endl;
		
	q = cons(5, cons(6, cons(7, nullptr)));
	cout << "after create q. q is " << endl;
	printList(q);
	cout << "is there same numbers in q " << hasDuplicates(q) << endl;

	// test search()
	cout << "is q has 1 " << search(1, q) << endl;
	cout << "is q has 5 " << search(5, q) << endl << endl;

	// test append()
	cout << "append 8 to q" << endl;
	append(8, q);
	printList(q);

	// test isLonger()
	cout << endl << "is q longer" << isLonger(q, p) << endl;
	cout << "is p longer" << isLonger(p, q) << endl << endl;

	// test ithNode()
	cout << "i = 2 the note in p is " << car(ithNode(p, 2)) << endl << endl;

	// test mergeTwoOrderedList()
	cout << "merge two lists " << endl;
	cout << "p is " << endl;
	printList(p);
	cout << "q is " << endl;
	printList(q);
	cout << "after merge " << endl;
	Node* k = mergeTwoOrderedLists(p, q);
	printList(k);

	// test array2List()
	cout << endl;
	int arr[3] = { 9, 3, 5 };
	Node* r = array2List(arr, 3);
	cout << "array to list: arr[3] = 9, 3, 5" << endl;
	printList(r);

	// test readList()
	cout << "readList" << endl;
	Node* t = readList();
	printList(t);
	cout << "the length of the list is " << length(t);

	deleteList(k);
	deleteList(r);
	deleteList(t);

	return 0;
}