#include "BSTNode.hpp"

// class BST{
//     BSTNode* root;
// public:
//     void loadTimes();
//     void printInOrder();
//     void unloadTimes();
// // necessary operators, constructors/destructors, functions can be added

// };
	
class BST{
    BSTNode* root;
    BSTNode* Insert(BSTNode* start, Time24 t1);
    void console_InOrder(BSTNode* start);
    void file_InOrder(std::ostream& f1, BSTNode* start);
public:
    BST();
    void loadTimes();
    void unloadTimes();
    void printInOrder();
// necessary operators, constructors/destructors, functions can be added
};