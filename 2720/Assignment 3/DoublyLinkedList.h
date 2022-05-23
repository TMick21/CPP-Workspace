#ifndef ASSN03_DOUBLYLINKEDLIST_H
#define ASSN03_DOUBLYLINKEDLIST_H

template<class T>
struct NodeType {
    T data;
    NodeType<T> *next;
    NodeType<T> *back;
};

template<class T>
class DoublyLinkedList {
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    void insertItem(T &item);
    void deleteItem(T &item);
    int lengthIs() const;
    void print();
    void printReverse();
    void deleteSubsection(T &lower, T &upper);
    T mode();
    void swapAlternate();

private:
    NodeType<T> *head;
    NodeType<T> *tail;
};


#endif
