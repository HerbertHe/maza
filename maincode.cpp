#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <mmsystem.h>
#pragma comment(lib, "WINMM.LIB")
#define X 21
#define Y 21
char n[X][Y];
void printnxy(int,int);
void Ask(int,int);
void gotoxy(int,int);
//#include <iostream>
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);//��ɫ��ʾ 
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);//��ɫ��ʾ
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);//��ɫ��ʾ
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);//��ɫ��ʾ
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);//��ɫ��ʾ
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);//���ɫ��ʾ
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);//����ɫ��ʾ

void printnxy(int printx,int printy)                                 //�����ӡ����
{
	int i,j;
	for(i=0;i<printx;i++)
	{
		for(j=0;j<printy;j++)
		{
			if(n[i][j]==49)
				printf("M");
			if(n[i][j]==48||n[i][j]==57)
				printf(" ");
			if(n[i][j]==54)
				printf("*");
		}
		printf("\n");
	}
}

void mapread1(int sizex,int sizey)                                    //Easy��ͼ
{
	int i,j,ch=0;
	FILE *fp;
	int hang,lie;
	lie=40;
	hang=10;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	gotoxy(lie,hang);printf("Map Choose");hang++;hang++;
	gotoxy(lie,hang);printf("[1]��ͼMap1");hang++;hang++;
	gotoxy(lie,hang);printf("[2]��ͼMap2");hang++;hang++;
	gotoxy(lie,hang);printf("[3]��ͼMap3");
	ch=getch();
	system("cls");
	if(ch==49) fp=fopen("C:\\Users\\Herbert\\Desktop\\map\\Easy\\11.txt","r");
	if(ch==50) fp=fopen("C:\\Users\\Herbert\\Desktop\\map\\Easy\\12.txt","r");
	if(ch==51) fp=fopen("C:\\Users\\Herbert\\Desktop\\map\\Easy\\13.txt","r");
	for(i=0;i<sizex+1;i++)
	{
		for(j=0;j<sizey+1;j++)
		{
			n[i][j]=fgetc(fp);
		}
	}
	fclose(fp);
	printnxy(sizex+1,sizey+1);
}

void mapread2(int sizex,int sizey)                                         //Normal��ͼ
{
	int i,j,ch=0;
	FILE *fp;
	int hang,lie;
	lie=40;
	hang=10;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	gotoxy(lie,hang);printf("Map Choose");hang++;hang++;
	gotoxy(lie,hang);printf("[1]��ͼMap1");hang++;hang++;
	gotoxy(lie,hang);printf("[2]��ͼMap2");hang++;hang++;
	gotoxy(lie,hang);printf("[3]��ͼMap3");
	ch=getch();
	system("cls");
	if(ch==49) fp=fopen("C:\\Users\\Herbert\\Desktop\\map\\Normal\\21.txt","r");
	if(ch==50) fp=fopen("C:\\Users\\Herbert\\Desktop\\map\\Normal\\22.txt","r");
	if(ch==51) fp=fopen("C:\\Users\\Herbert\\Desktop\\map\\Normal\\23.txt","r");
	for(i=0;i<sizex+1;i++)
	{
		for(j=0;j<sizey+1;j++)
		{
			n[i][j]=fgetc(fp);
		}
	}
	fclose(fp);
	printnxy(sizex+1,sizey+1);
}

