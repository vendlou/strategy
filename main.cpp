#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "add.hpp"
#include "div.hpp"
#include "sub.hpp"
#include "bubble_sort.hpp"
#include "VectorContainer.hpp"
#include "container.hpp"
#include "listcontainer.hpp"

using namespace std;

int main() {
    
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);
    
    cout<<"Original:"<<endl;
    for(int i = 0;i < 3;i++) 
    {
    	cout<<container->at(i)->evaluate()<<"   ";
	}
    cout<<endl;

    container->set_sort_function(new BubbleSort());
    container->sort();
    
    cout<<"VectorContainer After:"<<endl;
    for(int i = 0;i < 3;i++) 
    {
    	cout<<container->at(i)->evaluate()<<"   ";
    }

    cout<<endl;



    ListContainer* listct = new ListContainer();
    listct->set_sort_function(new SelectionSort());
    listct->add_element(TreeA);
    listct->add_element(TreeB);
    listct->add_element(TreeC);
    listct->sort();
    cout<<"ListContainer After:"<<endl;
    for(int i = 0;i < 3;i++) {
    	cout<<listct->at(i)->evaluate()<<"   ";
    }
    cout<<endl;
    return 0;

}
