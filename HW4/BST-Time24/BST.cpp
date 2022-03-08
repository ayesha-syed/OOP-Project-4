#include "BST.hpp"
#include <fstream>
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

BST::BST(){
    root = NULL;
}

//This function loads the details of the truck from the file into each node
//and then inserts the node into the BST.

void BST::loadTimes(){
    Time24 t1;
    BSTNode b, *root= NULL;
    std::ifstream file("input.txt");
    string line;
    int x,y,z;
    file >> x >> y >> z;
    root=b.insert(root,t1.convertor(x,y,z));
    while(!file.eof())
    {
        file >> x >> y >> z;
        b.insert(root,t1.convertor(x,y,z));
    }
    b.Inorder(root);
    // int count = 0;
    // string first_name, last_name, name;
    // int fuel, funds, unloaded, loaded; 
    // int hours, minutes, seconds;
    // ifstream times;
    // times.open("input.txt");
    // while (!times.eof())
    //     {
    //         t1 = {hours, minutes, seconds}; //initialising the truck
    //         root = Insert(root, t1);
    //         times >> hours;
    //         times >> minutes;
    //         times >> seconds;
    //     }
    //     // else if (count == 1){
    //     //     drivers >> fuel;
    //     //     count ++;
    //     // }
    //     // else if (count == 2){
    //     //     drivers >> funds;
    //     //     count ++;
    //     // }
    //     // else if (count == 3){
    //     //     drivers >> unloaded;
    //     //     count ++;
    //     // }
    //     // else if (count == 4){
    //     //     drivers >> loaded;
    //     //     count = 0;
    //     //     t1 = {name, fuel, funds, loaded, unloaded}; //initialising the truck
    //     //     root = Insert(root, t1); //inserting the truck from the root of the BST
    //     // }
    // timea.close();
}

BSTNode* BST::Insert(BSTNode* start, Truck t1){
    //Checks whether the BST is empty or not and inserts the first node
    if (start == NULL){
        start = new BSTNode;
        start->data = t1;
        start->left = start->right = NULL;
    }
    else if (t1 < start->data){
        start->right = Insert(start->right, t1);
    }
    else{
        start->left = Insert(start->left, t1);
    }
    return start;
}

//Prints the output of the BST inorder to the console

void BST::console_InOrder(BSTNode* start){
    if (start == NULL){
        return;
    }
    console_InOrder(start->left);
    start->data.console_show();
    console_InOrder(start->right);
}

//Creates the file for the output of the BST

void BST::unloadTimes(){
    ofstream file;
    file.open("BST_Output.txt");
    file << "The result of the Binary Tree InOrder Printing is: " << endl;
    file_InOrder(file, root);
    file.close();
}

//Function that calls the print inorder of the BST for the console

void BST::printInOrder(){
    console_InOrder(root);
}

//This function writes to the file the output of the inorder traversal

void BST::file_InOrder(std::ostream& f1, BSTNode* start){
    if (start == NULL){
        return;
    }
    file_InOrder(f1, start->left);
    start->data.write_tofile(f1);
    file_InOrder(f1, start->right);
}