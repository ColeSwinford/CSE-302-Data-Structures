#define MAXSIZE 2000

struct csvRecord {
double Date;
double Close;
double Volume;
double Open;
double High;
double Low;
int csvClass;  	
};

class AUList
{
public:
  
  AUList(); // Constructor
  
  void MakeEmpty();  // Returns the list to the empty state.
    
  bool IsFull() const; //Determines whether list is full. (Precondition -- list has been initialized).  Return value of "True" indicates class is full.
  
  int GetLength() const; //Determines the number of elements in list.

  void PutItem(csvRecord); //Adds the item to the list.
    
  void ResetList();  //Initializes iterator's current position for an iteration through the list.

  csvRecord GetNextItem(); //Gets the next element in the list.

  bool HasNextItem();
  
  void PrintList();  //Print all elements of the list in a readable format.
  
  void printVolumeBST(); //Put all Close values into BST
  
    

private:
  int length;
  csvRecord ListItems[MAXSIZE];
  int currentPos;
};

