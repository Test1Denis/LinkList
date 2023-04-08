#include "linklist.h"

Node::~Node() {}
Data::~Data() {}

LinkedList::~LinkedList() {}


void LinkedList::putToEnd(const Data& data) {}
void LinkedList::putToFront(const Data& data) {}
bool LinkedList::getFromFront(Data& data) const {}
bool LinkedList::getFromEnd(Data& data) const {}
void LinkedList::removeElements(int pos, int count) {}
void LinkedList::insertElements(int pos, const Data& data) {}
void LinkedList::writeToFileFromHead() const {}
void LinkedList::writeToFileFromTail() const {}
void LinkedList::popFront() {}
void LinkedList::popBack() {}
