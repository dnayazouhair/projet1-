#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int Q1,Q2,Q3,Q4,Q5;
	int s=0,r=0,f=0;
	printf("The Rule Of This Game is if Your Answer is Right we Add To Your Score 2 Point if it False We Remove To Your Score 2 Point\n\n");
	printf("-------Welcome To Quiz Game-------\n");
	printf("Question 1) What was the name of the actor who played Jack Dawson in Titanic? \n");
	printf("Answer 1 : jack statham\n");
	printf("Answer 2 : leonardo dicaprio\n");
	printf("Answer 3 : tom hanks\n");
	printf("Chose the solution : ");
	scanf("%d",&Q1);
	switch(Q1)
	{
		case 1:{
			s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 2:{
			s+=5;
			r++;
			printf("Your Answer is Right ,Your Score is : %d",s);
		};break;
		case 3:{
			s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		default :printf("Your Answer doese not existe Try again......");
	}

	printf("\n\nQuestion 2) Which animal can be seen on the Porsche logo? \n");
	printf("Answer 1 : Cat\n");
	printf("Answer 2 : Dog\n");
	printf("Answer 3 : Horse\n");
	printf("Chose the solution : ");
	scanf("%d",&Q2);
	switch(Q2)
	{
		case 1:{
			s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 2:{
			s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 3:{
			s+=5;
			r++;
			printf("Your Answer is Right ,Your Score is : %d",s);
		};break;
		default :printf("Your Answer dose not existe Try again......");
	}
	printf("\n\nQuestion 3) Which country is responsible for giving us pizza and pasta? \n");
	printf("Answer 1 : Spain\n");
	printf("Answer 2 : Italy\n");
	printf("Answer 3 : France\n");
	printf("Chose the solution : ");
	scanf("%d",&Q3);
	switch(Q3)
	{
		case 1:{
			s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 2:{
			s+=5;
			r++;
			printf("Your Answer is Right ,Your Score is : %d",s);
		};break;
		case 3:{
			s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		default :printf("Your Answer dose not existe Try try again......");
	}

	printf("\n\nQuestion 4) What is The Capitale of Holanda \n");
	printf("Answer 1 : Bruxelles\n");
	printf("Answer 2 : Amsterdam\n");
	printf("Answer 3 : Rotterdam\n");
	printf("Chose the solution : ");
	scanf("%d",&Q4);
	switch(Q4)
	{
		case 1:{
			s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 2:{
			s+=5;
			r++;
			printf("Your Answer is Right ,Your Score is : %d",s);

		};break;
		case 3:{
			s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		default :printf("Your Answer dose not existe Try again......");
	}

	printf("\n\nQuestion 5) What percentage of our bodies is made up of water? \n");
	printf("Answer 1 : 20-40%\n");
	printf("Answer 2 : 40-50%\n");
	printf("Answer 3 : 60-65%\n");
	printf("Chose the solution : ");
	scanf("%d",&Q5);
	switch(Q5)


		case 1:{
			s-=2;
			printf("Your Answer is False ,Your Score is : %d",s);
		break;
		case 2:{
			s-=2;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 3:{
				s+=5;
			printf("Your Answer is Right ,Your Score is : %d",s);
		};break;
		default :printf("Your Answer dose not existe Try again......");
	}
	//system("cls");

	printf("The End\n\n");
	printf("Your Score is %d",s);
	printf("You Passed 10 Question, %d is false and %d is Right",f,r);

	getch();
}
