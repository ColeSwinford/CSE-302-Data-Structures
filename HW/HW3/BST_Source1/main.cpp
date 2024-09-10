#include "BST.h"
//#include "CLQueue.h"

using namespace std;
int main() {
  BST myBST;
  myBST.PutItem(5);
  myBST.PutItem(7);
  myBST.PutItem(9);
  myBST.PutItem(11);  
  myBST.PutItem(3);
  myBST.PutItem(2);
  myBST.PutItem(1);
//  myBST.PutItem(1);
//  myBST.PutItem(3);
//  myBST.PutItem(7);
//  myBST.PutItem(9);
//  myBST.PutItem(5);
//  myBST.PutItem(15);
//  myBST.DeleteItem(3);
  BST clonedBST(myBST);  
  cout<<"My Tree: ";
  myBST.PrintTree();
  
  // Tree Height
  cout<<"Tree Height: "<<myBST.GetHeight()<<endl;
  
  // Ideal Height Ratio
  cout<<"Ideal Height Ratio: "<<myBST.GetIHRatio()<<endl;
  
  // Reverse In-Order Traversal
  myBST.ResetTree(REV_IN_ORDER);
  cout<<"My Tree Reverse In-Order: ";
  while (!(myBST.TravEmpty())) {
    cout<< myBST.GetNextItem();
    if (!myBST.TravEmpty())
      cout<<", ";
  }
  cout<<endl;
  
  cout<<"Cloned Tree: ";
  clonedBST.PrintTree();
  clonedBST.MakeEmpty();
  cout<<"Cloned Tree V2: ";
  clonedBST.PrintTree();
  int curItem;
  myBST.ResetTree(PRE_ORDER);
  cout<<"My Tree Pre-Order: ";
  while (!(myBST.TravEmpty())) {
    cout<< myBST.GetNextItem();
    if (!myBST.TravEmpty())
      cout<<", ";
  }
  cout<<endl;
  
  myBST.ResetTree(POST_ORDER);
  cout<<"My Tree Post-Order: ";
  while (!(myBST.TravEmpty())) {
    cout<< myBST.GetNextItem();
    if (!myBST.TravEmpty())
      cout<<", ";
  }
  
  cout<<endl;
}
