#include <ArduinoSTL.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <Servo.h>
using namespace std;

void Test_Library_2(){
    Servo wireUID_1547_;
    Servo wireUID_1499_;
    long wireUID_1452_ = 10;
    Servo wireUID_596_B;
    Servo wireUID_483_A;
    long wireUID_447_ = 9;
    wireUID_483_A.attach(wireUID_447_);
    wireUID_596_B = wireUID_483_A;
    wireUID_1499_.attach(wireUID_1452_);
    wireUID_1547_ = wireUID_1499_;
    /***** BEGIN WhileLoop ********/
    bool wireUID_1572_ = false; //LoopEndRef.
    int iteratorUID_547 = 0; //loop iterator
    do{
     //shift register init and get front value
        Servo wireUID_2415_ = wireUID_2415_;
        Servo wireUID_1533_ = wireUID_1547_;
        Servo wireUID_1274_F = wireUID_1274_F;
        long wireUID_1277_ = 180;
        Servo wireUID_906_C = wireUID_596_B;
        long wireUID_765_ = 180;
        /**** BEGIN ForLoop *****/
        
        int iteratorUID_740 = 0; //loop iterator
        for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_765_; LVHardcodedCnt++){
         // shift regs
            long wireUID_533_;
            long wireUID_847_ = iteratorUID_740 /*Diagram owned wire terminal*/;
            Servo wireUID_2052_;
            Servo wireUID_1935_ = wireUID_1533_;
            long wireUID_1911_ = 180;
            long wireUID_963_ = 8;
            Servo wireUID_940_E;
            Servo wireUID_885_D = wireUID_906_C;
            wireUID_885_D.write(wireUID_847_);
            wireUID_940_E = wireUID_885_D;
            wireUID_533_ = wireUID_1911_ - wireUID_847_;
            wireUID_1935_.write(wireUID_533_);
            wireUID_2052_ = wireUID_1935_;
            delay(wireUID_963_);
             /* C code*/
            wireUID_1274_F = wireUID_940_E;
            wireUID_2415_ = wireUID_2052_;
             /* output assignements */
            iteratorUID_740++; //iterator increment
        }
        /***** END ForLoop ******/
        /**** BEGIN ForLoop *****/
        
        int iteratorUID_1194 = 0; //loop iterator
        for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_1277_; LVHardcodedCnt++){
         // shift regs
            long wireUID_1500_ = iteratorUID_1194 /*Diagram owned wire terminal*/;
            long wireUID_1512_;
            Servo wireUID_2401_ = wireUID_2415_;
            long wireUID_1304_ = 8;
            long wireUID_1494_ = 180;
            Servo wireUID_1249_G = wireUID_1274_F;
            wireUID_1512_ = wireUID_1494_ - wireUID_1500_;
            wireUID_1249_G.write(wireUID_1512_);
            
            wireUID_2401_.write(wireUID_1500_);
            
            delay(wireUID_1304_);
             /* C code*/
            
             /* output assignements */
            iteratorUID_1194++; //iterator increment
        }
        /***** END ForLoop ******/
         //C code
        
         //output assgn.
        iteratorUID_547++; //iterator increment
    }while(!wireUID_1572_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Test_Library_2();
}

