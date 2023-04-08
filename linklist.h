#ifndef _linklist_h_
#define _linklist_h_

struct Data {
	int nameNode;
	char* info;
	//any constructors
	~Data();
};

struct Node {
	Node* next;
	static int countNodes;
	Data *data;
	//any constructors
	~Node();
};
class LinkedList {
	private :
		Node* head;
		Node* tail;
	public :
		//any constructors
		~LinkedList();
		/* добавить элемент в конец списка */ 
		void putToEnd(const Data& data);
		/*добавить элемент в начало списка */
		void putToFront(const Data& data);
		/* извлечь элемент из начала списка */
		bool getFromFront(Data& data) const;
		/* извлечь элемент из конца списка */
		bool getFromEnd(Data& data) const;
		/* удалить первый элемент */
		void popFront();
		/* удалить последний элемент */
		void popBack();
		/* удалить N элементов начиная с позиции pos */
		void removeElements(int pos, int N);
		/* извлечь элемент из позиции pos списка*/
		void insertElements(int pos, const Data& data);
		/* записать элементы в файл начиная с головы 
		 * формат: [номер элемента]\t:\t[структура Data]\n
		 */
		void writeToFileFromHead() const;
		/* записать элементы в файл начиная с хвоста 
		 * формат файла: [номер элемента]\t:\t[структура Data]\n
		 * пути решения:
		 *		1. можно создать новый список, в который записать элементы наобором (требуется экстра память)
		 *		2. можно перебирать все элементы с каждым разом уменьшая на 1 перебираемые элементы 
		 */
		void writeToFileFromTail() const;
};

#endif
