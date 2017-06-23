#include <iostream>
#include <string>

int main()

{ 
  for (int a= -99; (-100 < a) && (a < 100); a = a+1)
  
  {
    if ( (a >= 1) == 0){
      std::cout<<"not possible"<<"\n";}
      
    else if ( (a <= 50) == 0){
      std::cout<<"not possible"<<"\n";}
      
    else if ( a % 15 == 0){
      std::cout<<"FizzBuzz"<<"\n";}
        
    else if ( a % 3 == 0){
      std::cout<<"fizz"<<"\n";}
      
    else if ( a % 5 == 0){
      std::cout<<"Buzz"<<"\n";}
        
    else {
        std::cout<<a<<"\n";}
   }
}