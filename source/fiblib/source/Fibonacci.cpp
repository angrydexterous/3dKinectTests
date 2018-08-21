
#include <fiblib/Fibonacci.h>


namespace fiblib
{


     Fibonacci::Fibonacci()
     {
     }

     Fibonacci::~Fibonacci()
     {
     }

     uint64_t Fibonacci::operator()(uint64_t i)
     {
          uint64_t a = 0;
          uint64_t b = 1;

          if (i == 0) {
               b = 0;
          } else {
               while (i-- > 1) {
                    auto t = a;
                    a = b;
                    b += t;
               }
          }
          return b;
     }


} // namespace fiblib
