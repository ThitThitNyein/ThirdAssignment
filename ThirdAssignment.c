# ThirdAssignment
/*For exam*/
#include<studio.h>
into main()
{
 int x[5]={};
 int i;
 int sum=0;
 into *ptr;

 printf(Enter 5 numbers : );
 for(i=0;i<5;++i)
 {
   printf(("&x[%d]=%p\n",i,&x[i]);
   scanf(%d",x+i);
   sum+=*(x+i);
  }
 printf("Address of array x: %p",x);
 printf("Sum = %d",sum);

 ptr=&x[4];
 printf("*ptr=%d\n",*ptr);
 printf("*(ptr+1)=%d\n",*(ptr+1));
 printf("*(ptr-1)=%d\n",*(ptr-1));
 
 
 return 0;

}


