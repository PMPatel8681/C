//--------------------------------------------------------------------
//
//  Project 1                                               simpList.h
//
//  Class declarations for a circular, simple (sorted) linked list.
//
//  Put your implementation into this file.
//
//  Use the "print()" method as a template for writing your
//  functions.
//
//  This is the only file that you will submit!
//
//--------------------------------------------------------------------

using namespace std;

template < typename T >   // Forward declaration of the SimpList class
class SimpList;

//--------------------------------------------------------------------
//
// Definition of class Node<T>
//
//--------------------------------------------------------------------

template < typename T >
class Node                 // Node class for the SimpList class
{
  private:

    // Constructors

    Node () { next = this; }  // default constructor

    // Complete the definition inline

    Node ( const T &initItem, Node<T> *ptr ) 
	{
		item = initItem;
		next = ptr;
	}

    // Data members

    T           item;   // Node data item
    Node        *next;  // Pointer to the next node

  friend class SimpList<T>;
};

//--------------------------------------------------------------------
//
// Definition of class SimpList<T>
//
//--------------------------------------------------------------------

template < typename T >
class SimpList
{
  public:

    // Constructor (add your code inline)

    SimpList ()
    {
      head = &PHONY;
	  length = 0; //8888888888888

      // complete the data member intialization
    }

    // Destructor (add your code inline)

    ~SimpList () { }

    // List manipulation operations

    void insert ( const T &newitem );   // insert a data item

    bool remove ( T &item );            // remove data item

    bool find ( T &Sitem ) const;        // find data item

    void clear ();                      // empty the list

    // (add your code inline)
    bool isEmpty () const { }

    // length accessor method (add your code inline)
    int size () const { }

    // print the list items
    void print () const;

  private: // data members

    Node<T> PHONY;      // empty node that anchors the list

    Node<T> *head;      // pointer to the beginning of the list

    int length;         // length of list
};

//--------------------------------------------------------------------
//
// Implementation section
//
//--------------------------------------------------------------------

template < typename T >
void SimpList<T>::print() const
{
  if (length == 0)
  {
    cout << "List is empty." << endl;
    return;
  }

  Node<T> *ptr = head->next;
  while (ptr != head)
  {
    cout << ptr->item << "  ";
    ptr = ptr->next;
  }
  cout << endl;
}

void SimpList<int>::insert(const int &newItem)
{
	Node<int> *ptr = new Node<int>(newItem, head->next);
	head->next = ptr;
	length++;
}

void SimpList<int>::clear()
{
	while (head->next != head)
	{
		Node<int> *place_Holder_Ptr = head->next;
		head->next = place_Holder_Ptr->next;
		delete place_Holder_Ptr;
	}

	length = 0;
}


int SimpList<int>::size() const
{
	return length;
}

bool SimpList<int>::isEmpty() const
{
	return (length == 0);
}

bool SimpList<int>::find(int &Sitem) const
{
	Node<int> *ptr = head;

	while (head->next != head)
	{
		if (ptr->item == Sitem) { return true; }
		ptr = ptr->next;

		return false;
	} 
}

bool SimpList<int>::remove(int &item)
{
	Node<int> *pPre = NULL;
	Node<int> *pCurr = NULL;

	if (head->item == item)
	{
		pCurr = head;
		head = pCurr->next;
		delete pCurr;
		length--;
		return true;
	}

	pPre = head;
	pCurr = head->next;

	while (head->next != head)
	{
		if (pCurr->item == item) 
		{
			pPre->next = pCurr->next;
			delete pCurr;
			length--;
			return true;
		}

		return false;
	}

	pPre = pCurr;
	pCurr = pCurr->next;

}