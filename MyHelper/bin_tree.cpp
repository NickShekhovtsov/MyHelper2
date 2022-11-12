#include "bin_tree.h"

void bin_tree::write1(bin_node* tree, string* s)
{
    if (tree != NULL)
    {
        write1(tree->left, s);
        *s += to_string(tree->data) + ' ';
        write1(tree->right, s);
    }
}

bin_tree* bin_tree::bin_create(void)
{
    bin_tree* tree = (bin_tree*)malloc(sizeof * tree);
    tree->root = NULL;
    tree->count = 0;
    return tree;
}

void bin_tree::bin_node_delete(bin_node* node)
{

    if (node->left != NULL) bin_node_delete(node->left);
    if (node->right != NULL) bin_node_delete(node->right);
    delete node;
}

int bin_tree::bin_search(const bin_tree* tree, int item)
{
    const bin_node* node;
    assert(tree != NULL);
    node = tree->root;
    for (;;)
    {
        if (node == NULL)
            return NULL;
        else if (item == node->data)
            return 1;
        else if (item > node->data)
            node = node->right;
        else
            node = node->left;
    }
}

int bin_tree::bin_insert(bin_tree* tree, int item)
{
    bin_node* node;
    bin_node** nee;
    assert(tree != NULL);
    nee = &tree->root;
    node = tree->root;
    for (;;)
    {
        if (node == NULL)
        {
            *nee = (bin_node*)malloc(sizeof * node);
            node = *nee;
            if (node != NULL)
            {
                node->data = item;
                node->left = node->right = NULL;
                tree->count++;
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
            if (item == node->data)
                return 2;
            else if (item > node->data)
            {
                nee = &node->right;
                node = node->right;
            }
            else
            {
                nee = &node->left;
                node = node->left;
            }
    }
}

void bin_tree::tree_print(bin_node* tree)
{
    if (tree != NULL)
    {
        tree_print(tree->left);
        cout << tree->data;;
        tree_print(tree->right);
    }
}

void bin_tree::read_from_file(bin_tree* tree)
{
    ifstream infile("in.txt");
    if (infile.is_open())
    {

        int num;
        while (!infile.eof())
        {
            infile >> num;
            bin_insert(tree, num);
        }
    }

    infile.close();
}

void bin_tree::write_to_file(bin_node* tree)
{
    string* s = new string("");
    ofstream offile("out.txt");
    if (offile.is_open())
    {
        if (tree != NULL)
        {
            write1(tree->left, s);
            *s += to_string(tree->data) + ' ';
            write1(tree->right, s);
        }

        offile << *s;
    }
    offile.close();
}
