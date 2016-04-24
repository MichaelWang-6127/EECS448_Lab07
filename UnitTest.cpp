#include "UnitTest.h"

UnitTest::UnitTest()
{

}
UnitTest::~UnitTest()
{

}



bool UnitTest::emptyTest1()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	return(l1->isEmpty() == true);
}
bool UnitTest::emptyTest2()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addFront(1);
	return(l1->isEmpty() == false);
}
bool UnitTest::emptyTest3()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addBack(1);
	return(l1->isEmpty()== false);
}
bool UnitTest::emptyTest4()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	for(int i = 0; i<1000; i++)
	{
		l1->addFront(i);
	}
	return(l1->isEmpty()== false);
}
bool UnitTest::emptyTest5()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	for(int i = 0; i<1000; i++)
	{
		l1->addBack(i);
	}
	return(l1->isEmpty()== false);
}



bool UnitTest::sizeTest1()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	return((l1->size()==0));
}
bool UnitTest::sizeTest2()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addFront(1);
	return((l1->size()==1));
}
bool UnitTest::sizeTest3()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	for(int i = 0; i<1000; i++)
	{
		l1->addFront(i);
	}
	return((l1->size()==1000));
}



bool UnitTest::searchTest1()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	return(l1->search(1));
}
bool UnitTest::searchTest2()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addFront(1);
	return(l1->search(1));
}
bool UnitTest::searchTest3()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	for(int i = 0; i<1000; i++)
	{
		l1->addFront(i);
	}
	return(l1->search(448));
}



bool UnitTest::vectorTest1()
{
// 	LinkedList<int>* l1 = new LinkedList<int>();
// 	return((l1->toVector() == nullptr));
}
bool UnitTest::vectorTest2()
{
// 	LinkedList<int>* l1 = new LinkedList<int>();
//	for(int i = 0; i<1000; i++)
//	{
//		l1->addFront(i);
//	}
// 	return((l1->toVector() == nullptr));
}



bool UnitTest::addBackTest1()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addBack(1);
	return(l1 != nullptr);
}
bool UnitTest::addBackTest2()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addBack(1);
	return(l1->search(1));
}
bool UnitTest::addBackTest3()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	for(int i = 0; i<1000; i++)
	{
		l1->addBack(i);
	}
	return(l1->search(448) == true);
}
bool UnitTest::addBackTest4()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addBack(1);
	l1->addBack(2);
	return(l1->search(1) == true);
}
bool UnitTest::addBackTest5()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addBack(1);
	l1->addBack(2);
	return(l1->search(2) == true);
}


bool UnitTest::addFrontTest1()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addFront(1);
	return(l1 != nullptr);
}
bool UnitTest::addFrontTest2()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addFront(1);
	return(l1->search(1));
}
bool UnitTest::addFrontTest3()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	for(int i = 0; i<1000; i++)
	{
		l1->addFront(i);
	}
	return(l1->search(448) == true);
}
bool UnitTest::addFrontTest4()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addFront(1);
	l1->addFront(2);
	return(l1->search(1) == true);
}
bool UnitTest::addFrontTest5()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addFront(1);
	l1->addFront(2);
	return(l1->search(2) == true);
}



bool UnitTest::removeBackTest1()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	return(l1->removeBack() == false);
}
bool UnitTest::removeBackTest2()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addBack(1);
	return(l1->removeBack() == true);
}
bool UnitTest::removeBackTest3()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	for(int i = 0; i<1000; i++)
	{
		l1->addBack(i);
	}
	l1->removeBack();
	return(l1->search(999) == false);
}
bool UnitTest::removeBackTest4()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	for(int i = 0; i<1000; i++)
	{
		l1->addFront(i);
	}
	l1->removeBack();
	return(l1->search(0) == false);
}



bool UnitTest::removeFrontTest1()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	return(l1->removeFront() == false);
}
bool UnitTest::removeFrontTest2()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->addFront(1);
	return(l1->removeFront() == true);
}
bool UnitTest::removeFrontTest3()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	for(int i = 0; i<1000; i++)
	{
		l1->addFront(i);
	}
	l1->removeFront();
	return(l1->search(999) == false);
}
bool UnitTest::removeFrontTest4()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	for(int i = 0; i<1000; i++)
	{
		l1->addBack(i);
	}
	l1->removeFront();
	return(l1->search(0) == false);
}