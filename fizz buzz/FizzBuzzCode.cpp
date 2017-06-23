#include <iostream>
#include <string>

int main()

{ 
  for (int a=1; a <= 100; a = a+1)
  
  {
    if ( a % 15 == 0){
      
        std::cout<<"FizzBuzz"<<"\n";}
        
    else if ( a % 3 == 0){
      
        std::cout<<"fizz"<<"\n";}
      
    else if ( a % 5 == 0){
      
          std::cout<<"Buzz"<<"\n";}
        
    else {
        std::cout<<a<<"\n";}
        
        
    }
}