void mapread3(int sizex,int sizey)                                         //Difficult��ͼ
{
	int i,j,ch=0;
	FILE *fp;
	int hang,lie;
	lie=40;
	hang=10;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	gotoxy(lie,hang);printf("Map Choose");hang++;hang++;
	gotoxy(lie,hang);printf("[1]��ͼMap1");hang++;hang++;
	gotoxy(lie,hang);printf("[2]��ͼMap2");hang++;hang++;
	gotoxy(lie,hang);printf("[3]��ͼMap3");
	ch=getch();
	system("cls");
	if(ch==49) fp=fopen("C:\\Users\\Herbert\\Desktop\\map\\Difficult\\31.txt","r");
	if(ch==50) fp=fopen("C:\\Users\\Herbert\\Desktop\\map\\Difficult\\32.txt","r");
	if(ch==51) fp=fopen("C:\\Users\\Herbert\\Desktop\\map\\Difficult\\33.txt","r");
	for(i=0;i<sizex+1;i++)
	{
		for(j=0;j<sizey+1;j++)
		{
			n[i][j]=fgetc(fp);
		}
	}
	fclose(fp);
	printnxy(sizex+1,sizey+1);
}

void gotoxy(int x, int y)  //��궨λ����
{
   COORD coord = {x, y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void mainUI()              //��ҳUI��д����(���õ����ַ������д��)
{
	int hang,lie;
	lie=25;
	hang=7;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);                //��ɫ
	gotoxy(lie,hang);printf("      GGGGGG          A               M       M              EEEEEEEE  ");hang++;
	gotoxy(lie,hang);printf("    GG               A A             M M     M M            EE        ");hang++;
	gotoxy(lie,hang);printf("   GG               A   A           M   M   M   M          EEEEEEEE  ");hang++;
	gotoxy(lie,hang);printf("  GG    GGG        AAAAAAA         M     M M     M        EE        ");hang++;
	gotoxy(lie,hang);printf("   GG    G        A       A       M       M       M      EE        ");hang++;
	gotoxy(lie,hang);printf("    GGGGGG       A         A     M                 M    EEEEEEEE  ");hang++;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);            //��ɫ
	hang=hang+3;
	lie=lie+6;
	gotoxy(lie,hang);printf("Before you play this game,please read the HELP first\n");hang++;hang++;
	lie=lie+12;
	gotoxy(lie,hang);printf("Tap [ENTER] TO CONTINUE!");hang++;hang++;
	lie=lie+1;
	gotoxy(lie,hang);printf("Tap [ESC] to get exit\n");
}

void GameGuide()                              //��Ϸ�������溯��ģ��
{
	void NewGame();
	void AutoPlayUI();
	void Fight();
	int ch,hang,lie;
	lie=40;
	hang=10;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);       //white
	gotoxy(lie,hang);printf("Mode:");hang++;hang++;
	gotoxy(lie,hang);printf("[N]����ϷNew Game");hang++;hang++;
	gotoxy(lie,hang);printf("[R]�Զ���ϷAuto Play");hang++;hang++;
	gotoxy(lie,hang);printf("[F]����������ϷFight With Friends");hang++;hang++;
	gotoxy(lie,hang);printf("[ESC]�˳���ϷExit the Game");
	ch=getch();
	switch (ch)
		{
			case 78:system("cls");NewGame();break;
			case 110:system("cls");NewGame();break;
			case 82:system("cls");AutoPlayUI();break;
			case 114:system("cls");AutoPlayUI();break; 
			case 70:system("cls");Fight();break;
			case 102:system("cls");Fight();break;
			case 27:system("cls");system("exit");break;
			default:system("cls");GameGuide();break;                        //���������������
		}
}

void NewGame()                                 //����Ϸ����ģ��
{
	int ch=0;
	int Easy();
	int Normal();
	int Difficult();
	int hang,lie;
	lie=40;
	hang=10;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //white
	gotoxy(lie,hang);printf("Level:");hang++;hang++;
	gotoxy(lie,hang);printf("[E]��Easy");hang++;hang++;
	gotoxy(lie,hang);printf("[N]����Normal");hang++;hang++;
	gotoxy(lie,hang);printf("[D]����Difficult");hang++;hang++;
	gotoxy(lie,hang);printf("[B]������һ��Back to the last step");
	ch=getch();
	switch(ch)
	{
		case 69:system("cls");Easy();Ask(0,13);break;
		case 101:system("cls");Easy();Ask(0,13);break;
		case 78:system("cls");Normal();Ask(0,25);break;
		case 110:system("cls");Normal();Ask(0,25);break;
		case 68:system("cls");Difficult();Ask(0,24);break;
		case 100:system("cls");Difficult();Ask(0,24);break;
		case 66:system("cls");GameGuide();break;
		case 98:system("cls");GameGuide();break;
		default:system("cls");NewGame();break;     
	}
}

