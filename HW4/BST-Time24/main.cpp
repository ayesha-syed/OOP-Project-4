#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "time24.hpp"
#include "BST.hpp"


using namespace std;






int main()
{
    BST bst;
    bst.loadTimes();
    bst.printInOrder();
    bst.unloadTimes();
    return 0;
}
