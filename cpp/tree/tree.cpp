#include "tree.h"
#include <iostream>

using namespace std;

void tree::preOrder(tree::BaseTree* t){
    if(t == nullptr){
        return;
    }
    t->visit();
    preOrder(t->getLchild());
    preOrder(t->getRchild());
}