int Easy()
{
	void mapread1(int,int);
	int a,b,Step=0;
	int ch=0;
	mapread1(8,8);
	printf("Step:%d",Step);
	a=1;b=0;
	gotoxy(a,b);
	while(1)                                                                                     //�߼�����һ�£���λ���ܶ�
	{
		while (1)
		{
			if(ch=getch())     //�������ȡ
			{
				if(ch==72&&(n[b-1][a]==48||n[b-1][a]==57))  //up
				{
					n[b][a]=48;
					gotoxy(a,b);
					printf(" ");
					b--;
					n[b][a]=54;                       //*����Ϊ6
					gotoxy(a,b);
					printf("*");
					Step++;
					break;
				}
				if(ch==80&&(n[b+1][a]==48||n[b+1][a]==57))  //down
				{	
					n[b][a]=48;
					gotoxy(a,b);
					printf(" ");
					b++;
					n[b][a]=54;
					gotoxy(a,b);
					printf("*");
					Step++;
					break;
				}
				if(ch==75&&(n[b][a-1]==48||n[b][a-1]==57))   //left
				{
					n[b][a]=48;
					gotoxy(a,b);
					printf(" ");
					a--;
					n[b][a]=54;
					gotoxy(a,b);
					printf("*");
					Step++;
					break;
				}
				if(ch==77&&(n[b][a+1]==48||n[b][a+1]==57))  //right
				{
					n[b][a]=48;
					gotoxy(a,b);
					printf(" ");
					a++;
					n[b][a]=54;
					gotoxy(a,b);
					printf("*");
					Step++;
					break;
				}
			}
		}

		gotoxy(0,9);

		printf("Step:%d",Step);

		gotoxy(a,b);

		if(n[7][6]==54)
		{
			gotoxy(0,11);
			printf("successful");
			break;
		}
	}
	return Step;
}

int Normal()
{
	void mapread2(int,int);
	int a,b,Step=0;
	int ch=0;
	mapread2(21,20);
	printf("Step:%d",Step);
	a=7;b=0;
	gotoxy(a,b);
	while(1)                                                                                     //�߼�����һ�£���λ���ܶ�
	{
		while (1)
		{
			if(ch=getch())     //�������ȡ
			{
				if(ch==72&&(n[b-1][a]==48||n[b-1][a]==57))  //up
				{
					n[b][a]=48;
					gotoxy(a,b);
					printf(" ");
					b--;
					n[b][a]=54;                       //*����Ϊ6
					gotoxy(a,b);
					printf("*");
					Step++;
					break;
				}
				if(ch==80&&(n[b+1][a]==48||n[b+1][a]==57))  //down
				{	
					n[b][a]=48;
					gotoxy(a,b);
					printf(" ");
					b++;
					n[b][a]=54;
					gotoxy(a,b);
					printf("*");
					Step++;
					break;
				}
				if(ch==75&&(n[b][a-1]==48||n[b][a-1]==57))   //left
				{
					n[b][a]=48;
					gotoxy(a,b);
					printf(" ");
					a--;
					n[b][a]=54;
					gotoxy(a,b);
					printf("*");
					Step++;
					break;
				}
				if(ch==77&&(n[b][a+1]==48||n[b][a+1]==57))  //right
				{
					n[b][a]=48;
					gotoxy(a,b);
					printf(" ");
					a++;
					n[b][a]=54;
					gotoxy(a,b);
					printf("*");
					Step++;
					break;
				}
			}
		}

		gotoxy(0,22);

		printf("Step:%d",Step);

		gotoxy(a,b);

		if(n[20][14]==54)
		{
			gotoxy(0,23);
			printf("successful");
			break;
		}
	}
	return Step;
}

