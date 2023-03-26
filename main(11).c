/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	FILE *fp;
    int i=0,l=48,m=6,n,g=0;
    char a;
    
   const char *x[62]={"seshanandh ","shafir "," ","shalini ","sharan_prasath ","sherin ","shivanandhan ","shree_varshana ","shriram ","shyam ","sibiraj ","sibisastivel ","sindhu.A","sindhu.K ","siva_sakthi ","sivadeep ","sivaranjani ","Sivasri ","sooriya_pandian ","sowbaraniga ","sowmika ","manoj ","sruthi ","subashini ","sudharsan ","sudharsana ","sudharsun ","suganth ","sukesh ","sumitha ","suriyaa_n.s ","surya_u.s ","swathi_E ","swathi_k ","swetha_m ","swetha_R ","Taarun ","Tamilarasi ","Thamil ","Tharani ","Tharun ","Thesega ","Thaivisha ","Thrisha ","Trisha ","Vaishnavi ","Vanjula ","Varshine ","Varshini ","Varunika ","Vibudhesh ","Vignesh ","Vigneshwaran ","vijay_bharath ","vijaya_Gopika ","Vijaya_krishna ","Vijith ","Vikash ","Vishal_k ","vishal_T ","Vishnu_priya ","Vruthika "};
    x[20]=(char *)malloc(20*1);
    char y[8],fg;
    int z[10],r[30],j=0,s[62],kk,fl;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
           for (i=0;i<10;i++)
           {
               z[i]=l;
               l++;
           
           }
           /*for (i=0;i<10;i++)
           {
               printf("%d ",z[i]);
           }*/
           int d;
           for(j=0;j<62;j++)
          {
          	
    if(tm.tm_hour+5==8)
    break;
              printf("\n");
          loop: 
        scanf("%s",y);
        g=g+1;
        if(strlen(y)==1)
        {loo:
		printf("Authentication:");
        scanf("%d",&kk);
		if(kk==007)
          break;
          else
          {
              printf("wrong password.....Do you want to try again [y/n] $");
              scanf("%c",fg);
              if(fg==121)
              {
              goto loo;
              }
              else 
              {
                  goto loop;
              }
          }
      }
          m=6;
          d=0;
          start:
        for (i=0;i<10;i++)
        {
            if(y[m]==z[i])
            {
                m++;
                if(m==7)
                if(y[m]==48)
                d=d*10;
                d=d*10+i;
                r[j]=d;
                break;
            }
            
        }
        if(m!=8)
                goto start;
                if(r[j]>60)
        {
            d=d+18;
            d=d/100;
            r[j]=d;
            continue;
        }
                if(r[j]<50)
                {
                    d=d+18;
                    r[j]=d;
                }
          }g--;
          printf(" -%d\n",r[j]);
          fp=fopen("Att.txt","a");
          fprintf("%d-%d-%d\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1990);
        for (i=0;i<g;i++)
        {
            n=r[i];
            printf("%s is present\n",x[n-1]);
            fprintf(fp,"%s is present",x[n-1]);
        }
		printf("\n \n");
		fclose(fp);
            printf("hai");
        }
