#include "singleton.h"

class S {
                                THIS IS

   SSSSSSSSSSSSSSS      IIIIIIIIII     NNMNNNNN        NNNNNNMN             GGGGGGGGGGGGG     LLLLLLLLLLL                  EEEEEEEEEEEEEEEEEEEEEE     TTTTTTTTTTTTTTTTTTTTTTT          OOOOOOOOO          NNNNHNNN        NHNNNNNN
 SSxxxxxxxxxxxxxxxS     IxxxxxxaxI     NxxxxxxxN       NaxxxxxN          GGGxxxxxxxxxxxxG     LxxxaxxxxxL                  ExxxxxxxaxxxxxxxxxxxxE     TxxxxxxxaxxxxxxxxxxxxxT        OOxxaxxxxxxOO        NbxxxxxxN       NbxxxxxN
SxxxxxSSSSSSxxxxxxS     IxxxxxaxxI     NxxxxxxxxN      NxaxxxxN        GGxxxxxxxxxaxxxxxG     LxxxxxxxxxL                  ExxxxxxxxxxxxxaxxxxxxE     TxxxxxxxxxxxxxxxxxxxxxT      OOxxxxxaxxxxxxxOO      NxbxxxxxxN      NxbxxxxN
SaxxxxS     SSSPSSS     IIxxxaxxII     NxxxxxxxxxN     NxxaxxxN       GxxxxxGGGGGGGGaxxxG     LLxaxxxxxLL                  EExxxxxxEEEEEEEEExxxxE     TxxxxxTTxxxxxxxTTxxxxxT     OxxxxxaxOOOxxxxxxxO     NxxbxxxxxxN     NxxbxxxN
SxaxxxS                   IxaxxI       NxxxxxxxxxxN    NxxxaxxN      GaxxxxG       GGGGGG       LaxxxxL                      ExxaxxE       EEEEEE     TTTPTT  TaxxxxT  TTTTTT     OaxxxxxO   OxaxxxxO     NxxxbxxxxxxN    NxxxbxxN
SxxaxxS                   IaxxxI       NxxxxxxxxxxxN   NxxxxaxN     GxaxxxG                     LxaxxxL                      ExaxxxE                          TxaxxxT             OxxoxxO     OaxxxxO     NxxxxbxxxxxxN   NxxxxbxN
 SxxxxSSSS                IxxaxI       NxxxxxxxNxxxxN  NxxxxxaN     GxxaxxG                     LxxaxxL                      ExxxxxxEFEEEEEEEE                TxxaxxT             OxoxxxO     OxaxxxO     NxxxbxxxNxxxxN  NxxxxxbN
  SSxxxxxxSSSSS           IxxxaI       NxxxaxaN NxxxxN NxxxxaaN     GxxxaxG    GGGGGGGGGG       LxxxaxL                      ExxxxxxxxxxxxxxxE                TxxxaxT             OoxxxxO     OxxaxxO     NxxwxxxN NxaaxN NxxxxbbN
    SSSxxxxxxxxSS         IxxxxI       NxxaxxaN  NxxxxNxxxxxxxN     GxxxxaG    GxxxxxaxxG       LxxxxaL                      ExxxxxxxaxxxxxxxE                TxxxxaT             OaxxaxO     OxxxaxO     NxxxwxxN  NxxxxNxxxwxxxN
       SSSSSSxxxxS        IIxxII       NxaxxxaN   NxxxxxxexxxxN     GxxaxaG    GGGGGxxaxG       LxxxaaL                      ExxxxxxEEEEEEEEEE                TxxxaaT             OaxaxxO     OxxxxaO     NxxxxwxN   NxxxxxwxxxxxN
            SxxxxxS       IxIxII       NaxxxxaN    NxxxxxexxxxN     GxxxaaG        GxaxxG       LxxaxaL                      ExxxaxE                          TxxaxaT             OaaxxxO     OxxaxaO     NxxxxxwN    NxxxxwxxxxxN
            SxxxaxS       IsxxxI       NxxxaaaN     NxxxxexxxxN      GxxxxxG       GaxxxG       LxaxxaL         LLLLLL       EaxxxaE       EEFEEE             TxaxxaT             OxxcxxxO   OxxxxxxO     NxwxxxxN     NxxxwxxxxxN
SSSSSSS     SxxxxaS     IIxxxxxxII     NxxaxaaN      NxxxexxxxN       GxxxxxGGGGGGGGxxxxG     LLxxxxxxxLLLLLLLLLxxxxxL     EExxxxxxEEEEEEEExxxxxE           TTxxxxxxxTT           OxxxxxxxOOOxxxxxxxO     NwxxxxxN      NxxwxxxxxN
SxxxxxxSSSSSSxxxxxS     IxIxxxxIxI     NaxxxaaN       NxxexxxxN        GGxxxxxxxxxxxxxxxG     LxxxaxxxxxxxxxxxxxxxxxxL     ExxxxxxxxxxxxxxxxxaxxE           TxxaxxxxxxT            OOxxxxxxxxxxxxxOO      NwxwxxxN       NxwxxxxxN
SxxxxxxxxxxxxxxxSS      IxxxxxxxxI     NxxxxxxN        NexxxxxN          GGGxxxxxxGGGxxxG     LxxxxxxxxxxxxxxxxxxxxxxL     ExxxxxxxxxxxxxxxxxxxxE           TxxxxxxxxxT              OOxxxxxxxxxOO        NxxwxwxN        NwxxxxwN
 SSSSSSSSSPSSSSS        IIIILIIIII     NNNNNNNN         NNNNNNN             GGGGGGGOGGGGG     LLLLLLLLLLLLLLLLLLLLLLLL     EEEEEEEEEEEEEEEEEFEEEE           TTTTTTTTTTT                OOOOGOOOO          NNNFFNNN         NNNNAME(S)

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
#include "bits/stdc++.h"
using namespace std;


int main() {
    S *a = &S::getInstance();
    a->setNumber(5);
    std::cout << "Number in a: " << a->getNumber() << std::endl;

    S *b = &S::getInstance();
    std::cout << "Number int b: " << b->getNumber() << std::endl;
    return 0;
}