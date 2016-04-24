
#include <iostream>

#include "UnitTest.h"

int main(int argc, char const *argv[])
{
  UnitTest t1;
  if(t1.emptyTest1())
  {
    std::cout<<"isEmpty function returns true on an empty linkedlist.\n";
  }
  else
  {
    std::cout<<"ERROR!!! isEmpty function returns false on an empty linkedlist.\n";
  }
  
  if(t1.emptyTest2())
  {
    std::cout<<"isEmpty function returns false on a linkedlist w/ size 1 using addFront.\n";
  }
  else
  {
    std::cout<<"ERROR!!! isEmpty function returns true on a linkedlist w/ size 1 using addFront.\n";
  }

  if(t1.emptyTest3())
  {
    std::cout<<"isEmpty function returns false on a linkedlist w/ size 1 using addBack.\n";
  }
  else
  {
    std::cout<<"ERROR!!! isEmpty function returns true on a linkedlist w/ size 1 using addBack.\n";
  }

  if(t1.emptyTest4())
  {
    std::cout<<"isEmpty function returns false on a non-empty linkedlist using addFront.\n";
  }
  else
  {
    std::cout<<"ERROR!!! isEmpty function returns true on a non-empty linkedlist using addFront.\n";
  }

 if(t1.emptyTest5())
  {
    std::cout<<"isEmpty function returns false on a non-empty linkedlist using addBack.\n";
  }
  else
  {
    std::cout<<"ERROR!!! isEmpty function returns true on a non-empty linkedlist using addBack.\n";
  }



  if(t1.sizeTest1())
  {
    std::cout<<"size function returns 0 on an empty linkedlist.\n";
  }
  else
  {
    std::cout<<"ERROR!!! size function does not return 0 on an empty linkedlist.\n";
  }

  if(t1.sizeTest2())
  {
    std::cout<<"size function returns 1 on a linkedlist w/ size 1.\n";
  }
  else
  {
    std::cout<<"ERROR!!! size function does not return 1 on a linkedlist w/ size 1.\n";
  }

  if(t1.sizeTest3())
  {
    std::cout<<"size function returns 1000 on a linkedlist w/ size 1000.\n";
  }
  else
  {
    std::cout<<"ERROR!!! size function does not return 1000 on a linkedlist w/ size 1000.\n";
  }



  if(t1.searchTest1())
  {
    std::cout<<"search function with value 1 returns false on an empty linkedlist.\n";
  }
  else
  {
    std::cout<<"ERROR!!! search function with value 1 returns true on an empty linkedlist.\n";
  }

  if(t1.searchTest2())
  {
    std::cout<<"search function with value 1 returns true on a linkedlist of size 1 with value 1.\n";
  }
  else
  {
    std::cout<<"ERROR!!! search function with value 1 returns false on a linkedlist of size 1 with value 1.\n";
  }

  if(t1.searchTest3())
  {
    std::cout<<"search function with value 448 returns true on a linkedlist with ints from 0 to 999.\n";
  }
  else
  {
    std::cout<<"ERROR!!! search with value 448 function returns false on a linkedlist with ints from 0 to 999.\n";
  }



  // if(t1.vectorTest1())
  // {
  //   std::cout<<"toVector function returns an empty list with an empty linkedlist\n";
  // }
  // else
  // {
  //   std::cout<<"toVector function does not return an empty list with an empty linkedlist\n";
  // }

  // if()
  // {

  // }
  // else
  // {
    
  // }



  if(t1.addBackTest1())
  {
    std::cout<<"add back function with value 1 changes m_front to something non-nullptr on an empty linkedlist.\n";
  }
  else
  {
    std::cout<<"add back function with value 1 does not change m_front to something non-nullptr on an empty linkedlist.\n";
  }

  if(t1.addBackTest2())
  {
    std::cout<<"add back function with value 1 if search() is called the correct value is found from the linkedlist.\n";
  }
  else
  {
    std::cout<<"add back function with value 1 if search() is called the correct value is not found from the linkedlist.\n";
  }

  if(t1.addBackTest3())
  {
    std::cout<<"add back function with 1000 node linkedlist with values 0-999 search function called with 448 returns true.\n";
  }
  else
  {
    std::cout<<"ERROR!!! add back function with 1000 node linkedlist with values 0-999 search function called with 448 returns false.\n";
  }

  if(t1.addBackTest4())
  {
    std::cout<<"add back function with 2 node linkedlist with values 1 and 2 search function called with 1 returns true.\n";
  }
  else
  {
    std::cout<<"ERROR!!! add back function with 2 node linkedlist with values 1 and 2 search function called with 1 returns false.\n";
  }

  if(t1.addBackTest5())
  {
    std::cout<<"add back function with 2 node linkedlist with values 1 and 2 search function called with 2 returns true.\n";
  }
  else
  {
    std::cout<<"ERROR!!! add back function with 2 node linkedlist with values 1 and 2 search function called with 2 returns false.\n";
  }



  if(t1.addFrontTest1())
  {
    std::cout<<"add front function with value 1 changes m_front to something non-nullptr on an empty linkedlist.\n";
  }
  else
  {
    std::cout<<"add front function with value 1 does not change m_front to something non-nullptr on an empty linkedlist.\n";
  }

  if(t1.addFrontTest2())
  {
    std::cout<<"add front function with value 1 if search() is called the correct value is found from the linkedlist.\n";
  }
  else
  {
    std::cout<<"add front function with value 1 if search() is called the correct value is not found from the linkedlist.\n";
  }

  if(t1.addFrontTest3())
  {
    std::cout<<"add front function with 1000 node linkedlist with values 0-999 search function called with 448 returns true.\n";
  }
  else
  {
    std::cout<<"ERROR!!! add front function with 1000 node linkedlist with values 0-999 search function called with 448 returns false.\n";
  }

  if(t1.addFrontTest4())
  {
    std::cout<<"add front function with 2 node linkedlist with values 1 and 2 search function called with 1 returns true.\n";
  }
  else
  {
    std::cout<<"ERROR!!! add front function with 2 node linkedlist with values 1 and 2 search function called with 1 returns false.\n";
  }

  if(t1.addFrontTest5())
  {
    std::cout<<"add front function with 2 node linkedlist with values 1 and 2 search function called with 2 returns true.\n";
  }
  else
  {
    std::cout<<"ERROR!!! add front function with 2 node linkedlist with values 1 and 2 search function called with 2 returns false.\n";
  }


  if(t1.removeBackTest1())
  {
    std::cout<<"remove back function on an empty linkedlist returns false.\n";
  }
  else
  {
    std::cout<<"remove back function on an emtpy linkedlist returns true.\n";
  }

  if(t1.removeBackTest2())
  {
    std::cout<<"remove back function on a linkedlist of size 1 returns true.\n";
  }
  else
  {
    std::cout<<"remove back function on a linkedlist of size 1 returns false.\n";
  }
  if(t1.removeBackTest3())
  {
    std::cout<<"remove back function on a 1000 node linkedlist with the last node containing 999 then searching for 999 returns false.\n";
  }
  else
  {
    std::cout<<"Error!!! remove back function on a 1000 node linkedlist with the front node containing 999 then searching for 999 returns true.\n";
  }
  if(t1.removeBackTest4())
  {
    std::cout<<"remove back function on a 1000 node linkedlist with the last node containing 0 then searching for 0 returns false.\n";
  }
  else
  {
    std::cout<<"Error!!! remove back function on a 1000 node linkedlist with the front node containing 0 then searching for 0 returns true.\n";
  }


  if(t1.removeFrontTest1())
  {
    std::cout<<"remove front function on an empty linkedlist returns false.\n";
  }
  else
  {
    std::cout<<"remove front function on an emtpy linkedlist returns true.\n";
  }

  if(t1.removeFrontTest2())
  {
    std::cout<<"remove front function on a linkedlist of size 1 returns true.\n";
  }
  else
  {
    std::cout<<"remove front function on a linkedlist of size 1 returns false.\n";
  }

  if(t1.removeFrontTest3())
  {
    std::cout<<"remove front function on a 1000 node linkedlist with the front node containing 999 then searching for 999 returns false.\n";
  }
  else
  {
    std::cout<<"Error!!! remove front function on a 1000 node linkedlist with the front node containing 999 then searching for 999 returns true.\n";
  }

  if(t1.removeFrontTest4())
  {
    std::cout<<"remove front function on a 1000 node linkedlist with the front node containing 0 then searching for 0 returns false.\n";
  }
  else
  {
    std::cout<<"Error!!! remove front function on a 1000 node linkedlist with the front node containing 0 then searching for 0 returns true.\n";
  }
    return(0);
}