int Difficult()
{
	void mapread3(int,int);
	int a,b,Step=0;
	int ch=0;
	mapread3(20,20);
	printf("Step:%d",Step);
	a=17;b=0;
	gotoxy(a,b);
	while(1)                                                                                     //�߼�����һ�£���λ���ܶ�
	{
		while (1)
		{
			if(ch=getch())     //�������ȡ
			{
				if(ch==72&&(n[b-1][a]==48||n[b-1][a]==57))  //up
				{
					n[b][a]=48;
					gotoxy(a,b);
					printf(" ");
					b--;
					n[b][a]=54;                       //*����Ϊ6
					gotoxy(a,b);
					printf("*");
					Step++;
					break;
				}
				if(ch==80&&(n[b+1][a]==48||n[b+1][a]==57))  //down
				{	
					n[b][a]=48;
					gotoxy(a,b);
					printf(" ");
					b++;
					n[b][a]=54;
					gotoxy(a,b);
					printf("*");
					Step++;
					break;
				}
				if(ch==75&&(n[b][a-1]==48||n[b][a-1]==57))   //left
				{
					n[b][a]=48;
					gotoxy(a,b);
					printf(" ");
					a--;
					n[b][a]=54;
					gotoxy(a,b);
					printf("*");
					Step++;
					break;
				}
				if(ch==77&&(n[b][a+1]==48||n[b][a+1]==57))  //right
				{
					n[b][a]=48;
					gotoxy(a,b);
					printf(" ");
					a++;
					n[b][a]=54;
					gotoxy(a,b);
					printf("*");
					Step++;
					break;
				}
			}
		}

		gotoxy(0,21);

		printf("Step:%d",Step);

		gotoxy(a,b);

		if(n[19][2]==54)
		{
			gotoxy(0,22);
			printf("successful");
			break;
		}
	}
	return Step;
}

void Fight()                                        //���Ѿ���
{
	void Fightjust(int,int);
	int ch=0;
	int Easy();
	int Normal();
	int Difficult();
	int hang,lie;
	int A,B;
	lie=40;
	hang=10;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //white
	gotoxy(lie,hang);printf("Level:");hang++;hang++;
	gotoxy(lie,hang);printf("[E]��Easy");hang++;hang++;
	gotoxy(lie,hang);printf("[N]����Normal");hang++;hang++;
	gotoxy(lie,hang);printf("[D]����Difficult");hang++;hang++;
	gotoxy(lie,hang);printf("[B]������һ��Back to the last step");
	ch=getch();
	switch(ch)
	{
		case 69:system("cls");gotoxy(50,0);printf("����A�غ�");A=Easy();system("cls");gotoxy(50,0);printf("����B�غ�");gotoxy(45,1);printf("��ѡ����A��ͬ�ĵ�ͼ");B=Easy();Fightjust(A,B);break;
		case 101:system("cls");gotoxy(50,0);printf("����A�غ�");A=Easy();system("cls");gotoxy(50,0);printf("����B�غ�");gotoxy(45,1);printf("��ѡ����A��ͬ�ĵ�ͼ");B=Easy();Fightjust(A,B);break;
		case 78:system("cls");gotoxy(50,0);printf("����A�غ�");A=Normal();system("cls");gotoxy(50,0);printf("����B�غ�");gotoxy(45,1);printf("��ѡ����A��ͬ�ĵ�ͼ");B=Normal();Fightjust(A,B);break;
		case 110:system("cls");gotoxy(50,0);printf("����A�غ�");A=Normal();system("cls");gotoxy(50,0);printf("����B�غ�");gotoxy(45,1);printf("��ѡ����A��ͬ�ĵ�ͼ");B=Normal();Fightjust(A,B);break;
		case 68:system("cls");gotoxy(50,0);printf("����A�غ�");A=Difficult();system("cls");gotoxy(50,0);printf("����B�غ�");gotoxy(45,1);printf("��ѡ����A��ͬ�ĵ�ͼ");B=Difficult();Fightjust(A,B);break;
		case 100:system("cls");gotoxy(50,0);printf("����A�غ�");A=Difficult();system("cls");gotoxy(50,0);printf("����B�غ�");gotoxy(45,1);printf("��ѡ����A��ͬ�ĵ�ͼ");B=Difficult();Fightjust(A,B);break;
		case 66:system("cls");GameGuide();break;
		case 98:system("cls");GameGuide();break;
		default:system("cls");Fight();break;     
	}
}

