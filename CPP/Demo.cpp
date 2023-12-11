#include <iostream>
class Test{
   public:
      void sayHello(){
        std::cout<<"Hello\n";
      }
};
int main(){
    Test t;
    t.sayHello();
    return -1;
}