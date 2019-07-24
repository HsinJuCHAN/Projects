#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<stdio.h>
#include<math.h>

//以下為主選單區塊 
void select2(char x[])   //沒有選到的選項 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	printf("%s",x);
}
void select1(char x[])   //選到的選項 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	printf("%s",x);
}
void op()
{
	system("mode 80,30");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(200);
	system("cls");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(175);
	system("cls");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(150);
	system("cls");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(125);
	system("cls");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(110);
	system("cls");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(100);
	system("cls");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(75);
	system("cls");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(65); 
	system("cls");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(50);
	system("cls");
	printf("\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(40);
	system("cls");
	printf("\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(30);
	system("cls");
	printf("\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(30);
	system("cls");
	printf("\n\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(30);
	system("cls");
	printf("\n\n\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("              \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(30);
	system("cls");
	printf("\n\n\n\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(30);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(30);
	system("cls");
	printf("\n\n\n\n\n\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(30);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(30);
	system("cls");
	printf("\n\n\n\n\n\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(35);
	system("cls");
	printf("\n\n\n\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(40);
	system("cls");
	printf("\n\n\n\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(50);
	system("cls");
	printf("\n\n\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(60);
	system("cls");
	printf("\n\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(60);
	system("cls");
	printf("\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(200);
	system("cls");
	printf("\n\n\n\n");
	printf("                \1                \1\1\1\1\1    \1\1\1\1\1                 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1         \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("           \1    \1    \1           \1\1\1\1\1    \1\1\1\1\1               \1");
	printf("\n");
	printf("          \1     \1     \1          \1   \1    \1   \1              \1\1\1\1\1\1\1");
	printf("\n");
	printf("         \1      \1      \1         \1\1\1\1\1    \1\1\1\1\1             \1\1    \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1            \1   \1 \1");
	printf("\n");
	printf("                \1                \1   \1    \1   \1           \1     \1\1");
	printf("\n");
	printf("              \1 \1                \1   \1    \1   \1          \1     \1   \1");
	printf("\n");
	printf("               \1\1               \1   \1\1   \1   \1\1         \1    \1\1      \1\1");
	Sleep(1000);
	system("cls");
	printf("\n\n\n");
	printf("                          \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1");
	printf("\n");
	printf("                                       \1");
	printf("\n");
	printf("                                       \1");
	printf("\n");
	printf("                                       \1");
	printf("\n");
	printf("                                       \1");
	printf("\n");
	printf("                                       \1\1");
	printf("\n");
	printf("                                       \1   \1");
	printf("\n");
	printf("                                       \1      \1");
	printf("\n");
	printf("                                       \1         \1");
	printf("\n");
	printf("                                       \1");
	printf("\n");
	printf("                                       \1");
	printf("\n");
	printf("                                       \1");
	printf("\n");
	printf("                                       \1");
	printf("\n");
	printf("                                       \1");
	Sleep(1200);
	system("cls");
	printf("\n\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_RED);
	printf("                              \1              \1""\n");
	printf("                              \1          \1\1\1\1\1\1\1\1\1""\n");
	printf("                              \1          \1   \1   \1""\n");
	printf("                              \1       \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1""\n");
	printf("                          \1\1\1\1\1\1\1\1\1      \1   \1   \1""\n");
	printf("                             \1\1\1         \1\1\1\1\1\1\1\1\1""\n");
	printf("                             \1\1 \1            \1""\n");
	printf("                            \1 \1  \1     \1\1\1\1\1\1\1\1\1\1\1\1\1""\n");
	printf("                            \1 \1        \1     \1     \1""\n");
	printf("                           \1  \1        \1\1\1\1\1\1\1\1\1\1\1\1\1""\n");
	printf("                           \1  \1            \1""\n");
	printf("                          \1   \1      \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1""\n");
	printf("                              \1          \1       \1""\n");
	printf("                              \1         \1       \1""\n");
	printf("                              \1           \1   \1""\n");
	printf("                              \1             \1\1""\n");
	printf("                              \1          \1\1     \1\1""\n");
	Sleep(1200);
	system("cls");
	printf("\n\n\n\n");
	printf("                            \1           \1         \1""\n");
	printf("                            \1            \1       \1""\n");
	printf("                            \1             \1     \1""\n");
	printf("                            \1        \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1""\n");
	printf("                        \1\1\1\1\1\1\1\1\1            \1       \1""\n");
	printf("                           \1\1\1               \1       \1 ""\n");
	printf("                           \1\1 \1      \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1""\n");
	printf("                          \1 \1  \1     \1       \1""\n");
	printf("                          \1 \1        \1       \1""\n");
	printf("                         \1  \1        \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1""\n");
	printf("                         \1  \1               \1\1       \1""\n");
	printf("                        \1   \1              \1 \1    \1  \1""\n");
	printf("                            \1             \1  \1     \1\1\1""\n");
	printf("                            \1            \1   \1""\n");
	printf("                            \1           \1    \1""\n");
	printf("                            \1         \1\1     \1""\n");
	printf("                            \1                \1""\n");
	Sleep(1350);
	system("cls");
}
int menu(int S[11],char name[11][20]) //主選單 
{ 
	system("mode 80,30");
	int a,b,c,d,e,f,i,j,k,l;
	int input;
	char w[80]="遊戲開始";
	char x[80]="遊戲說明";
	char y[80]=" 排行榜";
	char z[80]="離開遊戲";
	char ha;
	c=0;
	d=0;
	e=c-d;
	while(1)
	{
		e=c-d;
		if(e>=0)
		{
			e=e%4;
			if(e==0)
			{
				system("cls");
				printf("\n\n\n\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("      ●∠___  ←←\n");
				printf("        ╲    ←←                                         □□□□□╲↖\n");
				printf("        ∠╲   ←←                                                 ││ ↑\n");
				printf("            ╲                                                       ●\n");
				printf("        □□□□□                                                   │\n");
				printf("                                    ");
				select1(w);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                         │\n");
				printf("                                    ");
				select2(x);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                        ∠╲\n");
				printf("                                    ");
				select2(y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                           ╱\n");
				printf("                                    ");
				select2(z);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("\n");
				printf("                                                 □□□□□\n");
				printf(" □□□□□ \n");
				printf("                                                            │  │\n");
				printf("               ╲  ╲   ↘                                   ╲╱\n");
				printf("           ↘    ╲__●  ↘                           ↓      │   ↓\n");
				printf("              ↘      ╲     ↘                          ↓ ╲│╱  ↓\n");
				printf("              ↘ ↘     ╲╱╲                                ●\n");
				printf("                   ↘     ╲  ╲                           ↓     ↓\n");
				printf("                      ");
				input=getch();
				system("cls");
					if(input==77||input==13)
					{
						return 1;//遊戲開始 
					}
					if(input==80)
					{
						c++;
						e=c-d;
					}
					if(input==72)
					{
						d++;
						e=c-d;
					}
			}
			else if(e==1)
			{
				system("cls");
				printf("\n\n\n\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("      ●∠___  ←←\n");
				printf("        ╲    ←←                                         □□□□□╲↖\n");
				printf("        ∠╲   ←←                                                 ││ ↑\n");
				printf("            ╲                                                       ●\n");
				printf("        □□□□□                                                   │\n");
				printf("                                    ");
				select2(w);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                         │\n");
				printf("                                    ");
				select1(x);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                        ∠╲\n");
				printf("                                    ");
				select2(y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                           ╱\n");
				printf("                                    ");
				select2(z);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("\n");
				printf("                                                 □□□□□\n");
				printf(" □□□□□ \n");
				printf("                                                            │  │\n");
				printf("               ╲  ╲   ↘                                   ╲╱\n");
				printf("           ↘    ╲__●  ↘                           ↓      │   ↓\n");
				printf("              ↘      ╲     ↘                          ↓ ╲│╱  ↓\n");
				printf("              ↘ ↘     ╲╱╲                                ●\n");
				printf("                   ↘     ╲  ╲                           ↓     ↓\n");
				printf("                      ");
				
				input=getch();
				system("cls");
					if(input==77||input==13)
					{
						system("mode 80,50");
						system("cls");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("          █████████████████████\n");
						printf("          ▌                                       ▌\n");
						printf("          ▌  你可以用上下左右方向鍵控制選單及人物 ▌\n");
						printf("          ▌  在選單時                             ▌\n");
						printf("          ▌  方向鍵右可進入選項                   ▌\n");
						printf("          ▌  方向鍵左可退出選項                   ▌\n");
						printf("          ▌                                       ▌\n");
						printf("          ▌  在遊戲中                             ▌\n");
						printf("          ▌  佈滿尖刺的天花板一點一點往下降       ▌\n");
						printf("          ▌  你只能用左右方向鍵控制               ▌\n");
						printf("          ▌  一點一點往下跳                       ▌\n");
						printf("          ▌  然而，階梯中藏有各式機關             ▌\n");
						printf("          ▌  有的可以補血，有的能夠損血           ▌\n");
						printf("          ▌  有的甚至可以影響你的移動方向         ▌\n");
						printf("          ▌                                       ▌\n");
						printf("          ▌  好自為之吧                           ▌\n");
						printf("          ▌  你可以看左上角的星號數量(你的血量)   ▌\n");
						printf("          ▌  觀察不同階梯的效果                   ▌\n");
						printf("          ▌  現在                                 ▌\n");
						printf("          ▌  請你按方向鍵左離開                   ▌\n");
						printf("          ▌                                       ▌\n");
						printf("          █████████████████████\n");
						printf("                             █                     \n");						
						printf("                             █    ╭ ╮▁▁▁▁▁▁╭╮   \n");
						printf("                             █    ╰                 ╯   \n");
						printf("                             █      ∣    Q     Q  ∣     \n");
						printf("                             █      ∣      ●     ∣     \n");
						printf("                             █      ∣     ╰╯    ∣      \n");
						printf("                             █       ∩            ∩      \n");
						input=getch();
						while(input!=75)
						{
							input=getch();
							if(input==75)
							{
								break;
							}
						}
					}
					if(input==80)
					{
						c++;
						e=c-d;
					}
					if(input==72)
					{
						d++;
						e=c-d;
					}	
			}
			else if(e==2)
			{
				system("cls");
				printf("\n\n\n\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("      ●∠___  ←←\n");
				printf("        ╲    ←←                                         □□□□□╲↖\n");
				printf("        ∠╲   ←←                                                 ││ ↑\n");
				printf("            ╲                                                       ●\n");
				printf("        □□□□□                                                   │\n");
				printf("                                    ");
				select2(w);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                         │\n");
				printf("                                    ");
				select2(x);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                        ∠╲\n");
				printf("                                    ");
				select1(y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                           ╱\n");
				printf("                                    ");
				select2(z);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("\n");
				printf("                                                 □□□□□\n");
				printf(" □□□□□ \n");
				printf("                                                            │  │\n");
				printf("               ╲  ╲   ↘                                   ╲╱\n");
				printf("           ↘    ╲__●  ↘                           ↓      │   ↓\n");
				printf("              ↘      ╲     ↘                          ↓ ╲│╱  ↓\n");
				printf("              ↘ ↘     ╲╱╲                                ●\n");
				printf("                   ↘     ╲  ╲                           ↓     ↓\n");
				printf("                      ");
				
				input=getch();
					system("cls");
					if(input==77||input==13)
					{
						printf("\n\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
						printf("           ■■■■■■■■■■■■■■■■■              \n");
						printf("           ■■■■■");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);
						printf("排行榜前十名～～");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
						printf("■■■■              ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf("             \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
						printf("           ■■■■■■■■■■■■■■■■■              ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf("             \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
						printf("           ■■◤                                          ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf("  ╳  ╳     \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
						printf("           ■◤                                            ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf("             \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
						printf("           ◤");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						printf("      名次         名字         成績    ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("       ▼▼▼▼▼ ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf(" \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						printf("                                                           ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("▲▲▲▲▲▲");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf(" \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_RED);
						printf("                    1     %10s        %3d秒          ",name[1],S[1]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf("             \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_RED);
						printf("   ╱╲____╱╲");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
						printf("     2     %10s        %3d秒 ",name[2],S[2]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("              ▲\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │          │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
						printf("    3     %10s        %3d秒 ",name[3],S[3]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("            ◢█◣\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │  ●   ● │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("    4     %10s        %3d秒 ",name[4],S[4]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("          ◢███◣\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │          │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("    5     %10s        %3d秒 ",name[5],S[5]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("        ◢█████◣\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);  
						printf("  ◥■◤");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("    6     %10s        %3d秒 ",name[6],S[6]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("      ◢███████◣\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │          │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("    7     %10s        %3d秒 \n",name[7],S[7]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │          │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("    8     %10s        %3d秒 \n",name[8],S[8]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("   ╲╱╲╱╲╱");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("     9     %10s        %3d秒 \n",name[9],S[9]);
						printf("                   10     %10s        %3d秒 \n",name[10],S[10]); 
						input=getch();
						while(input!=75)
						{
							input=getch();
							if(input==75)
							{
								break;
							}
						}
						
					}
					if(input==80)
					{
						c++;
						e=c-d;
					}
					if(input==72)
					{
						d++;
						e=c-d;
					}
			}
			else if(e==3)
			{
				system("cls");
				printf("\n\n\n\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("      ●∠___  ←←\n");
				printf("        ╲    ←←                                         □□□□□╲↖\n");
				printf("        ∠╲   ←←                                                 ││ ↑\n");
				printf("            ╲                                                       ●\n");
				printf("        □□□□□                                                   │\n");
				printf("                                    ");
				select2(w);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                         │\n");
				printf("                                    ");
				select2(x);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                        ∠╲\n");
				printf("                                    ");
				select2(y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                           ╱\n");
				printf("                                    ");
				select1(z);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("\n");
				printf("                                                 □□□□□\n");
				printf(" □□□□□ \n");
				printf("                                                            │  │\n");
				printf("               ╲  ╲   ↘                                   ╲╱\n");
				printf("           ↘    ╲__●  ↘                           ↓      │   ↓\n");
				printf("              ↘      ╲     ↘                          ↓ ╲│╱  ↓\n");
				printf("              ↘ ↘     ╲╱╲                                ●\n");
				printf("                   ↘     ╲  ╲                           ↓     ↓\n");
				printf("                      ");
				
				input=getch();
					if(input==77||input==13)
					{
						system("cls");
						printf("\n\n\n\n\n\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("                             你確定要離開嗎?""\n\n\n");
						printf("                     按y鍵離開""       ""按←回到選單");
						while(1)
						{
							ha=getch();
							if(ha=='y')
							{
								//system("cls");
								//printf("請你離開");
								system("mode 80,50");
								system("cls");
								printf("\n\n\n\n");
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
								printf("          █████████████████████\n");
								printf("          ▌                                       ▌\n");
								printf("          ▌                                       ▌\n");
								printf("          ▌                                       ▌\n");
								printf("          ▌               請你離開                ▌\n");
								printf("          ▌                                       ▌\n");
								printf("          ▌                                       ▌\n");
								printf("          ▌                                       ▌\n");
								printf("          ▌                                       ▌\n");
								printf("          █████████████████████\n");
								printf("                             █                     \n");						
								printf("                             █    ╭ ╮▁▁▁▁▁▁╭╮   \n");
								printf("                             █    ╰                 ╯   \n");
								printf("                             █      ∣    Q     Q  ∣     \n");
								printf("                             █      ∣      ●     ∣     \n");
								printf("                             █      ∣     ╰╯    ∣      \n");
								printf("                             █       ∩            ∩      \n");
								Sleep(1500);
								return 0;
							}
							else if(ha==75)
							{
								break;
							}
						}
					}
					if(input==80)
					{
						c++;
						e=c-d;
					}
					if(input==72)
					{
						d++;
						e=c-d;
					}
				}	
			}
	
		if(e<0)
		{
			e=-e;
			e=e%4;
			if(e==0)
			{	
				system("cls");
				printf("\n\n\n\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("      ●∠___  ←←\n");
				printf("        ╲    ←←                                         □□□□□╲↖\n");
				printf("        ∠╲   ←←                                                 ││ ↑\n");
				printf("            ╲                                                       ●\n");
				printf("        □□□□□                                                   │\n");
				printf("                                    ");
				select1(w);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                         │\n");
				printf("                                    ");
				select2(x);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                        ∠╲\n");
				printf("                                    ");
				select2(y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                           ╱\n");
				printf("                                    ");
				select2(z);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("\n");
				printf("                                                 □□□□□\n");
				printf(" □□□□□ \n");
				printf("                                                            │  │\n");
				printf("               ╲  ╲   ↘                                   ╲╱\n");
				printf("           ↘    ╲__●  ↘                           ↓      │   ↓\n");
				printf("              ↘      ╲     ↘                          ↓ ╲│╱  ↓\n");
				printf("              ↘ ↘     ╲╱╲                                ●\n");
				printf("                   ↘     ╲  ╲                           ↓     ↓\n");
				printf("                      ");
				input=getch();
				system("cls");
					if(input==77||input==13)
					{
						return 1;//遊戲開始 
					}
					if(input==80)
					{
						c++;
						e=c-d;
					}
					if(input==72)
					{
						d++;
						e=c-d;
					}
			}
			else if(e==1)
			{
				system("cls");
				printf("\n\n\n\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("      ●∠___  ←←\n");
				printf("        ╲    ←←                                         □□□□□╲↖\n");
				printf("        ∠╲   ←←                                                 ││ ↑\n");
				printf("            ╲                                                       ●\n");
				printf("        □□□□□                                                   │\n");
				printf("                                    ");
				select2(w);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                         │\n");
				printf("                                    ");
				select2(x);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                        ∠╲\n");
				printf("                                    ");
				select2(y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                           ╱\n");
				printf("                                    ");
				select1(z);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("\n");
				printf("                                                 □□□□□\n");
				printf(" □□□□□ \n");
				printf("                                                            │  │\n");
				printf("               ╲  ╲   ↘                                   ╲╱\n");
				printf("           ↘    ╲__●  ↘                           ↓      │   ↓\n");
				printf("              ↘      ╲     ↘                          ↓ ╲│╱  ↓\n");
				printf("              ↘ ↘     ╲╱╲                                ●\n");
				printf("                   ↘     ╲  ╲                           ↓     ↓\n");
				printf("                      ");
				
				input=getch();
				system("cls");
					if(input==77||input==13)
					{
						system("cls");
						printf("\n\n\n\n\n\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("                             你確定要離開嗎?""\n\n\n");
						printf("                     按y鍵離開""       ""按←回到選單");
						while(1)
						{
							ha=getch();
							if(ha=='y')
							{
								//system("cls");
								//printf("請你離開");
								system("mode 80,50");
								system("cls");
								printf("\n\n\n\n");
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
								printf("          █████████████████████\n");
								printf("          ▌                                       ▌\n");
								printf("          ▌                                       ▌\n");
								printf("          ▌                                       ▌\n");
								printf("          ▌               請你離開                ▌\n");
								printf("          ▌                                       ▌\n");
								printf("          ▌                                       ▌\n");
								printf("          ▌                                       ▌\n");
								printf("          ▌                                       ▌\n");
								printf("          █████████████████████\n");
								printf("                             █                     \n");						
								printf("                             █    ╭ ╮▁▁▁▁▁▁╭╮   \n");
								printf("                             █    ╰                 ╯   \n");
								printf("                             █      ∣    Q     Q  ∣     \n");
								printf("                             █      ∣      ●     ∣     \n");
								printf("                             █      ∣     ╰╯    ∣      \n");
								printf("                             █       ∩            ∩      \n");
								Sleep(1500);
								return 0;
							}
							else if(ha==75)
							{
								break;
							}
						}
					}
					if(input==80)
					{
						c++;
						e=c-d;
					}
					if(input==72)
					{
						d++;
						e=c-d;
					}	
			}
			else if(e==2)
			{
				system("cls");
				printf("\n\n\n\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("      ●∠___  ←←\n");
				printf("        ╲    ←←                                         □□□□□╲↖\n");
				printf("        ∠╲   ←←                                                 ││ ↑\n");
				printf("            ╲                                                       ●\n");
				printf("        □□□□□                                                   │\n");
				printf("                                    ");
				select2(w);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                         │\n");
				printf("                                    ");
				select2(x);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                        ∠╲\n");
				printf("                                    ");
				select1(y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                           ╱\n");
				printf("                                    ");
				select2(z);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("\n");
				printf("                                                 □□□□□\n");
				printf(" □□□□□ \n");
				printf("                                                            │  │\n");
				printf("               ╲  ╲   ↘                                   ╲╱\n");
				printf("           ↘    ╲__●  ↘                           ↓      │   ↓\n");
				printf("              ↘      ╲     ↘                          ↓ ╲│╱  ↓\n");
				printf("              ↘ ↘     ╲╱╲                                ●\n");
				printf("                   ↘     ╲  ╲                           ↓     ↓\n");
				printf("                      ");
				
				input=getch();
					system("cls");
					if(input==77||input==13)
					{
						printf("\n\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
						printf("           ■■■■■■■■■■■■■■■■■              \n");
						printf("           ■■■■■");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);
						printf("排行榜前十名～～");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
						printf("■■■■              ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf("             \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
						printf("           ■■■■■■■■■■■■■■■■■              ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf("             \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
						printf("           ■■◤                                          ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf("  ╳  ╳     \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
						printf("           ■◤                                            ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf("             \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
						printf("           ◤");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						printf("      名次         名字         成績    ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("       ▼▼▼▼▼ ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf(" \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						printf("                                                           ");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("▲▲▲▲▲▲");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf(" \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_RED);
						printf("                    1     %10s        %3d秒          ",name[1],S[1]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
						printf("             \n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_RED);
						printf("   ╱╲____╱╲");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
						printf("     2     %10s        %3d秒 ",name[2],S[2]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("              ▲\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │          │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
						printf("    3     %10s        %3d秒 ",name[3],S[3]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("            ◢█◣\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │  ●   ● │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("    4     %10s        %3d秒 ",name[4],S[4]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("          ◢███◣\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │          │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("    5     %10s        %3d秒 ",name[5],S[5]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("        ◢█████◣\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);  
						printf("  ◥■◤");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("    6     %10s        %3d秒 ",name[6],S[6]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("      ◢███████◣\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │          │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("    7     %10s        %3d秒 \n",name[7],S[7]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("  │          │");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("    8     %10s        %3d秒 \n",name[8],S[8]);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
						printf("   ╲╱╲╱╲╱");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("     9     %10s        %3d秒 \n",name[9],S[9]);
						printf("                   10     %10s        %3d秒 \n",name[10],S[10]); 
						input=getch();
						while(input!=75)
						{
							input=getch();
							if(input==75)
							{
								break;
							}
						}
					}
					if(input==80)
					{
						c++;
						e=c-d;
					}
					if(input==72)
					{
						d++;
						e=c-d;
					}
			}
			else if(e==3)
			{
				system("cls");
				printf("\n\n\n\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("      ●∠___  ←←\n");
				printf("        ╲    ←←                                         □□□□□╲↖\n");
				printf("        ∠╲   ←←                                                 ││ ↑\n");
				printf("            ╲                                                       ●\n");
				printf("        □□□□□                                                   │\n");
				printf("                                    ");
				select2(w);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                         │\n");
				printf("                                    ");
				select1(x);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                        ∠╲\n");
				printf("                                    ");
				select2(y);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("                           ╱\n");
				printf("                                    ");
				select2(z);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				printf("\n");
				printf("                                                 □□□□□\n");
				printf(" □□□□□ \n");
				printf("                                                            │  │\n");
				printf("               ╲  ╲   ↘                                   ╲╱\n");
				printf("           ↘    ╲__●  ↘                           ↓      │   ↓\n");
				printf("              ↘      ╲     ↘                          ↓ ╲│╱  ↓\n");
				printf("              ↘ ↘     ╲╱╲                                ●\n");
				printf("                   ↘     ╲  ╲                           ↓     ↓\n");
				printf("                      ");
				
				input=getch();
				system("cls");
					if(input==77||input==13)
					{
						system("mode 80,50");
						system("cls");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
						printf("          █████████████████████\n");
						printf("          ▌                                       ▌\n");
						printf("          ▌  你可以用上下左右方向鍵控制選單及人物 ▌\n");
						printf("          ▌  在選單時                             ▌\n");
						printf("          ▌  方向鍵右可進入選項                   ▌\n");
						printf("          ▌  方向鍵左可退出選項                   ▌\n");
						printf("          ▌                                       ▌\n");
						printf("          ▌  在遊戲中                             ▌\n");
						printf("          ▌  佈滿尖刺的天花板一點一點往下降       ▌\n");
						printf("          ▌  你只能用左右方向鍵控制               ▌\n");
						printf("          ▌  一點一點往下跳                       ▌\n");
						printf("          ▌  然而，階梯中藏有各式機關             ▌\n");
						printf("          ▌  有的可以補血，有的能夠損血           ▌\n");
						printf("          ▌  有的甚至可以影響你的移動方向         ▌\n");
						printf("          ▌                                       ▌\n");
						printf("          ▌  好自為之吧                           ▌\n");
						printf("          ▌  你可以看左上角的星號數量(你的血量)   ▌\n");
						printf("          ▌  觀察不同階梯的效果                   ▌\n");
						printf("          ▌  現在                                 ▌\n");
						printf("          ▌  請你按方向鍵左離開                   ▌\n");
						printf("          ▌                                       ▌\n");
						printf("          █████████████████████\n");
						printf("                             █                     \n");						
						printf("                             █    ╭ ╮▁▁▁▁▁▁╭╮   \n");
						printf("                             █    ╰                 ╯   \n");
						printf("                             █      ∣    Q     Q  ∣     \n");
						printf("                             █      ∣      ●     ∣     \n");
						printf("                             █      ∣     ╰╯    ∣      \n");
						printf("                             █       ∩            ∩      \n");
						input=getch();
						while(input!=75)
						{
							input=getch();
							if(input==75)
							{
								break;
							}
						}
					}
					if(input==80)
					{
						c++;
						e=c-d;
					}
					if(input==72)
					{
						d++;
						e=c-d;
					}	
			}
		}
	} 
}

//以下為遊戲畫面
int A[25][35]={0};
float spd=1;
int p=10;
void gotoxy(int x,int y)
{
     COORD scrn;
     HANDLE hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
     scrn.X=x;
     scrn.Y=y;
     SetConsoleCursorPosition(hOutput, scrn); 
}
void show_original(int A[25][35])
{
	printf(" □□□□□□□□□□□□□□□□□□□□□□□□□□\n");
	printf(" □");
	for(int i=1;i<=24;i++)
	{
		if(A[i][1]==500)//血量 
		printf("★");
		else
		printf("　");
	}
	printf("□");
	printf("\n");
	for(int j=2;j<=35;j++)
	{
		printf(" □");
		for(int i=1;i<=24;i++)
		{
			if (A[i][j]==0) 
			printf("　"); 
			else if (A[i][j]==4||A[i][j]==14) 
			printf("■"); //普通的 
			else if(A[i][j]==1000) //最上方的刺 
			printf("▼"); 
			else if(A[i][j]==777)	//人物
			printf ("蛋"); 
			}
		printf("□");
		printf("\n");  
	}
}
void show(int A[25][35])
{
	for(int i=1;i<=24;i++)
	{
		if(A[i][3]==4||A[i][3]==14)
		gotoxy(i*2+2,3);
		printf("　");
		gotoxy(0,36);
	} 
	for(int i=1;i<=23;i++)
	{
		if(A[i][2]==1000)
		gotoxy(i*2+2,2);
		printf("▼");
		gotoxy(0,36);
	} 
	for(int j=3;j<=35;j++)
	{
		for(int i=1;i<=24;i++)
		{
			
			if (A[i][j]==4||A[i][j]==14)
			{
				gotoxy(i*2+2,j+1);
				printf("　");
				if (A[i][j-1]!=1000)
				{
					gotoxy(i*2+2,j);
					printf("■"); //普通的
					gotoxy(0,36);
				}
			}	
			else if (A[i][j]==10||A[i][j]==40)
			{    
			    gotoxy(i*2+2,j+1);
				printf("　");
				gotoxy(i*2+2,j);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
				printf("▲");//破蛋 
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				gotoxy(0,36);
			}	
			else if (A[i][j]==5||A[i][j]==11)
			{
				gotoxy(i*2+2,j+1);
				printf("　");
				gotoxy(i*2+2,j);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
				printf("▲"); //刺 
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				gotoxy(0,36);
			}	
			else if (A[i][j]==6||A[i][j]==16)
			{    
			    gotoxy(i*2+2,j+1);
				printf("　");
				gotoxy(i*2+2,j);
				printf("☆"); //補血 
				gotoxy(0,36);
			}
			else if (A[i][j]==7)
			{    
			    gotoxy(i*2+2,j+1);
				printf("　");
				gotoxy(i*2+2,j);
				printf("→"); //向右 
				gotoxy(0,36);
			}
			else if (A[i][j]==8)
			{    
			    gotoxy(i*2+2,j+1);
				printf("　");
				gotoxy(i*2+2,j);
				printf("←");//向左 
				gotoxy(0,36);
			}	
			else if (A[i][j]==9)
			{    
			    gotoxy(i*2+2,j+1);
				printf("　");
				gotoxy(i*2+2,j);
				printf("==");//彈簧 
				gotoxy(0,36);
			}	
			else if(A[i][j]==777) //人物 
			{
				gotoxy(i*2+2,j+1);
				printf("　");
				gotoxy(i*2+2,j);
				printf("蛋");
				gotoxy(0,36);				
			}
			else if(A[i][j]==21||A[i][j]==31)//會消失的 
			{
				gotoxy(i*2+2,j+1);
				printf("　");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN);
				gotoxy(i*2+2,j);
				printf("□");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				gotoxy(0,36);
			}
			else if(A[i][j]==20||A[i][j]==30)
			{
				gotoxy(i*2+2,j+1);
				printf("　");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE);
				gotoxy(i*2+2,j);
				printf("□");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				gotoxy(0,36);
			}
			else if(A[i][j]==19||A[i][j]==29)
			{
				gotoxy(i*2+2,j+1);
				printf("　");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED);
				gotoxy(i*2+2,j);
				printf("□");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				gotoxy(0,36);
				
			}
			else if(A[i][j]==18||A[i][j]==28)
			{
				gotoxy(i*2+2,j+1);
				printf("　");
				gotoxy(0,36);
				A[i][j]=0;
			} 
		}  
	}
	for(int i=1;i<=24;i++)
	{
		if(A[i][3]==5||A[i][3]==11)       //刺跑到最上方會是空白的 
		gotoxy(i*2+2,3);
		printf("　");
		gotoxy(0,36);
	}
	for(int i=1;i<=24;i++)
	{
		if(A[i][3]==6||A[i][3]==16)       //補血星星跑到最上方會是空白的 
		gotoxy(i*2+2,3);
		printf("　");
		gotoxy(0,36);
	}
	for(int i=1;i<=24;i++)
	{
		if(A[i][3]==10||A[i][3]==40)      //破蛋跑到最上方會是空白的 
		gotoxy(i*2+2,3);
		printf("　");
		gotoxy(0,36);
	}
	for(int i=1;i<=24;i++)
	{
		if(A[i][3]==7||A[i][3]==8)         //向右+左輸送帶跑到最上方會是空白的  
		gotoxy(i*2+2,3);
		printf("　");
		gotoxy(0,36);
	}
	
	for(int i=1;i<=24;i++)
	{
		if(A[i][3]==9)                   
		gotoxy(i*2+2,3);
		printf("　");
		gotoxy(0,36);
	}
} 
int moving(int i,int j)
{
	A[i][j]=0;
	gotoxy(i*2+2,j+1);
	printf ("　");
	if(A[i][j+1]==0)
	{
		j=j+pow(spd,2);
		if (j>=36)	//GG
		return 0;
		spd=spd+0.15;
		for (int a=j-(pow((spd-0.1),2));a<=j;a++)
		{
			if (A[i][a]!=0)
			{
				j=a-1;
				spd=1;
			}
		}
	}
	if (A[i][j]!=0)
	spd=1;
	if(GetAsyncKeyState(VK_RIGHT)!=0)	//判斷→
	{
		i++;
		if(i>=24)
		i=23; 
		if(A[i][j]!=0)
		i--;
	} 
	if(GetAsyncKeyState(VK_LEFT)!=0)	//判斷→
	{
		i--;
   		if(i<=1)
   		i=1;
   		if (A[i][j]!=0)
		i++;   		
   	} 	
   	if (A[i][j+1]==7)//向右輸送帶 
	{
		if (i<23)
		i=i+1;
	}
	
	if (A[i][j+1]==8)//向左輸送帶 
	{
		if (i>1)
		i=i-1;
	} 
	
	if (A[i][j+1]==9)//彈簧 
	{
		if(j>5)
		j=j-2;
		if(A[i][j-3]==1000)
		{
			p=p-4;
			j=j+2;
		}
	}
	if (A[i][j-1]==1000)//到刺
	{
		p=p-4;
		if(A[i][j+1]==5)
		j=j+3;
	}
	A[i][j]=777;
	gotoxy(i*2+2,j+1);
	printf ("蛋");		
   	gotoxy (0,36);
}
int gaming()
{
	time_t t_start,t_end;double total_time;
    t_start=clock();
	srand(time(NULL));
	int a,b,c,d1,d2,t,n,x,f,q,r,e;
	p=10; //血量的判斷用變數 
	t=5;
	n=1;
	x=3;
	system("mode 60,40");
	for(int i=1;i<=p;i++)
	{
		A[i][1]=500; //出現幾滴血 
	}
	for(int i=1;i<=24;i++)
	{
		A[i][2]=1000;
	}
	for(int i=1;i<=8;i++) //一開始出現的階梯分布 
	{
		a=rand()%11+4;
		b=34-4*(i-1);
		A[a][b]=4;
		A[a-2][b]=4;
		A[a-1][b]=4;
		A[a+1][b]=4;
		A[a+2][b]=4;
		if (i==7)
		A[a][b-1]=777;
	}
	show_original(A);
	while(1)
	{
		int judg;
		t=t/pow(1.05,(n-1)); //加快速度 
		if(t<1)
		t=1;
		for(int m=1;m<=10;m++)
		{	
			for(int k=1;k<=x;k++)
			{	
				for(int u=1;u<=t;u++)
				{
					if(u==1)
					{
						for(int j=3;j<=34;j++)
						{
							for(int i=1;i<=24;i++)
							{
								A[i][j]=A[i][j+1]; //上移 
								A[i][j+1]=0;
							}	
						}
					}
					for (int j=3;j<=34;j++)
					{
						for (int i=1;i<24;i++)
						{
							if (A[i][j]==777)
							{
								q=i;
								r=j;
							}
						}
					}
					for(int j=1;j<=24;j++)
					{
						if(A[j][3]==777||A[j][2]==777)
						{
							A[j][3]=0;
							gotoxy(2+1,1);
							printf("　　　　　　　　　　");
							gotoxy(0,36);
							gotoxy(2+1,1);
							for(int a=1;a<=p;a++)
							{
								printf("★");
							}
							gotoxy(0,36);
							gotoxy(j*2+3,4);
							printf("　　　　");
							A[j][6]=777;
							gotoxy(j*2+2,8);
							printf ("蛋");
							gotoxy(0,36); 
							gotoxy(j*2+2,6);
							printf("　　　　");	
						}
					}
					judg=moving(q,r);
					if (judg==0)
					return total_time;
					for(int j=3;j<=34;j++)
					{
						for(int i=1;i<=24;i++)
						{
							if(A[i][j]==777) 
							{
								if(A[i][j+1]==5||A[i][j+1]==10)
								{
                                    if (A[i][j+1]==10)
                                    {
                                    	gotoxy(35,1);
                                    	p=1;	//遇到尖刺，血剩一滴 
                                    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
										printf("噢喔！破了>///<");                            //遇到尖刺，印出疼 
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7); 
									} 
									else if (A[i][j+1]==5)
									{  
										gotoxy(35,1);
										p=p-4;              //遇到草，血扣四滴  
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
										printf("蛋：『疼@_@』");                          //遇到破蛋，印出破 
										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
									}	
									gotoxy(0,36);
									gotoxy(2+1,1);
									printf("　　　　　　　　　　");
									gotoxy(0,36);
									gotoxy(2+1,1);
									for(int a=1;a<=p;a++)
									{
										printf("★");
									}	
									gotoxy(0,36);
									e=1 ;
									for(int a=1;a<=24;a++)
									{
										if(A[a][j+1]==5)
										A[a][j+1]=11;                      //遇到尖刺，只扣一次血 
										if(A[a][j+1]==10)
										A[a][j+1]=40;                      //遇到破蛋，只扣一次血 
									}
								break;
								}
								if(e==1)
								{
								break;
								}	
							}
						}
					}
					e=0;
					for(int j=3;j<=34;j++)
					{
						for(int i=1;i<=24;i++)
						{
							if(A[i][j]==777 ) 
						{
								if(A[i][j+1]==4||A[i][j+1]==21||A[a][j+1]==20||A[a][j+1]==19||A[i][j+1]==6)
								{
									if (A[i][j+1]!=6)
									{
										p=p+1;
										if(p>=10)
										p=10;
									}	
								    else if(A[i][j+1]==6)
									p=10; 
									gotoxy(2+1,1);
									printf("　　　　　　　　　　　　　　　　　　　　　　　　");
									gotoxy(0,36);
									gotoxy(2+1,1);
									for(int a=1;a<=p;a++)
									{
										printf("★");
									}	
										gotoxy(35,1);
									e=1 ;
									for(int a=1;a<=24;a++)
									{
										if(A[a][j+1]==4)
										A[a][j+1]=14;                                  
										if(A[a][j+1]==21)
										A[a][j+1]=31;                                  
										if(A[a][j+1]==20)
										A[a][j+1]=30;
										if(A[a][j+1]==19)
										A[a][j+1]=29;
										if(A[a][j+1]==6)
										A[a][j+1]=16;
									}
									if(A[i][j+1]==4||A[i][j+1]==14)
									{printf("蛋：『哦～～』  "); }                     //遇到一般方塊，印出哦~~
									if(A[i][j+1]==6||A[i][j+1]==16)
									{printf("蛋：『oh yeah』 ");  }                    //遇到星星，印出oh yeah
									if(A[i][j+1]==7||A[i][j+1]==8)
									{printf("蛋：『帶我走~』 ");   }                   //遇到輸送帶，印出帶我走~
									gotoxy(0,36);	
									break;
								}
							
							}
							if(e==1)
							{
								break;
							}	
					}
					if (p<=0)
					return total_time; 
				}
					gotoxy(0,36);
					t_end=clock();
					total_time=((double)(t_end-t_start))/CLK_TCK;
					printf("　　　　　　　　　　　經過時間：%d",int (total_time));
					Sleep(100);
				}
				show(A);
		    }
		    for(int u=1;u<=t;u++)
		    {
				if(u==1)
				{
					for(int j=3;j<=34;j++)
					{
						for(int i=1;i<=24;i++)
						{
							A[i][j]=A[i][j+1];
						}
					}
					c=rand()%10;
					if (c==3) //連在一起的六塊 
					{
						d1=rand()%15+2;
						d2=rand()%15+6;
						A[d1][34]=4;
					    A[d1-1][34]=4;
					    A[d1+1][34]=4;
						A[d2][34]=4;
					    A[d2-1][34]=4;
					    A[d2+1][34]=4;
					}
					else
					{			
						f=rand()%9; //判斷要出現哪種方塊 
						a=rand()%17+3;//判斷位置 
						if(f>1)
						{
							A[a][34]=f+2;
							A[a-1][34]=f+2;
							A[a-2][34]=f+2;
							A[a+1][34]=f+2;
							A[a+2][34]=f+2;
						}
						else if(f==1)	
						{
							A[a][34]=f+20;
							A[a-1][34]=f+20;
							A[a-2][34]=f+20;
							A[a+1][34]=f+20;
							A[a+2][34]=f+20;
						} 
				    }
				    for(int j=1;j<=34;j++)//要讓它消失所以要依據時間減一(看show的變色那區) 
					{
						for(int i=1;i<=24;i++)
						{
							if (A[i][j]>18&&A[i][j]<22)
							A[i][j]=A[i][j]-1;
							if (A[i][j]>28&&A[i][j]<32)
							A[i][j]=A[i][j]-1;
						}
					}
				}
				for (int j=3;j<=34;j++)
				{
					for (int i=1;i<24;i++)
					{
						if (A[i][j]==777)
						{
					   		q=i;
							r=j;	
						}
					}
				}
				judg=moving(q,r);
				if (judg==0)
				return total_time;
				t_end=clock();
				total_time=((double)(t_end-t_start))/CLK_TCK;
				printf("　　　　　　　　　　　經過時間：%d",int (total_time));
				Sleep(100);
			}
			show(A);
	    }
	    n++;
	    x++;
	}	
	 
}

//以下為主架構 
int main()
{
	op();
	int G_judge;
	char name[11][20],X[3]={'N','/','A'};
	for (int i=1;i<=10;i++)	//設定初始名字 
	{
		for (int j=0;j<=2;j++)
		name[i][j]=X[j];
	}
	int S[11]={0};	
	while(1)
	{
		int score;	//遊戲運行判斷變數 ; 分數 
		FILE *rd;			//記錄檔 
		rd=fopen("record.sav","r"); 
		for (int i=1;i<=10;i++)
		fscanf(rd,"%s\t%d\n",&name[i],&S[i]);
		fclose(rd);
		system("cls");
	
		G_judge=menu(S,name);

		if (G_judge==0)
		return 0;
		else if (G_judge==1)
		{
			score=gaming();
			system("cls");
			for (int i=1;i<=10;i++)
			{
				if(S[i]<score)
				{
					for (int j=10;j>i;j--)	//記錄下移 
					{
						S[j]=S[j-1];
						for (int k=0;k<=20;k++)	
						name[j][k]=name[j-1][k];					
					}
					S[i]=score;
					printf("請輸入名字（五字以內）：");
					scanf("%s",&name[i]);
					break;
				}	
			}
		} 
		G_judge=2;
		for (int j=0;j<=35;j++)
		{
			for (int i=0;i<=25;i++)
			A[i][j]=0;
		}
		
		system("cls");		
		if(score<=50)
		{		
			printf("█████████████████████\n");
			printf("▌                                       ▌\n");
			printf("▌  親愛的玩家:                          ▌\n");
			printf("▌                                       ▌\n");
			printf("▌          你死惹                       ▌\n");
			printf("▌                                       ▌\n");
			printf("▌                 so sad～～～          ▌\n");
			printf("▌                                       ▌\n");
			printf("▌                      才%3d秒，再加油啊▌\n",score);
			printf("▌                                       ▌\n");
			printf("█████████████████████\n");
			printf("                   █                     \n");
			printf("                   █    ╭ ╮▁▁▁▁▁▁╭╮   \n");
			printf("                   █    ╰                 ╯   \n");
			printf("                   █      ∣    Q     Q  ∣     \n");
			printf("                   █      ∣      ●     ∣     \n");
			printf("                   █      ∣     ╰╯    ∣      \n");
			printf("                   █       ∩            ∩      \n\n\n");
			Sleep (1000);
			system("pause");
		}
		else if(score>50&&score<=100)
		{		
			printf("█████████████████████\n");
			printf("▌                                       ▌\n");
			printf("▌  親愛的玩家:                          ▌\n");
			printf("▌                                       ▌\n");
			printf("▌          好棒棒哪                     ▌\n");
			printf("▌                                       ▌\n");
			printf("▌                 再接再厲唄          	 ▌\n");
			printf("▌                                       ▌\n");
			printf("▌                  已經%3d秒了欸，YA～～▌\n",score);
			printf("▌                                       ▌\n");
			printf("█████████████████████\n");
			printf("                   █                     \n");
			printf("                   █    ╭ ╮▁▁▁▁▁▁╭╮   \n");
			printf("                   █    ╰                 ╯   \n");
			printf("                   █      ∣    A     A  ∣     \n");
			printf("                   █      ∣      ●     ∣ 揪咪~~    \n");
			printf("                   █      ∣     ╰╯    ∣      \n");
			printf("                   █       ∩            ∩      \n\n\n");
			Sleep (1000);
			system("pause");
		}
		else
		{		
			printf("█████████████████████\n");
			printf("▌                                       ▌\n");
			printf("▌  親愛的玩家:                          ▌\n");
			printf("▌                                       ▌\n");
			printf("▌          我認可你                     ▌\n");
			printf("▌                                       ▌\n");
			printf("▌              繼續往神的境界邁進吧     ▌\n");
			printf("▌                                       ▌\n");
			printf("▌                        %3d秒超厲害的!!▌\n",score);
			printf("▌                                       ▌\n");
			printf("█████████████████████\n");
			printf("                   █                     \n");
			printf("                   █    ╭ ╮▁▁▁▁▁▁╭╮   \n");
			printf("                   █    ╰                 ╯   \n");
			printf("                   █      ∣    >     <  ∣     \n");
			printf("                   █      ∣      ●     ∣ 揪咪~~    \n");
			printf("                   █      ∣     ╰╯    ∣      \n");
			printf("                   █       ∩            ∩      \n\n\n");
			Sleep (1000);
			system("pause");
		}
		
		rd=fopen("record.sav","w");	//寫入紀錄 
		for (int j=1;j<=10;j++)
		fprintf(rd,"%s\t%d\n",name[j],S[j]);
		fclose(rd);	
		
		system("mode 80,30");
		printf("\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
		printf("           ■■■■■■■■■■■■■■■■■              \n");
		printf("           ■■■■■");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);
		printf("排行榜前十名～～");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
		printf("■■■■              ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
		printf("             \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
		printf("           ■■■■■■■■■■■■■■■■■              ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
		printf("             \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
		printf("           ■■◤                                          ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
		printf("  ╳  ╳     \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
		printf("           ■◤                                            ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
		printf("             \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
		printf("           ◤");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		printf("      名次         名字         成績    ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		printf("       ▼▼▼▼▼ ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
		printf(" \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		printf("                                                           ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		printf("▲▲▲▲▲▲");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
		printf(" \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_RED);
		printf("                    1     %10s        %3d秒          ",name[1],S[1]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
		printf("             \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_RED);
		printf("   ╱╲____╱╲");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
		printf("     2     %10s        %3d秒 ",name[2],S[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("              ▲\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("  │          │");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
		printf("    3     %10s        %3d秒 ",name[3],S[3]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		printf("            ◢█◣\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("  │  ●   ● │");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		printf("    4     %10s        %3d秒 ",name[4],S[4]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		printf("          ◢███◣\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("  │          │");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		printf("    5     %10s        %3d秒 ",name[5],S[5]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		printf("        ◢█████◣\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("  │");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);  
		printf("  ◥■◤");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("  │");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		printf("    6     %10s        %3d秒 ",name[6],S[6]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		printf("      ◢███████◣\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("  │          │");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		printf("    7     %10s        %3d秒 \n",name[7],S[7]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("  │          │");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		printf("    8     %10s        %3d秒 \n",name[8],S[8]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("   ╲╱╲╱╲╱");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		printf("     9     %10s        %3d秒 \n",name[9],S[9]);
		printf("                   10     %10s        %3d秒 \n\n\n",name[10],S[10]); 
		system("pause");
		
		
	}
}