void Fightjust(int A,int B)
{
	gotoxy(30,4);
	printf("�������:\n");
	if(A>B){gotoxy(30,5);printf("Bʤ��");Ask(30,7);}
	if(A<B){gotoxy(30,5);printf("Aʤ��");Ask(30,7);}
	if(A==B){gotoxy(30,5);printf("A,Bƽ");Ask(30,7);}
}

int dst[4][2] = {                                   //�����������
	-1,0,
	1,0,
	0,-1,
	0,1
};



void AutoPlayUI()                                                                   //�Զ����Ѷ�ѡ��UI
{
	void AutoEasy();
	void AutoNormal();
	void AutoDifficult();
	int ch=0;
	int hang,lie;
	lie=40;
	hang=10;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  //white
	gotoxy(lie,hang);printf("AutoPlay Level:");hang++;hang++;
	gotoxy(lie,hang);printf("[E]��Easy");hang++;hang++;
	gotoxy(lie,hang);printf("[N]����Normal");hang++;hang++;
	gotoxy(lie,hang);printf("[D]����Difficult");hang++;hang++;
	gotoxy(lie,hang);printf("[B]������һ��Back to the last step");
	ch=getch();
	switch(ch)
	{
		case 69:system("cls");AutoEasy();Ask(0,13);break;
		case 101:system("cls");AutoEasy();Ask(0,13);break; 
		case 78:system("cls");AutoNormal();Ask(0,25);break;
		case 110:system("cls");AutoNormal();Ask(0,25);break;
		case 68:system("cls");AutoDifficult();Ask(0,24);break;
		case 100:system("cls");AutoDifficult();Ask(0,24);break;
		case 66:system("cls");GameGuide();break;
		case 98:system("cls");GameGuide();break;
		default:system("cls");NewGame();break;     
	}
}

void AutoEasy()                                                  //�Զ��߼򵥺���
{
	void mapread1(int,int);
	void AutoEasyGo(int,int);
	mapread1(8,8);
	int Step=0;
	gotoxy(0,9);
	printf("Step:%d",Step);
	AutoEasyGo(0,1);
}

