//
// Created by dd028518 on 12/21/2023.
//
//


#include <iostream>
#include "src/List/Graph/Graph.h"

int main(){

    list::Graph wordGraph1(3);
    wordGraph1.addEdge(0,1);
    wordGraph1.addEdge(1,2);
    wordGraph1.addEdge(2,0);


    std::cout << "print this";
    return 0;
}