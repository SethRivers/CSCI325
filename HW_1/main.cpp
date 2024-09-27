/**
 * @file main.cpp
 * @author Seth Rivers
 * @date 2024-09-24
 * @brief the main.cpp file for the Vector assignment
 * 
 * 
 */

#include "Vector.h"
#include <iostream>

using namespace std;

int main() {
  Vector test1, test2; //For holding the data for testing the software. 
  int input_size; //used for manually deciding the size of your vectors. 
  string menu_input; //for deciding whether to let the auto tester run or manually testing. 
  char menu_confirm; //used in telling the machine to continue or stop testing. 

  //introductory message
  cout<<">Running Vector Test Program..."<<endl<<endl;
  cout<<">To continue, Please select your option: "<<endl;
  cout<<"  -To initiate the automated testing, please type 'auto'"<<endl;
  cout<<"  -If you would rather input your own variables, type 'custom'"<<endl;

  //The first input the user will be asked; this one determining if they want a predetermined
  //stress test, or a custom variable.

  //autofills the vector with 3001 items. (the extra 1 accounting for 0)
  cin>>menu_input;
  if (menu_input == "auto"){
    cout<<"\n>Beginning automatic testing. . ."<<endl<<endl;
    input_size = 3001;
  }
  //Lets the user input their own variable for testing
  else if(menu_input == "custom"){
    cout<<"\n>How large would you like the vector to be?: "<<endl;
    cin>>input_size;
    cout<<"\n>Beginning user-input test. . ."<<endl;
  }
  //safety net incase an unusable response is used. Keeps things from spiraling.  
  else {
    cout<<"[Error! invalid input. Closing Program.]"<<endl;
    return 0;
  }
  //lets the user see the initial size and capacity of the Vector so they know the program works
  //once the new size and capacity are shown. 
  cout<<"-Initial Size: "<<test1.size()<<endl;
  cout<<"-Initial capacity: "<<test1.capacity()<<endl<<endl;

  //runs the push_back function to ensure that it works
  for (int i = 0; i < input_size; i++){
    test1.push_back(i);
  }

  //displays the adjusted variables
  cout<<"-New size: "<<test1.size()<<endl;
  cout<<"-New capacity: "<<test1.capacity()<<endl<<endl;

  //prompts user to answer yes or no on if they wish to continue tests. 
  cout<<">Push_back test is complete. Begin size() function test?(y/n)"<<endl;
  cin>>menu_confirm;

  //starts the size function test. 
  if (menu_confirm == 'y'){
    cout<<"\n>Beginning size function test. . ."<<endl<<endl;
    //gives the results of the size function test. 
    cout<<"-Results: "<<endl;
    cout<<test1.size()<<endl;
    for (int i = 0; i < test1.size(); i++){
      cout<<test1[i]<<endl;
    }
  }

  //closes program.
  else if (menu_confirm == 'n'){
    cout<<"\n>Closing Program..."<<endl;
    return 0;
  }
  //another safety net. Can't be to careful :P 
  else {
    cout<<"[Error! invalid input. Closing Program.]"<<endl;
    return 0;
  }

  //Next yes/no prompt for the user - incase they want to stop testing or continue. 
  cout<<"\n>Testing Concluded; Begin Assignment Operator test?(y/n)"<<endl;
  cin>>menu_confirm;

  //begins next test
  if (menu_confirm == 'y'){
    cout<<"\n>Beginning Assignment Operator test. . ."<<endl<<endl;
    //displays the results of the assignment test. 
    test2 = test1;
    cout<<"-Results: "<<endl;
    for (int i = 0; i < test2.size(); i++){
      cout<<test2[i]<<endl;
    }
  }

  //stops testing. 
  else if (menu_confirm == 'n'){
    cout<<"\n>Closing Program."<<endl;
    return 0;
  }

  //bad input safety net #3
  else {
    cout<<"[Error! invalid input. Closing Program.]"<<endl;
    return 0;
  }

  //the third yes/no prompt for the user, should they want to finish tests or run another. v
  cout<<"\n>Testing Concluded; Begin Copy Constructor test?(y/n)"<<endl;
  cin>>menu_confirm;

  //runs the constructor test. 
  if (menu_confirm == 'y'){
    cout<<"\n>Beginning Copy Constructor test..."<<endl<<endl;
    //initializes a third Vector for the sake of testing the copy constructor function. 
    Vector test3(test1);

    //displays the results of the test
    cout<<"\n-Results: "<<endl;
    for (int i = 0; i < test3.size(); i++){
      cout<<test3[i]<<endl;
    }
  }

  //ends the program. 
  else if (menu_confirm == 'n'){
    cout<<"\n>Closing Program."<<endl;
    return 0;
  }
  //the fourth and final safety net. 
  else {
    cout<<"[Error! invalid input. Closing Program.]"<<endl;
    return 0;
  }

  //a little farewell message
  cout<<"\n>All available tests have been run. Closing program."
  return 0;
}
