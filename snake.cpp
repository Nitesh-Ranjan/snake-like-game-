#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
int d,a,b,count_dot;
int level4(int m,int n)
{
    int flag=0;
    count_dot++;
    //TO PRODUCE NO'S AFTER SOME DELAY
    if(count_dot%90==0)
	{
	    clrscr();
	    cout<<count_dot<<"   "<<a;
		randomize();
			a=rand()%76;
			a+=2;
			b=random(21)+2;
		       //	b+=2;
		       randomize();
			d=random(8);
			d++;

	}
    // SAME AS LEVEL 3 HURDLES
     for(int i=18;i>=7;i--)
     {
	 gotoxy(10,i);
	 printf("%c",2);
     }
     for(int j=10;j<=68;j++)
     {
	 gotoxy(j,7);
	 printf("%c",2);
     }
     for(i=7;i<=18;i++)
     {
	 gotoxy(68,i);
	 printf("%c",2);
     }
     for( i=12;i<=21;i++)
     {
	 gotoxy(20,i);
	 printf("%c",2);
     }
     for(j=20;j<=58;j++)
     {
	 gotoxy(j,21);
	 printf("%c",2);
     }
     for(i=21;i>=12;i--)
     {
	 gotoxy(58,i);
	 printf("%c",2);
     }

     //EXTRA HURDLES

     for(i=10;i<=16;i++)
     {
	 gotoxy(29,i);
	 printf("%c",2);
     }

     //CHECKING

     for( i=10;i<=16;i++)
     {
	 if(m==29 && n==i)
	{
	    flag=1;
	}
     }

     for(i=10;i<=16;i++)
     {
	 gotoxy(39,i);
	 printf("%c",2);
     }

     //CHECKING

     for( i=10;i<=16;i++)
     {
	 if(m==39 && n==i)
	{
	    flag=1;
	}
     }

     for(i=10;i<=16;i++)
     {
	 gotoxy(48,i);
	 printf("%c",2);
     }

     //CHECKING

     for(i=10;i<=16;i++)
     {
	 if(m==48 && n==i)
	{
	    flag=1;
	}
     }
     // CHECKING GAME OVER

     for( i=18;i>=7;i--)
     {
	 if(m==10 && n==i)
	{
	    flag=1;
	}
     }
     for( j=10;j<=68;j++)
     {
	 if(m==j && n==7)
	{
	    flag=1;
	}
     }
     for(i=7;i<=18;i++)
     {
	 if(m==68 && n==i)
	{
	    flag=1;
	}
     }
     for( i=12;i<=21;i++)
     {
	 if(m==20 && n==i)
	{
	    flag=1;
	}
     }
     for(j=20;j<=58;j++)
     {
	 if(m==j && n==21)
	{
	    flag=1;
	}
     }
     for(i=21;i>=12;i--)
     {
	 if(m==58 && n==i)
	{
	    flag=1;
	}
     }

     if(flag==1)
	 return 1;
     else
	 return 0;
}
int level3(int m,int n)
{
    // to produce no's after some delay

    int flag=0;
    count_dot++;
    if(count_dot%90==0)
	{
	    clrscr();
	    cout<<count_dot<<"   "<<a;
		randomize();
			a=rand()%76;
			a+=2;
			b=random(21)+2;
		       //	b+=2;
		       randomize();
			d=random(8);
			d++;

	}
     //CODE FOR HURDLES

     for(int i=18;i>=7;i--)
     {
	 gotoxy(10,i);
	 printf("%c",2);
     }
     for(int j=10;j<=68;j++)
     {
	 gotoxy(j,7);
	 printf("%c",2);
     }
     for(i=7;i<=18;i++)
     {
	 gotoxy(68,i);
	 printf("%c",2);
     }
     for( i=12;i<=21;i++)
     {
	 gotoxy(20,i);
	 printf("%c",2);
     }
     for(j=20;j<=58;j++)
     {
	 gotoxy(j,21);
	 printf("%c",2);
     }
     for(i=21;i>=12;i--)
     {
	 gotoxy(58,i);
	 printf("%c",2);
     }

     // CHECKING GAME OVER

     for( i=18;i>=7;i--)
     {
	 if(m==10 && n==i)
	{
	    flag=1;
	}
     }
     for( j=10;j<=68;j++)
     {
	 if(m==j && n==7)
	{
	    flag=1;
	}
     }
     for(i=7;i<=18;i++)
     {
	 if(m==68 && n==i)
	{
	    flag=1;
	}
     }
     for( i=12;i<=21;i++)
     {
	 if(m==20 && n==i)
	{
	    flag=1;
	}
     }
     for(j=20;j<=58;j++)
     {
	 if(m==j && n==21)
	{
	    flag=1;
	}
     }
     for(i=21;i>=12;i--)
     {
	 if(m==58 && n==i)
	{
	    flag=1;
	}
     }

     if(flag==1)
	 return 1;
     else
	 return 0;

}