void AutoEasyGo(int x,int y)                                                //�Զ��߼�ִ�к���
{
	int a=1,b=0;
	int Step=0,flag=0;
	if(n[x][y]==57&&flag==0)                   //9���յ�
	{
		flag=1;
		printf("\n");
		gotoxy(a,b);                           //a���У�b����
		printf("*");
		Sleep(1000);
		gotoxy(a,b);
		printf(" ");
		while (1)
		{
			if(n[7][6]==54)                   //��֤�Ƿ����
			{
				flag=0;
				a=6;b=6;
				gotoxy(6,6);
				printf(" ");
				b++;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,9);
				printf("Successful");
				break;
			}
			if(n[b+1][a]==50||n[b+1][a]==57)               //down
			{
				gotoxy(a,b);
				printf(" ");
				b++;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,9);
				Step++;
				printf("Step:%d",Step);
				Sleep(100);
			}
			if(n[b][a+1]==50||n[b][a+1]==57)               //right
			{
				gotoxy(a,b);
				printf(" ");
				a++;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,9);
				Step++;
				printf("Step:%d",Step);
				Sleep(100);
			}
			if(n[b-1][a]==50||n[b-1][a]==57)               //up
			{
				gotoxy(a,b);
				printf(" ");
				b--;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,9);
				Step++;
				printf("Step:%d",Step);
				Sleep(100);
			}
			if(n[b][a-1]==50||n[b][a-1]==57)               //left
			{
				gotoxy(a,b);
				printf(" ");
				a--;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,9);
				Step++;
				printf("Step:%d",Step);
				Sleep(100);
			}
		}
	}

	for(int i=0;i<4;i++)//�ĸ�����
	{
		int nextx = x + dst[i][0];
		int nexty = y + dst[i][1];
		if (nextx >= 0 && nextx <= 8 && nexty >= 0 && nexty <= 8 && (n[nextx][nexty] != 49) && (n[nextx][nexty] != 50))//��·          ����2���߹���
		{
			n[x][y] = 50;                                  //���õ�ǰ��Ϊ�߹�
			AutoEasyGo(nextx, nexty);                      //��һ������
			n[x][y] = 52;                                  //�˳�������Ϊû���߹��������ڻ��ݽ��к�������ʱ������Ӱ���·��������     ����4������ͬ
		}
	}
}

void AutoNormal()                                                //�Զ��߳��溯��
{
	void mapread2(int,int);
	void AutoNormalGo(int,int);
	int Step=0;
	mapread2(21,20);
	gotoxy(0,21);
	printf("Step:%d",Step);
	AutoNormalGo(0,7);
}

void AutoNormalGo(int x,int y)
{
	int a=7,b=0;
	int Step=0,flag=0;
	if(n[x][y]==57&&flag==0)                   //9���յ�
	{
		flag=1;
		printf("\n");
		gotoxy(a,b);                           //a���У�b����
		printf("*");
		Sleep(1000);
		gotoxy(a,b);
		printf(" ");
		while (1)
		{
			if(n[20][14]==54)                   //��֤�Ƿ����
			{
				flag=0;
				a=14;b=19;
				gotoxy(14,19);
				printf(" ");
				b++;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,22);
				printf("Successful");
				break;
			}
			if(n[b+1][a]==50||n[b+1][a]==57)               //down
			{
				gotoxy(a,b);
				printf(" ");
				b++;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,21);
				Step++;
				printf("Step:%d",Step);
				Sleep(100);
			}
			if(n[b][a+1]==50||n[b][a+1]==57)               //right
			{
				gotoxy(a,b);
				printf(" ");
				a++;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,21);
				Step++;
				printf("Step:%d",Step);
				Sleep(100);
			}
			if(n[b-1][a]==50||n[b-1][a]==57)               //up
			{
				gotoxy(a,b);
				printf(" ");
				b--;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,21);
				Step++;
				printf("Step:%d",Step);
				Sleep(100);
			}
			if(n[b][a-1]==50||n[b][a-1]==57)               //left
			{
				gotoxy(a,b);
				printf(" ");
				a--;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,21);
				Step++;
				printf("Step:%d",Step);
				Sleep(100);
			}
		}
	}

	for(int i=0;i<4;i++)//�ĸ�����
	{
		int nextx = x + dst[i][0];
		int nexty = y + dst[i][1];
		if (nextx >= 0 && nextx <= 21 && nexty >= 0 && nexty <= 20 && (n[nextx][nexty] != 49) && (n[nextx][nexty] != 50))//��·          ����2���߹���
		{
			n[x][y] = 50;                                  //���õ�ǰ��Ϊ�߹�
			AutoNormalGo(nextx, nexty);                      //��һ������
			n[x][y] = 52;                                  //�˳�������Ϊû���߹��������ڻ��ݽ��к�������ʱ������Ӱ���·��������     ����4������ͬ
		}
	}
}

void AutoDifficult()                                             //�Զ������Ѻ���
{
	void mapread3(int,int);
	void AutoDifficultGo(int,int);
	int Step=0;
	mapread3(20,20);
	gotoxy(0,21);
	printf("Step:%d",Step);
	AutoDifficultGo(0,17);
}

