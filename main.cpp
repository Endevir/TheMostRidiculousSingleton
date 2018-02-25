#include "singleton.h"

class S {
                                THIS IS

   SSSSSSSSSSSSSSS      IIIIIIIIII     NNNNNNNN        NNNNNNNN             GGGGGGGGGGGGG     LLLLLLLLLLL                  EEEEEEEEEEEEEEEEEEEEEE     TTTTTTTTTTTTTTTTTTTTTTT          OOOOOOOOO          NNNNNNNN        NNNNNNNN
 SSxxxxxxxxxxxxxxxS     IxxxxxxaxI     NxxxxxxxN       NxxxxxxN          GGGxxxxxxxxxxxxG     LxxxxxxxxxL                  ExxxxxxxxxxxxxxxxxxxxE     TxxxxxxxxxxxxxxxxxxxxxT        OOxxxxxxxxxOO        NxxxxxxxN       NxxxxxxN
SxxxxxSSSSSSxxxxxxS     IxxxxxaxxI     NxxxxxxxxN      NxxxxxxN        GGxxxxxxxxxxxxxxxG     LxxxxxxxxxL                  ExxxxxxxxxxxxxxxxxxxxE     TxxxxxxxxxxxxxxxxxxxxxT      OOxxxxxxxxxxxxxOO      NxxxxxxxxN      NxxxxxxN
SxxxxxS     SSSSSSS     IIxxxaxxII     NxxxxxxxxxN     NxxxxxxN       GxxxxxGGGGGGGGxxxxG     LLxxxxxxxLL                  EExxxxxxEEEEEEEEExxxxE     TxxxxxTTxxxxxxxTTxxxxxT     OxxxxxxxOOOxxxxxxxO     NxxxxxxxxxN     NxxxxxxN
SxxxxxS                   IxaxxI       NxxxxxxxxxxN    NxxxxxxN      GxxxxxG       GGGGGG       LxxxxxL                      ExxxxxE       EEEEEE     TTTTTT  TxxxxxT  TTTTTT     OxxxxxxO   OxxxxxxO     NxxxxxxxxxxN    NxxxxxxN
SxxxxxS                   IaxxxI       NxxxxxxxxxxxN   NxxxxxxN     GxxxxxG                     LxxxxxL                      ExxxxxE                          TxxxxxT             OxxxxxO     OxxxxxO     NxxxxxxxxxxxN   NxxxxxxN
 SxxxxSSSS                IxxaxI       NxxxxxxxNxxxxN  NxxxxxxN     GxxxxxG                     LxxxxxL                      ExxxxxxEEEEEEEEEE                TxxxxxT             OxxxxxO     OxxxxxO     NxxxxxxxNxxxxN  NxxxxxxN
  SSxxxxxxSSSSS           IxxxaI       NxxxxxxN NxxxxN NxxxxxxN     GxxxxxG    GGGGGGGGGG       LxxxxxL                      ExxxxxxxxxxxxxxxE                TxxxxxT             OxxxxxO     OxxxxxO     NxxxxxxN NxxxxN NxxxxxxN
    SSSxxxxxxxxSS         IxxxxI       NxxxxxxN  NxxxxNxxxxxxxN     GxxxxxG    GxxxxxxxxG       LxxxxxL                      ExxxxxxxxxxxxxxxE                TxxxxxT             OxxxxxO     OxxxxxO     NxxxxxxN  NxxxxNxxxxxxxN
       SSSSSSxxxxS        IIxxII       NxxxxxxN   NxxxxxxxxxxxN     GxxxxxG    GGGGGxxxxG       LxxxxxL                      ExxxxxxEEEEEEEEEE                TxxxxxT             OxxxxxO     OxxxxxO     NxxxxxxN   NxxxxxxxxxxxN
            SxxxxxS       IxIxII       NxxxxxxN    NxxxxxxxxxxN     GxxxxxG        GxxxxG       LxxxxxL                      ExxxxxE                          TxxxxxT             OxxxxxO     OxxxxxO     NxxxxxxN    NxxxxxxxxxxN
            SxxxxxS       IxxxxI       NxxxxxxN     NxxxxxxxxxN      GxxxxxG       GxxxxG       LxxxxxL         LLLLLL       ExxxxxE       EEEEEE             TxxxxxT             OxxxxxxO   OxxxxxxO     NxxxxxxN     NxxxxxxxxxN
SSSSSSS     SxxxxxS     IIxxxxxxII     NxxxxxxN      NxxxxxxxxN       GxxxxxGGGGGGGGxxxxG     LLxxxxxxxLLLLLLLLLxxxxxL     EExxxxxxEEEEEEEExxxxxE           TTxxxxxxxTT           OxxxxxxxOOOxxxxxxxO     NxxxxxxN      NxxxxxxxxN
SxxxxxxSSSSSSxxxxxS     IxIxxxxIxI     NxxxxxxN       NxxxxxxxN        GGxxxxxxxxxxxxxxxG     LxxxxxxxxxxxxxxxxxxxxxxL     ExxxxxxxxxxxxxxxxxxxxE           TxxxxxxxxxT            OOxxxxxxxxxxxxxOO      NxxxxxxN       NxxxxxxxN
SxxxxxxxxxxxxxxxSS      IxxxxxxxxI     NxxxxxxN        NxxxxxxN          GGGxxxxxxGGGxxxG     LxxxxxxxxxxxxxxxxxxxxxxL     ExxxxxxxxxxxxxxxxxxxxE           TxxxxxxxxxT              OOxxxxxxxxxOO        NxxxxxxN        NxxxxxxN
 SSSSSSSSSSSSSSS        IIIIIIIIII     NNNNNNNN         NNNNNNN             GGGGGG   GGGG     LLLLLLLLLLLLLLLLLLLLLLLL     EEEEEEEEEEEEEEEEEEEEEE           TTTTTTTTTTT                OOOOOOOOO          NNNNNNNN         NNNNAME(S)

private:
    int number;
public:
    int getNumber() {
        return number;
    }
    void setNumber(const int &number1) {
        number = number1;
    }
};

#include <iostream>

int main() {
    S *a = &S::getInstance();
    a->setNumber(5);
    std::cout << "Number in a: " << a->getNumber() << std::endl;

    S *b = &S::getInstance();
    std::cout << "Number int b: " << b->getNumber() << std::endl;
    return 0;
}