/*
macro means hm kisi function ko difine kr sakte h difine Keyword ka use karke.
1 . jb bhi difine ka use kiya jata h tb uski statment khatm hone ke baad 
semicolon nhi lgane hote h jse ki - #define PI 3.14 
to #define PI 3.14 ye ab hmari macro bn gyi h  
jse ki */
#include <stdio.h>
#define PI 3.14
#define SCQURE(r) r *r

int main()
{
    float c = PI;
    int r = 4;
    printf("the area of a circle is %f", PI *SCQURE(r));
    return 0;
}
