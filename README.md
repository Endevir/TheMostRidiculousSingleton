# TheMostRidiculousSingleton

Hello everybody! This is my special MEGA-SINGLETON macros realisation, which performs magic and makes singleton from any class.

### How to use macros:
* Macros consists of 3 "words"-macroses: THIS, IS and special ascii-art-like word SILGLETON. There's no difference in words order, but ALL of them should exist in the beginning of class declaration. If there's no word, or some part of SINGLETON is erased, linker error (ex. Correct_THIS_Word_077e476b586729db2f5b73f70614e321() function is not defined) will be raised.

* In the right-bottom corner of last SINGLETON letter there's little special macros NNNAME (which is part of N letter). To enable macros, NNNAME should be initialized with class name like NNNAME(ClassName). That's all

* To get instance of class use ClassName\* pointer = ClassName::getInstance() function

### There are some requerements for classes, which could be used as singletons
* First (and the most): There shouldn't be any constructors or operators =
* There should be no function getInstance() declared

# May the force be with you!
                   ____                  
                _.' :  `._               
            .-.'`.  ;   .'`.-.           
   __      / : ___\ ;  /___ ; \      __  
 ,'_ ""--.:__;".-.";: :".-.":__;.--"" _`,
 :' `.t""--.. '<@.`;_  ',@>` ..--""j.' `;
      `:-.._J '-.-'L__ `-- ' L_..-;'     
        "-.__ ;  .-"  "-.  : __.-"       
            L ' /.------.\ ' J           
             "-.   "--"   .-"            
            __.l"-:_JL_;-";.__           
         .-j/'.;  ;""""  / .'\"-.        
       .' /:`. "-.:     .-" .';  `.      
    .-"  / ;  "-. "-..-" .-"  :    "-.   
 .+"-.  : :      "-.__.-"      ;-._   \  
 ; \  `.; ;                    : : "+. ; 
 :  ;   ; ;                    : ;  : \: 
 ;  :   ; :                    ;:   ;  : 
: \  ;  :  ;                  : ;  /  :: 
;  ; :   ; :                  ;   :   ;: 
:  :  ;  :  ;                : :  ;  : ; 
;\    :   ; :                ; ;     ; ; 
: `."-;   :  ;              :  ;    /  ; 
 ;    -:   ; :              ;  : .-"   : 
 :\     \  :  ;            : \.-"      : 
  ;`.    \  ; :            ;.'_..--  / ; 
  :  "-.  "-:  ;          :/."      .'  :
   \         \ :          ;/  __        :
    \       .-`.\        /t-""  ":-+.   :
     `.  .-"    `l    __/ /`. :  ; ; \  ;
       \   .-" .-"-.-"  .' .'j \  /   ;/ 
        \ / .-"   /.     .'.' ;_:'    ;  
         :-""-.`./-.'     /    `.___.'   
               \ `t  ._  /           
                "-.t-._:'                
