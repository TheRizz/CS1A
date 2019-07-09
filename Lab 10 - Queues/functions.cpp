/*************************************************************************
 * AUTHOR         : Michael Collins & Ryan Martinez
 * STUDENT ID     : 1001813 & 389657
 * LAB #10        : Implementing a Queue
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 10/30/15
 *************************************************************************/

#include "header.h"

/*************************************************************************
 * MenuPrompt
 * This function prompts user with queue menu and returns user choice as
 * enum type
 * ------------------------------------------------------------------------
 * RETURNS: enumerated type representing user choice
 *************************************************************************/
Menu MenuPrompt()
{
	int menuChoice; // IN - user inputs menu choice
	bool invalid;	// PROC - bool variable to determine valid input

	// PROC -  initializing bool variable
	invalid = false;

	// IN & PROC - user inputs menu option from prompt, loops until valid
	// input is entered
	do{
		cout << "QUEUE MENU:\n";
		cout << "1 - Queue a person (QUEUE)\n";
		cout << "2 - Dequeue a person (DEQUEUE)\n";
		cout << "3 - Is the queue empty? (IS EMPTY)\n";
		cout << "4 - Who is at the front? (FRONT)\n";
		cout << "5 - How many people are there? (SIZE)\n";
		cout << "6 - Clear everyone in queue (CLEAR QUEUE)\n";
		cout << "0 - to Exit\n";
		cout << "Enter a command? ";

		// PROC & OUT - if user input is other than an integer, user is
		// prompted with error message and invalid becomes true
		if(!(cin >> menuChoice))
		{
			cout << "\n*** Please enter an INTEGER within the parameters "
					"(0-6) ***\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		// PROC & OUT - if user input is an out of bounds number, user is
		// prompted with error message and invalid becomes true
		else if(menuChoice < 0 || menuChoice > 6)
		{
			cout << "\n*** The number " << menuChoice << " is an invalid"
					" entry ***\n";
			cout << "*** Please enter an integer within the parameters "
					"(0-6) ***\n\n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		// PROC - if user input is valid, buffer cleared, loop exited
		else
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = false;
		}
	}while(invalid);

	// PROC - switch statement to convert from int to enum type Menu
	switch(menuChoice)
	{
	case 0 : return EXIT;
	break;
	case 1 : return ENQUEUE;
	break;
	case 2 : return DEQUEUE;
	break;
	case 3 : return IS_EMPTY;
	break;
	case 4 : return FRONT;
	break;
	case 5 : return SIZE;
	break;
	case 6 : return CLEAR_QUEUE;
	}
}

/**************************************************************************
 * IsEmpty
 * This function checks if the queue is empty
 * ------------------------------------------------------------------------
 * RETURNS: true or false
 *************************************************************************/
bool IsEmpty(PersonNode* head)
{
	// PROC - if head is NULL, queue is empty and func returns true,
	// otherwise func returns false
	if(head == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*************************************************************************
 * Push
 * This function adds a node to the queue
 * ------------------------------------------------------------------------
 * RETURNS: nothing, adds to list from front
 *************************************************************************/
void Push(PersonNode* &head)
{
	PersonNode *perPtr;		// IN & PROC - user inputs struct data
							// to linked list
	PersonNode *tail;		// IN & PROC - user inputs struct data
							// to linked list
	bool invalid;

	invalid = false;

	// PROC - allocating memory for new node
	perPtr = new PersonNode;

	cout << "\nWho would you like to add?\n";
	// IN - user inputs name
	cout << setw(14) << left << "Enter Name:" << right;
	getline(cin, perPtr -> name);

	// IN & PROC - user inputs gender and receives error message until m/M
	// or f/F is entered
	do{
	cout << left << "Enter Gender: ";
	if(!(cin.get(perPtr -> gender)))
	{
		cout << "\n*** Please enter M or F character for gender\n\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		invalid = true;
	}
	else if(toupper(perPtr->gender) != 'M' &&
			toupper(perPtr->gender) != 'F')
	{
		cout << "\n*** Please enter M or F for gender\n\n";
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		invalid = true;
	}
	else
	{
		perPtr->gender = toupper(perPtr->gender);
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		invalid = false;
	}
	}while(invalid);

	// IN & PROC - user inputs age and receives error message until an
	// integer between 1 and 130 is entered
	do{
	cout << setw(14) << left << "Enter Age:" << right;
	if(!(cin >> perPtr -> age))
	{
		cout << "\n*** Please enter a valid NUMBER for age\n\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		invalid = true;
	}
	else if(perPtr->age <= 0 || perPtr->age > 130)
	{
		cout << "\n*** Please enter a valid age\n\n";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		invalid = true;
	}
	else
	{
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		invalid = false;
	}
	}while(invalid);

	if(IsEmpty(head))
	{
		perPtr->next = NULL;
		head = perPtr;
		tail = perPtr;

	}
	else
	{
		tail = head;

		while(tail->next != NULL)
		{
			tail = tail->next;
		}
		perPtr -> next = NULL;
		tail -> next = perPtr;
		tail = perPtr;
	}

	cout << endl;
}


/*************************************************************************
 * Pop
 * This function removes a node from the queue
 * ------------------------------------------------------------------------
 * RETURNS: nothing, removes top node
 *************************************************************************/
void Pop(PersonNode* &head)
{
		PersonNode *perPtr;	// PROC - ptr used to traverse and delete nodes

		// OUT - top node is displayed and removed from the queue
		cout<<"\nDEQUEUING\n";
		// OUT - name gender age
		cout << setw(8) << left << "Name:" << right << head->name << endl;
		cout << "Gender: " << head->gender << endl;
		cout << setw(8) << left << "Age:" << right << head->age << endl <<
				endl;

		// PROC - sets head to next node
		perPtr = head;
		head = head->next;
		delete perPtr;
}

/*************************************************************************
 * Peek
 * This function peeks at the top node
 * ------------------------------------------------------------------------
 * RETURNS: nothing, outputs top node name, gender, age
 *************************************************************************/
void Peek(PersonNode* &head)
{
	// PROC & OUT - top node data is output
	cout << "\nThe first person in the queue is:\n";
	// OUT - Output name, gender, age
	cout << setw(8) << left << "Name:" << right << head->name << endl;
	cout << "Gender: " << head->gender << endl;
	cout << setw(8) << left << "Age:" << right << head->age << endl <<
			endl;
}

/*************************************************************************
 * Size
 * This function checks the size of the queue
 * ------------------------------------------------------------------------
 * RETURNS: an integer representing queue size
 *************************************************************************/
int Size(PersonNode* head)
{
	PersonNode *perPtr; // PROC - ptr used to check size of list
	int instance;		// PROC - number used to count nodes in list

	// PROC - assigning ptr to head for size check
	perPtr = head;
	// PROC - initialize counter to 0
	instance = 0;

	// PROC - while current ptr is not NULL, loop continues to count
	// instances & traverse list
	while(perPtr != NULL)
	{
		instance ++;
		perPtr = perPtr->next;
	}

	return instance;
}

/**************************************************************************
 * ClearQueue
 * This function deletes all nodes from the queued linked list
 * ------------------------------------------------------------------------
 * RETURNS: nothing, deletes all nodes
 *************************************************************************/
void ClearQueue(PersonNode* &head)
{
		PersonNode *perPtr; // PROC - ptr used to traverse and delete nodes

		cout << "\nCLEARING...\n";

		while(head != NULL)
		{
			perPtr = head;
			cout << perPtr->name << endl;
			head = head->next;
			delete perPtr;
		}
}






