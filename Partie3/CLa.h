#ifndef PCH_H 
#define PCH_H 
#include <iostream> 
#include "CLb.h" 
#include "CLa.h" 
#endif //PCH_H 
using namespace std; 
 
class CLa 
{ 
    private: 
        CLb b1; 
        CLb* p1; 
    public: 
        void ma1(void); 
        void ma2(void); 
        void ma3(CLb); 
        void ma4(CLb&); 
        void ma5(CLb*); 
};