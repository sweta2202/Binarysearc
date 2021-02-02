#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include "bst.h"


void test_tree(){
    BST tree1 = bst_new();
    BST *tree = &tree1;
    assert(bst_count(tree) == 0);

    tree = bst_add(tree,50);
    tree = bst_add(tree,20);
    tree = bst_add(tree,90);
    tree = bst_add(tree,25);
    tree = bst_add(tree,70);
    tree = bst_add(tree,60);
    tree = bst_add(tree,85);
    tree = bst_add(tree,35);
    tree = bst_add(tree,10);
    assert(bst_count(tree) == 9);
    assert (bst_lookup(tree,70)==1);
    tree = bst_delete(tree,70);
    assert( bst_lookup(tree,70)==0);
    assert (bst_count(tree)==8);
}

void test_preorder(){
    BST tree1 = bst_new();
    BST *tree = &tree1;
    assert(bst_count(tree) == 0);
    tree = bst_add(tree,50);
    tree = bst_add(tree,20);
    tree = bst_add(tree,90);
    tree = bst_add(tree,25);
    tree = bst_add(tree,70);
    tree = bst_add(tree,60);
    tree = bst_add(tree,85);
    tree = bst_add(tree,35);
    tree = bst_add(tree,10);
    bst_preorder(tree);
}

void test_postorder(){
    BST tree1 = bst_new();
    BST *tree = &tree1;
    assert(bst_count(tree) == 0);
    tree = bst_add(tree,50);
    tree = bst_add(tree,20);
    tree = bst_add(tree,90);
    tree = bst_add(tree,25);
    tree = bst_add(tree,70);
    tree = bst_add(tree,60);
    tree = bst_add(tree,85);
    tree = bst_add(tree,35);
    tree = bst_add(tree,10);
    bst_postorder(tree);
}

void test_inorder(){
    BST tree1 = bst_new();
    BST *tree = &tree1;
    assert(bst_count(tree) == 0);
    tree = bst_add(tree,50);
    tree = bst_add(tree,20);
    tree = bst_add(tree,90);
    tree = bst_add(tree,25);
    tree = bst_add(tree,70);
    tree = bst_add(tree,60);
    tree = bst_add(tree,85);
    tree = bst_add(tree,35);
    tree = bst_add(tree,10);
    bst_inorder(tree);
}

void test_levelordertraversal(){
BST tree1=bst_new();
BST *tree=&tree1;
tree=bst_add(tree,50);
tree=bst_add(tree,20);
tree=bst_add(tree,90);
tree=bst_add(tree,25);
tree=bst_add(tree,70);
tree=bst_add(tree,60);
tree=bst_add(tree,85);
tree=bst_add(tree,35);
tree=bst_add(tree,10);


bst_levelordertraversal(tree);
}

void test_height(){
    BST tree1 = bst_new();
    BST *tree = &tree1;
    assert(bst_count(tree) == 0);
    tree = bst_add(tree,50);
    tree = bst_add(tree,20);
    tree = bst_add(tree,90);
    tree = bst_add(tree,25);
    tree = bst_add(tree,70);
    tree = bst_add(tree,60);
    tree = bst_add(tree,85);
    tree = bst_add(tree,35);
    tree = bst_add(tree,10);
    assert ( maxDepth(tree) == 4);
}

void test_leafcount(){
    BST tree1 = bst_new();
    BST *tree = &tree1;
    assert(bst_count(tree) == 0);
    tree = bst_add(tree,50);
    tree = bst_add(tree,20);
    tree = bst_add(tree,90);
    tree = bst_add(tree,25);
    tree = bst_add(tree,70);
    tree = bst_add(tree,60);
    tree = bst_add(tree,85);
    tree = bst_add(tree,35);
    tree = bst_add(tree,10);
    assert ( getLeafCount(tree) == 4);
}

void test_minimum(){
    BST tree1 = bst_new();
    BST *tree = &tree1;
    assert(bst_count(tree) == 0);
    tree = bst_add(tree,50);
    tree = bst_add(tree,20);
    tree = bst_add(tree,90);
    tree = bst_add(tree,25);
    tree = bst_add(tree,70);
    tree = bst_add(tree,60);
    tree = bst_add(tree,85);
    tree = bst_add(tree,35);
    tree = bst_add(tree,10);
    assert ( minimum(tree) == 10);
}

void test_maximum(){
    BST tree1 = bst_new();
    BST *tree = &tree1;
    assert(bst_count(tree) == 0);
    tree = bst_add(tree,50);
    tree = bst_add(tree,20);
    tree = bst_add(tree,90);
    tree = bst_add(tree,25);
    tree = bst_add(tree,70);
    tree = bst_add(tree,60);
    tree = bst_add(tree,85);
    tree = bst_add(tree,35);
    tree = bst_add(tree,10);
    assert ( maximum(tree) == 90);
}

void test_ascendingorder(){
    BST tree1 = bst_new();
    BST *tree = &tree1;
    assert(bst_count(tree) == 0);
    tree = bst_add(tree,50);
    tree = bst_add(tree,20);
    tree = bst_add(tree,90);
    tree = bst_add(tree,25);
    tree = bst_add(tree,70);
    tree = bst_add(tree,60);
    tree = bst_add(tree,85);
    tree = bst_add(tree,35);
    tree = bst_add(tree,10);
    bst_inorder(tree);
}

void test_descendingorder(){
    BST tree1 = bst_new();
    BST *tree = &tree1;
    assert(bst_count(tree) == 0);
    tree = bst_add(tree,50);
    tree = bst_add(tree,20);
    tree = bst_add(tree,90);
    tree = bst_add(tree,25);
    tree = bst_add(tree,70);
    tree = bst_add(tree,60);
    tree = bst_add(tree,85);
    tree = bst_add(tree,35);
    tree = bst_add(tree,10);
    bst_descendingorder(tree);
}
int main()
{
    //printf("Hello world!\n");
    //test_tree();
    //test_inorder();
    //test_preorder();
    //test_postorder();
    test_levelordertraversal();
    //test_height();
    //test_leafcount();
    //test_minimum();
    //test_maximum();
    //test_ascendingorder();
    //test_descendingorder();
    return 0;
}