#pragma once

#include <iostream>
#include <cassert>
#include <fstream>
#include<string>

using namespace std;
class bin_tree
{
    struct bin_node
    {
        int data;
        bin_node* left = nullptr;
        bin_node* right = nullptr;
    };
private:
    void write1(bin_node* tree, string* s);
public:
    

    bin_node* root;
    int count;

    bin_tree* bin_create(void);
    void bin_node_delete(bin_node* node);
    int bin_search(const bin_tree* tree, int item);
    int bin_insert(bin_tree* tree, int item);
    void tree_print(bin_node* tree);
    void read_from_file(bin_tree* tree);
    void write_to_file(bin_node* tree);

};

