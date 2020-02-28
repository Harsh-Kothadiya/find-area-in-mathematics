//area
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void Rectangle();
void Square();
void Circle();
void Pentagon();
void ET(); //ET : EQUILATERAL TRIANGLE
void RAT(); //RAT : RIGHT ANGLE TRIANGLE
void main()
{
	int choice;
	printf("\n\n\t CHOOSE ANY ONE CHOICE AND THIS CHOICE FIND AREA");
	printf("\n\n\tENTER-1 : RECTANGLE");
	printf("\n\n\tENTER-2 : SQUARE");
	printf("\n\n\tENTER-3 : CIRCLE");
	printf("\n\n\tENTER-4 : PENTAGON");
	printf("\n\n\tENTER-5 : EQUILATERAL TRIANGLE");
	printf("\n\n\tENTER-6 : RIGHT ANGLE TRIANGLE");
	
	printf("\n\n\tENTER YOUR CHOICE : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :
			Rectangle();
			break;
		case 2 :
			Square();
			break;
		case 3 :
			Circle();
			break;
		case 4 :
			Pentagon();
			break;
		case 5 :
			ET();
			break;
		case 6 : 
			RAT();
			break;
		default :
			printf("\n\n\t IN_VALIED CHOICE...");
			break;
	}
	getch();
}

void Rectangle()
{
	int width,height;
	printf("\n\t ENTER A WIDTH : ");
	scanf("%d",&width);
	printf("\n\t ENTER A HEIGHT : ");
	scanf("%d",&height);
	printf("\n-----OUTPUT--------\n");
	printf("\n\n\t AREA OF RECTAANGLE : %d",width*height);
}

void Square()
{
	int l;
	printf("\n\t ENTER A LENGTH : ");
	scanf("%d",&l);
	printf("\n-----OUTPUT--------\n");
	printf("\n\n\t AREA OF SQUARE : %d",l*l);

	
}

void Circle()
{
	int r;
	printf("\n\n\t ENTER A RADIUS : ");
	scanf("%d",&r);
	printf("\n-----OUTPUT--------\n");
	printf("\n\n\t AREA OF CIRCLE : %.2f",PI*r*r);
}

void Pentagon()
{
	int a,s;
	float ans;
	printf("\n\n\t ENTER a : ");
	scanf("%d",&a);
	printf("\n\n\t ENTER s : ");
	scanf("%d",&s);
	ans=5*s*a/2;
	printf("\n-----OUTPUT--------\n");
	printf("\n\n\t AREA OF PANTAGON : %.2f",ans);
}

void ET()
{
	int a;
	float ans;
	printf("\n\n\t ENTER A SIDE(a) : ");
	scanf("%d",&a);
	ans=1.73*a*a/4;
	printf("\n-----OUTPUT--------\n");
	printf("\n\n\t AREA OF  EQUILATERAL TRIANGLE: %.2f",ans);
}

void RAT()
{
	int base,height;
	float ans;
	printf("\n\n\t ENTER A BASE : ");
	scanf("%d",&base);
	printf("\n\n\t ENTER A HEIGHT : ");
	scanf("%d",&height);
	ans=base*height/2;
	printf("\n-----OUTPUT--------\n");
	printf("\n\n\t AREA OF  RIGHT ANGLE TRIANGLE: %.2f",ans);
}
