#ifndef LISTCOLLECTION_H
#define LISTCOLLECTION_H
#include "FeetInches.h"
#include <iostream>

template <class T>
class ListCollection
{
private:
    class ListNode
    {
    public:
        T value;
        ListNode *next;
        ListNode(T val, ListNode *nxt = nullptr) : value(val), next(nxt) {}
    };

    ListNode *head;  // Pointer to the head of the linked list.
    int numElements; // Number of elements.

public:
    ListCollection() : head(nullptr), numElements(0) {} // Constructor
    ~ListCollection();                                  // Destructor

    bool isValid(int index);             // Validates subscripts.
    void setElement(int index, T value); // Sets an element to a value
    T getElement(int index);             // Returns an element
    void displayList(bool nl = false);   // Display list

    ListCollection(const ListCollection &obj);                    // Copy constructor
    const ListCollection &operator=(const ListCollection &right); // Overloaded assignment operator

    int size();     // Returns the current size of the list.
    int capacity(); // Returns the current capacity of the list.

    void pushFront(T value);     // Adds the input parameter item to the beginning of the list.
    void pushBack(T value);      // Adds the input parameter item to the end of the list.
    T popFront();                // Removes and returns the first item of the list.
    T popBack();                 // Removes and returns the last item of the list.
    void insertOrdred(T value);  // Inserts the parameter item into the pre-sorted list so that smaller values are before the inserted item.
    void removeElement(T value); // Searches for the first occurrence of the input parameter in the list. If one is found the item is deleted from the list.
};

template <class T>
ListCollection<T>::~ListCollection()
{
    ListNode *current = head;
    while (current != nullptr)
    {
        ListNode *next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
    numElements = 0;
}

template <class T>
bool ListCollection<T>::isValid(int index)
{
    return (index >= 0) && (index < numElements);
}

template <class T>
void ListCollection<T>::setElement(int index, T value)
{
    if (isValid(index))
    {
        ListNode *current = head;
        for (int i = 0; i < index; i++)
        {
            current = current->next;
        }
        current->value = value;
    }
}

template <class T>
T ListCollection<T>::getElement(int index)
{
    if (head == nullptr)
    {
        std::cout << "List is empty\n";
        return 0;
        //exit(1);
    }
    ListNode *current = head;
    for (int i = 0; i < index; i++)
    {
        if (current->next == nullptr)
        {
            break;
        }
        current = current->next;
    }
    return current->value;
}

template <class T>
void ListCollection<T>::displayList(bool newLine)
{
    ListNode *current = head;
    while (current != nullptr)
    {
        std::cout << current->value << " ";
        current = current->next;
        if (newLine)
        {
            std::cout << std::endl;
        }
    }
}

template <class T>
ListCollection<T>::ListCollection(const ListCollection &obj) : head(nullptr), numElements(0)
{
    ListNode *current = obj.head;
    while (current != nullptr)
    {
        pushBack(current->value);
        current = current->next;
    }
}

template <class T>
const ListCollection<T> &ListCollection<T>::operator=(const ListCollection &right)
{
    if (this != &right)
    {
        ListNode *current = right.head;
        while (current != nullptr)
        {
            pushBack(current->value);
            current = current->next;
        }
    }
    return *this;
}

template <class T>
int ListCollection<T>::size()
{
    return numElements;
}

template <class T>
int ListCollection<T>::capacity()
{
    return numElements;
}

template <class T>
void ListCollection<T>::pushFront(T value)
{
    ListNode *newNode = new ListNode(value);
    newNode->next = head;
    head = newNode;
    numElements++;
    
}

template <class T>
void ListCollection<T>::pushBack(T value)
{
    if (head == nullptr)
    {
        head = new ListNode(value);
    }
    else
    {
        ListNode *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = new ListNode(value);
    }
    numElements++;
}

template <class T>
T ListCollection<T>::popFront()
{
    if (head == nullptr)
    {
        std::cout << "List is empty\n";
        return 0;
    }
    ListNode *oldHead = head;
    T value = oldHead->value;
    head = oldHead->next;
    delete oldHead;
    numElements--;
    return value;
}

template <class T>
T ListCollection<T>::popBack()
{
    if (head == nullptr)
    {
        std::cout << "List is empty\n";
        return 0;
    }
    T value;
    if (head->next == nullptr)
    {
        value = head->value;
        delete head;
        head = nullptr;
    }
    else
    {
        ListNode *current = head;
        while (current->next->next != nullptr)
        {
            current = current->next;
        }
        value = current->next->value;
        delete current->next;
        current->next = nullptr;
    }
    numElements--;
    return value;
}

template <class T>
void ListCollection<T>::insertOrdred(T value) {
    ListNode* new_node = new ListNode(value);
    if (head == nullptr || value <= head->value) {
        new_node->next = head;
        head = new_node;
    } else {
        ListNode* current = head;
        while (current->next != nullptr && (*current->next).value <= static_cast<T>(value)) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
    numElements++;
}
bool operator<=(const FeetInches& lhs, const FeetInches& rhs) {
    return lhs.getInches() <= rhs.getInches();
}


template <class T>
void ListCollection<T>::removeElement(T value)
{
    ListNode *current = head;
    ListNode *previous = nullptr;
    while (current != nullptr)
    {
        if (current->value == value)
        {
            if (previous == nullptr)
            {
                head = current->next;
            }
            else
            {
                previous->next = current->next;
            }
            delete current;
            numElements--;
            return;
        }
        previous = current;
        current = current->next;
    }
}
#endif