int level2(int m,int n)
{
    int flag=0;
    count_dot++;
    if(count_dot%90==0)
	{
	    clrscr();
	    cout<<count_dot<<"   "<<a;
		randomize();
			a=rand()%76;
			a+=2;
			b=random(21)+2;
		       //	b+=2;
		       randomize();
			d=random(8);
			d++;

	}

    for(int i=6;i<=17;i++)
    {
	gotoxy(28,i);
	printf("%c",2);
    }
    for(int j=9;j<=20;j++)
    {
	gotoxy(50,j);
	printf("%c",2);
    }
    for( i=6;i<=17;i++)
    {
	gotoxy(68,i);
	printf("%c",2);
    }
    for( j=9;j<=20;j++)
    {
	gotoxy(8,j);
	printf("%c",2);
    }

    for( i=6;i<=17;i++)
    {
	if(m==28 && n==i)
	{
	    flag=1;
	}
    }
    for( j=9;j<=20;j++)
    {
	if(m==50 && n==j)
	{
	    flag=1;
	}
    }
    for( i=6;i<=17;i++)
    {
	if(m==68 && n==i)
	{
	    flag=1;
	}
    }
    for( j=9;j<=20;j++)
    {
	if(m==8 && n==j)
	{
	    flag=1;
	}
    }

    if(flag==1)
	return 1;
    else
	return 0;

}
int level1(int m,int n)
{
    count_dot++;
    if(count_dot%90==0)
	{
	    clrscr();
			a=random(76);
			a+=2;
			b=random(21);
			b+=2;
			d=random(8);
			d++;

	}
    int flag=0;
    for(int i=6;i<=17;i++)
    {
	gotoxy(28,i);
	printf("%c",2);
    }
    for(int j=9;j<=20;j++)
    {
	gotoxy(50,j);
	printf("%c",2);
    }

    for( i=6;i<=17;i++)
    {
	if(m==28 && n==i)
	{
	    flag=1;
	}
    }
    for( j=9;j<=20;j++)
    {
	if(m==50 && n==j)
	{
	    flag=1;
	}
    }
    if(flag==1)
	return 1;
    else
	return 0;

}
void main()
{
    clrscr();

    int count=4,del=120,l=1,check;
    int r=4,c=5;
    int s=0;
    int p;

    // TO PRINT WELCONME

    for(int k=1;k<=24;k++)
    {
	for(p=1;p<=79;p++)
	{
	    gotoxy(p,k);
	    printf("%c",219);
	}
    }

    // FOR W

    for(k=3;k<=10;k++)
    {
	gotoxy(3,k);
	printf("%c",32);
    }
    p=10;
    for(k=4;k<=7;k++)
    {
	gotoxy(k,p);
	printf("%c",32);
	p--;
    }
    p=7;
    for(k=8;k<=11;k++)
    {
	gotoxy(k,p);
	printf("%c",32);
	p++;
    }
    for(k=3;k<=10;k++)
    {
	gotoxy(12,k);
	printf("%c",32);
    }

    // FOR E

    for(k=3;k<=10;k++)
    {
	gotoxy(15,k);
	printf("%c",32);
    }
    for(k=16;k<=22;k++)
    {
	gotoxy(k,3);
	printf("%c",220);
    }
    for(k=16;k<=19;k++)
    {
	gotoxy(k,7);
	printf("%c",220);
    }
    for(k=16;k<=22;k++)
    {
	gotoxy(k,10);
	printf("%c",223);
    }

    // FOR L

    for(k=3;k<=10;k++)
    {
	gotoxy(25,k);
	printf("%c",32);
    }
    for(k=26;k<=33;k++)
    {
	gotoxy(k,10);
	printf("%c",223);
    }

    // FOR C

    p=3;
    for(k=38;k>=32;k-=2)
    {
	gotoxy(k,p);
	printf("%c",220);
	p++;
    }

    p=3;
    for(k=37;k>=32;k-=2)
    {
	gotoxy(k,p);
	printf("%c",32);
	p++;
    }
    gotoxy(32,6);
    printf("%c",32);
    gotoxy(32,7);
    printf("%c",32);
    gotoxy(39,10);
    printf("%c",223);
    p=8;
    for(k=33;k<=38;k+=2)
    {
	gotoxy(k,p);
	printf("%c",220);
	p++;
    }

    p=8;
    for(k=34;k<=38;k+=2)
    {
	gotoxy(k,p);
	printf("%c",32);
	p++;
    }

    // FOR O

    p=3;
    for(k=44;k>=38;k-=2)
    {
	gotoxy(k,p);
	printf("%c",220);
	p++;
    }

    p=3;
    for(k=43;k>=38;k-=2)
    {
	gotoxy(k,p);
	printf("%c",32);
	p++;
    }
    gotoxy(38,6);
    printf("%c",32);
    gotoxy(38,7);
    printf("%c",32);
    gotoxy(45,10);
    printf("%c",223);
    p=8;
    for(k=40;k<=43;k+=2)
    {
	gotoxy(k,p);
	printf("%c",223);
	p++;
    }

    p=8;
    for(k=39;k<=43;k+=2)
    {
	gotoxy(k,p);
	printf("%c",32);
	p++;

    }
    ////

    p=3;
    for(k=45;k<=50;k+=2)
    {
	gotoxy(k,p);
	printf("%c",32);
	p++;
    }

    p=3;
    for(k=44;k<=50;k+=2)
    {
	gotoxy(k,p);
	printf("%c",220);
	p++;
    }
    gotoxy(50,6);
    printf("%c",32);
    gotoxy(50,7);
    printf("%c",32);
    p=8;
    for(k=48;k>=44;k-=2)
    {
	gotoxy(k,p);
	printf("%c",223);
	p++;
    }

    p=8;
    for(k=49;k>=45;k-=2)
    {
	gotoxy(k,p);
	printf("%c",32);
	p++;
    }

    // FOR M

	// FOR LINE
    for(k=3;k<=10;k++)
    {
	gotoxy(53,k);
	printf("%c",32);
    }
       //
    p=3;
    for(k=54;k<=59;k+=2)
    {
	gotoxy(k,p);
	printf("%c",32);
	p++;
    }

    p=3;
    for(k=53;k<=59;k+=2)
    {
	gotoxy(k,p);
	printf("%c",220);
	p++;
    }
    gotoxy(53,3);
	printf("%c",32);

    //// REST HALF PART

    p=3;
    for(k=65;k>=59;k-=2)
    {
	gotoxy(k,p);
	printf("%c",220);
	p++;
    }

    p=3;
    for(k=64;k>=59;k-=2)
    {
	gotoxy(k,p);
	printf("%c",32);
	p++;
    }

	// FOR LINE
    for(k=3;k<=10;k++)
    {
	gotoxy(65,k);
	printf("%c",32);
    }
       // FOR E

    for(k=3;k<=10;k++)
    {
	gotoxy(68,k);
	printf("%c",32);
    }
    for(k=69;k<=76;k++)
    {
	gotoxy(k,3);
	printf("%c",220);
    }
    for(k=69;k<=72;k++)
    {
	gotoxy(k,7);
	printf("%c",220);
    }
    for(k=69;k<=76;k++)
    {
	gotoxy(k,10);
	printf("%c",223);
    }

    // FOR T0

    // For T

    for(k=12;k<=15;k++)
    {
	gotoxy(32,k);
	printf("%c",32);
    }
    for(k=29;k<=35;k++)
    {
	gotoxy(k,12);
	printf("%c",223);
    }

    //FOR O

    for(k=36;k<=39;k++)
    {
	gotoxy(k,15);
	printf("%c",223);
    }
    for(k=14;k<=15;k++)
    {
	gotoxy(36,k);
	printf("%c",32);
    }
    for(k=36;k<=39;k++)
    {
	gotoxy(k,13);
	printf("%c",223);
    }
    for(k=14;k<=15;k++)
    {
	gotoxy(39,k);
	printf("%c",32);
    }

    // NAME OF GAME

    // FOR L

    for(k=17;k<=23;k++)
    {
	gotoxy(25,k);
	printf("%c",32);
    }
    for(k=26;k<=33;k++)
    {
	gotoxy(k,23);
	printf("%c",223);
    }

    //FOR E

    for(k=35;k<=42;k++)
    {
	gotoxy(k,17);
	printf("%c",220);
    }
    for(k=35;k<=38;k++)
    {
	gotoxy(k,21);
	printf("%c",220);
    }
    for(k=35;k<=42;k++)
    {
	gotoxy(k,23);
	printf("%c",223);
    }
    for(k=17;k<=23;k++)
    {
	gotoxy(35,k);
	printf("%c",32);
    }
    getch();
    clrscr();
    gotoxy(c,r);
    printf("%c",219);
    char ch;

    randomize();
    a=random(76);
    a+=2;
    b=random(21);
    b+=2;
    d=random(8);
    d++;
	while(1)
	{
	    sound(random(300)+200);

	    if(l==1)
	    {
		check=level1(c,r);
		if(check==1)
		{
		    clrscr();
		    gotoxy(35,10);
		    printf("GAME OVER");
		    gotoxy(32,12);
		    printf("Total Score :- %d",s);
		    getch();
		    break;
		}
	    }

	    if(l==2)
	    {
		check=level2(c,r);
		if(check==1)
		{
		    clrscr();
		    gotoxy(35,10);
		    printf("GAME OVER");
		    gotoxy(32,12);
		    printf("Total Score :- %d",s);
		    getch();
		    break;
		}
	    }

	    if(l==3)
	    {
		check=level3(c,r);
		if(check==1)
		{
		    clrscr();
		    gotoxy(35,10);
		    printf("GAME OVER");
		    gotoxy(32,12);
		    printf("Total Score :- %d",s);
		    getch();
		    break;
		}
	    }

	    if(l==4)
	    {
		check=level4(c,r);
		if(check==1)
		{
		    clrscr();
		    gotoxy(35,10);
		    printf("GAME OVER");
		    gotoxy(32,12);
		    printf("Total Score :- %d",s);
		    getch();
		    break;
		}
	    }
	    //horizontal line

	    for(int i=1;i<=79;i++)
	    {
		gotoxy(i,3);
		printf("%c",205);
	    }
	    gotoxy(35,2);
		printf("Level = %d",l);
	    gotoxy(69,2);
		printf("Score :- %d",s);

	    if(b>3)
	    {
		gotoxy(a,b);
		   printf("%d",d);
	    }
	    else
	    {
		b+=3;
		gotoxy(a,b);
		   printf("%d",d);
	    }

		if(kbhit())
		{
		    ch=getch();
		}
		    if(ch=='5')
		    {
			break;
		    }

		    switch(ch)
		    {
			case 'H':
				    r--;
				    gotoxy(c,r+1);
				    printf(" ");
				    if(r==3)
				    {
					r=24;
				    }
				    gotoxy(c,r);
				    printf("%c",219);
				    break;
			case 'K':
				   c--;
				   gotoxy(c+1,r);
				    printf(" ");
				   if(c==0)
				   {
					c=79;
				   }
				   gotoxy(c,r);
				   printf("%c",219);
				   break;

			case 'P':
				    r++;
				    gotoxy(c,r-1);
				    printf(" ");
				    if(r==25)
				    {
					r=4;
				    }
				    gotoxy(c,r);
				    printf("%c",219);
				    break;

			case 'M':
				c++;
				gotoxy(c-1,r);
				    printf(" ");
				if(c==80)
				{
				    c=1;
				}
				gotoxy(c,r);
				printf("%c",219);
				break;
		  /*  default:
			   printf("wrong choice");
			   getch();    */
		    }
		    delay(del);
		    if(c==a && r==b)
		    {

			count_dot=0;
			count++;
			if(count%3==0)
			{
			    clrscr();
			    l++;
			    gotoxy(27,10);
				printf("Congrates You have cleared Level %d",l-1);
			    gotoxy(28,12);
				printf("Now Level %d begins",l);
			    getch();
			    clrscr();
			    del=del-10;
			}

			gotoxy(a,b);
				    printf(" ");
			s+=d;
			randomize();
			a=random(76);
			a+=2;
			b=random(21);
			b+=2;
			d=random(8);
			d++;


		    }
		}
		 nosound();
}