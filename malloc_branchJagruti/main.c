//#include "mymalloc.h"
void main()
{
int *x;
x = (int*)MyMalloc(50 * sizeof(int));    //memory space allocated to variable x
printf("Memory allocated %d\n",x);
MyFree(x); 
printf("Memory deallocated");
}

