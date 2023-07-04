#include <iostream>
using namespace std;
#define fxs(){ \
   std::cout << 1 << std::endl; \
}
#define fs = 1;
void fx(void *a){
    std::cout << "µ÷ÓÃº¯Êý" << sizeof (a) << std::endl;
    a = new int(1231);

//    *a+=1;
}
int main(){
    int *sss =0;
    int b = 1;
//    sss = &b;
    delete sss;
    int a = 1;

    cout << *sss <<endl;
    return 0;
}
