#include<stdio.h>
#include<math.h>
int main()
{
 int a,i,n,m;
 printf("请输入一个正数：\n");	
 scanf("%d",&n);
 a=0;
 i=2;
 do
 {m=n%i;
  if (m==0)
  {a=1;break;}
  else
  i++;
 }
 while(i<sqrt(n));
 {
 if(a==0)
 printf("%d is a prime number.",n);
 else
 printf("%d is not a prime number.",n);
}
 return 0;
}

