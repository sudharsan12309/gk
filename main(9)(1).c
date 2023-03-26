
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	FILE *fp;
    int i=0,l=48,m=6,n,g=0;
    char a;
    
   const char *x[62]={"seshanandh ","shafir "," ","shalini ","sharan_prasath ","sherin ","shivanandhan ","shree_varshana ","shriram ","shyam ","sibiraj ","sibisastivel ","A.sindhu ","K.sindhu ","siva_sakthi ","sivadeep ","sivaranjani ","Sivasri ","sooriya_pandian ","sowbaraniga ","sowmika ","manoj ","sruthi ","subashini ","sudharsan ","sudharsana ","sudharsun ","suganth ","sukesh ","sumitha ","suriyaa.n.s ","surya_u.s ","E.swathi ","k.swathi ","M.swetha ","R.swetha ","Taarun ","Tamilarasi ","Thamil ","Tharani ","Tharun ","Thesega ","Thaivisha ","Thrisha ","Trisha ","Vaishnavi ","Vanjula ","Varshine ","Varshini ","Varunika ","Vibudhesh ","Vignesh ","Vigneshwaran ","vijay_bharath ","vijaya_Gopika ","Vijaya_krishna ","Vijith ","Vikash ","Vishal_k ","vishal_T ","Vishnu_priya ","Vruthika "};
    x[20]=(char *)malloc(20*1);
    char y[8];
    int z[10],r[30],j=0,kk,gw,pi=0;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int uo=0,bn,bo=0; 
	char s[10]; 
           for (i=0;i<10;i++)
           {
               z[i]=l;
               l++;
           
           }
           /*for (i=0;i<10;i++)
           {
               printf("%d ",z[i]);
           }*/
           int lk,lp=0;
           printf("\tSelect the options\n1.attendance\n2.library\n$");
           scanf("%d",&lk);
	   for(j=0;j<62;j++)
          {
          	
    if(tm.tm_hour+0==8)
    break;
        loop:
              printf("\n"); 
			  printf("scan your ID :"); 
        scanf("%s",y);
        if(strlen(y)==1)
        goto lo;
        pi=0;
        for(i=0;i<3;i++)
        {
        	gw=(int)(y[i+5]);
        	gw=gw-48;
        	pi=gw+pi*10;
        }printf("%d",pi);
		if((pi<183)||(pi>244))
		{
			lp=1;
			printf("wrong-value");
			j--;
			continue;
		}pi=0;
        lo:
         if(strlen(y)==1)
        {
		printf("Authentication:");
        scanf("%d",&kk);
        printf("Authentication successfull\n");
		if(kk==007)
         {lp=1;
         printf("manually over-righted\n\n");
		  break;}
            else
            {printf("wrong password try again");
goto loop;}
      }
          g=g+1;
		  m=6;
          int d=0;
       for(i=0;i<3;i++)
        {
        	gw=(int)(y[i+5]);
        	gw=gw-48;
        	pi=gw+pi*10;
        	
		}
		r[j]=pi;
                if(r[j]>160)
        {
            pi=pi+18;
            pi=pi%100;
            r[j]=pi;
            goto y;
            
        }char mn[10];
                if(r[j]<250)
                {
                    pi=pi+18;
                    pi=pi%100;
                    r[j]=pi;
				}
				pi=0;
				 y:
				
				
				if(lk==2)
				{n=r[j];
				printf("lo");
					printf("Hello %s.......how may I help you?\n[1]searching for books\n[2]make an entry\n",x[r[j]-1]);
					scanf("%d",&uo);
					if(uo==1)
					{
						printf("On which major you searching: ");
						scanf("%s",s);
						if(s[0]=='m')
						printf("%s books are in the upstairs",s);
						if(s[0]=='p')
						printf("%s books are in the left-side",s);
						if(s[0]=='c')
						printf("%s books are in right-side",s);
					}printf("\n");
					if(uo==2)
					{
						printf("make a entry:");
						scanf("%d",&bn);
						printf("\nyour entry has been confirmed");
						FILE *fl;
						fl=fopen("atta.txt","a");
						fprintf(fl,"\n%d-%d\n",tm.tm_mday,tm.tm_mon+1);
						fprintf(fl,"%s - %d\n",x[r[j]-1],bn);
						fclose(fl);
					}
				}continue;
						        
          }
          if(uo==0)
     {
		     fp=fopen("att.txt","a");
          fprintf(fp,"\n%d-%d\n",tm.tm_mday,tm.tm_mon+1);
          if(g == 0)
          {
          	printf("no absentes%d",g);
          	fprintf(fp,"all are absent\n");
          	goto u;
		  }fclose(fp);
        for (i=0;i<g;i++)
        { fp=fopen("att.txt","a");
            n=r[i];
            printf("%d",n);
            printf("$\t%s is present\n",x[n-1]);
            fprintf(fp,"$\t%s is present\n",x[n-1]);
            fclose(fp);
        }fp=fopen("att.txt","a");
        fprintf(fp,"total present:%d total absentese:%d",g,61-g);
        fclose(fp);
        printf("toal_presentese:%d total_absentese:%d\n\n",g,61-g);}
		printf("\n \n");
		printf("%s",x[20]);
		u:
			return 0;}
	
            
        
