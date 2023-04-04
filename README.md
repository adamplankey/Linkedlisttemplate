# Linkedlisttemplate

# Overview
This is a generic C++ class template ListCollection which implements a singly linked list that can store elements of any data type.

The class provides a variety of functions to add, remove, and modify elements in the list. It also provides functions to display the list and retrieve the value of a specific element.

# Class Declaration
The class is declared in the ListCollection.h header file, which must be included in any file that uses this class.

The class is implemented using templates, so it can store elements of any data type.

# Class Methods
The ListCollection class provides the following methods:

ListCollection() : Constructor for the ListCollection class. Initializes an empty linked list.

~ListCollection() : Destructor for the ListCollection class. Deletes all nodes in the linked list.

bool isValid(int index) : Determines whether the given index is valid for the current linked list.

void setElement(int index, T value) : Sets the value of an element in the linked list at the given index.

T getElement(int index) : Retrieves the value of an element in the linked list at the given index.

void displayList(bool nl = false) : Displays the linked list.

ListCollection(const ListCollection &obj) : Copy constructor for the ListCollection class.

const ListCollection &operator=(const ListCollection &right) : Overloaded assignment operator for the ListCollection class.

int size() : Returns the current size of the linked list.

int capacity() : Returns the current capacity of the linked list.

void pushFront(T value) : Adds the given element to the beginning of the linked list.

void pushBack(T value) : Adds the given element to the end of the linked list.

T popFront() : Removes and returns the first element in the linked list.

T popBack() : Removes and returns the last element in the linked list.

void insertOrdered(T value) : Inserts the given element into the sorted linked list so that smaller values are before the inserted item.

void removeElement(T value) : Searches for the first occurrence of the given element in the linked list. If one is found, the item is deleted from the linked list.