void AutoDifficultGo(int x,int y)
{
	int a=17,b=0;
	int Step=0,flag=0;
	if(n[x][y]==57&&flag==0)                   //9���յ�
	{
		flag=1;
		printf("\n");
		gotoxy(a,b);                           //a���У�b����
		printf("*");
		Sleep(1000);
		gotoxy(a,b);
		printf(" ");
		while (1)
		{
			if(n[19][2]==54)                   //��֤�Ƿ����
			{
				flag=0;
				a=2;b=18;
				gotoxy(2,18);
				printf(" ");
				b++;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,22);
				printf("Successful");
				break;
			}
			if(n[b+1][a]==50||n[b+1][a]==57)               //down
			{
				gotoxy(a,b);
				printf(" ");
				b++;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,21);
				Step++;
				printf("Step:%d",Step);
				Sleep(100);
			}
			if(n[b][a+1]==50||n[b][a+1]==57)               //right
			{
				gotoxy(a,b);
				printf(" ");
				a++;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,21);
				Step++;
				printf("Step:%d",Step);
				Sleep(100);
			}
			if(n[b-1][a]==50||n[b-1][a]==57)               //up
			{
				gotoxy(a,b);
				printf(" ");
				b--;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,21);
				Step++;
				printf("Step:%d",Step);
				Sleep(100);
			}
			if(n[b][a-1]==50||n[b][a-1]==57)               //left
			{
				gotoxy(a,b);
				printf(" ");
				a--;
				n[b][a]=54;
				gotoxy(a,b);
				printf("*");
				gotoxy(0,21);
				Step++;
				printf("Step:%d",Step);
				Sleep(100);
			}
		}
	}

	for(int i=0;i<4;i++)//�ĸ�����
	{
		int nextx = x + dst[i][0];
		int nexty = y + dst[i][1];
		if (nextx >= 0 && nextx <= 20 && nexty >= 0 && nexty <= 20 && (n[nextx][nexty] != 49) && (n[nextx][nexty] != 50))//��·          ����2���߹���
		{
			n[x][y] = 50;                                  //���õ�ǰ��Ϊ�߹�
			AutoDifficultGo(nextx, nexty);                      //��һ������
			n[x][y] = 52;                                  //�˳�������Ϊû���߹��������ڻ��ݽ��к�������ʱ������Ӱ���·��������     ����4������ͬ
		}
	}
}

void Ask(int yy,int xx)                                                       //����һ�����ѯ��
{
	int ch;
	ch=0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
	gotoxy(yy,xx);printf("����һ����? Play this game again?\n");xx++;
	gotoxy(yy,xx);printf("��[Y]����һ�֣���[ESC]�˳���Ϸ Tap [Y] to play it again,Tap [ESC] to exit this game!\n");xx++;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	gotoxy(yy,xx);printf("���������ص���ҳ�� Tap other key to back main UI");xx++;
	ch=getch();
	switch(ch)
	{
		case 89:system("cls");GameGuide();break;
		case 121:system("cls");GameGuide();break;
		case 27:
			system("exit");
			gotoxy(yy,xx);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
			printf("�˳���Ϸ���ٰ�һ��ESC Tap again to exit game\n");
			break;
	}
}

void main()                                                        //��ҳ���������
{
	void GameGuide();                         //��ϷģʽUI
	void mainUI();                            //��ҳUI��д����
	int ch;                                   //ch UI����ѡ��
	PlaySound(TEXT("C:\\Users\\Herbert\\Desktop\\�ز�\\pp.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	mainUI();
	ch=getch();
	if(ch==13)                                //Tap "Enter"
	{
		system("cls");
		GameGuide();
	}
	if(ch==27)
	{
		system("cls");
		system("exit");
	}
	else
	{
		system("cls");
		main();
	}
	system("pause");
}