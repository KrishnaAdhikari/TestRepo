/*
* 1/9/13: Code snippet sources: http://www.cplusplus.com/reference/ctime/ctime/  
* 
* http://www.cplusplus.com/forum/windows/55426/ (for system pause ideas discussion)   one idea: std::cin.get()
* http://www.cplusplus.com/forum/windows/55426/  another idea for pause while( ! _kbhit() )
* 
* http://www.cprogramming.com/fod/kbhit.html 
*    Prototype: int kbhit(void);
*    Header File: conio.h
*    Explanation: This function is not defined as part of the ANSI C/C++ standard. It is generally used by Borland's family of 
*      compilers. It returns a non-zero integer if a key is in the keyboard buffer. It will not wait for a key to be pressed. 
*/
/* ctime example */
#include <iostream>
#include <stdio.h>
#include <time.h>
//#include <conio.h>
#include <sys/time.h>                // for gettimeofday()

using namespace std;

int main ()
{
  timeval t1, t2;   double elapsedTime; //http://stackoverflow.com/questions/2150291/how-do-i-measure-a-time-interval-in-c
  gettimeofday(&t1, NULL); // start timer 


  time_t rawtime1, rawtime2;  //time ( &rawtime1 );  printf ( "The current local time is: %s", ctime (&rawtime1) );
 
  int num=0; cout<<"Enter any integer. This is just to pause the program for a while so as to test time-associated-codes."<<endl; cin>>num; 
  system("tput bold");  //Click here for Idea Source //Bold    //http://wwwold.jlab.org/Hall-B//secure/eg4/adhikari/Testfiles/Html_JavaScript/my_Cpp_stuffs.html#coloredOp
  cout<<"Thank you! I am glad, you entered "<<num<<"."<<endl; system("tput sgr0"); // Reset
  //cout<<"Press any key to exit..."; while( ! _kbhit() )	{ /*do nothing until a key is pressed*/  } //Didn't compile (conio.h doesn't work)
  //cout<<"Press any key to exit..."; while( ! kbhit() )	{ /*do nothing until a key is pressed*/  } //didn't compile (conio.h doesn't work)


  cout<<"Here in ctime(&rawtime1) rawtime1="<<rawtime1<<endl; 
  cout<<"The following Zero-of-local-time is obatained without calling 'time(&rawtime1 );' first. "<<endl; 
  system("tput bold");  printf ( "\t \t The time strated from: %s", ctime (&rawtime1) ); system("tput sgr0"); //Reset again
  time ( &rawtime1 ); printf ( "The initial local time was: %s", ctime (&rawtime1) ); 
  system("tput bold"); system("tput setaf 1");  //Bold & then Red 
  time ( &rawtime2 );  printf ( "The current local time is: %s", ctime (&rawtime2) );  system("tput sgr0");   //Reset again
 

  // compute and print the elapsed time in millisec 
  gettimeofday(&t2, NULL); // stop timer
  elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;      // sec to ms
  elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms
  system("tput setaf 4"); cout <<"The total time taken is: "<<elapsedTime<<" ms."; 
  cout<<"Or, equivalently: "<<1.0*elapsedTime/(1000)<<" seconds Or "<<1.0*elapsedTime/(60000)<<" minutes \n"; system("tput sgr0"); //Reset again
  return 0;
}
