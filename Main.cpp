#include<iostream>
#include<windows.h>
#include<thread>
#include<conio.h>
#include<time.h>
#include<algorithm>
#include "MyFunction.h"
#define ENTER 13
#define UP 72
#define DOWN 80
#define LEFT  75
#define RIGHT 77
#define PLAYER 'P'
#define ENEMY 'G'
#define SPACE 32
#define ESC 27
#define NOT_IMMORTAL_WALL '#'
#define MAX 26
#define DOOR 'O'
using namespace std;

class Main{
	
	public:
		Main(){
			srand(time(NULL));
			setWindowSize("51", "25");
			setFontSize(18, 36, 600);
			SetConsoleTitle("                                                                                                                                       || B O M B C A B E ||");
			mainMenu();
		}
		
		void backMenu(){
			changeCursorPosition(0, 6);
			printf("                                                  \n"); 
			printf("                                                  \n"); 
			setcolor(4);
			printf("               >> N E W   G A M E <<              \n");
			printf("                                                  \n"); 
			setcolor(15);
			printf("                 H I G H S C O R E                 \n"); 
			printf("                                                  \n"); 
			printf("                  S E T T I N G S                  \n"); 
			printf("                                                  \n"); 
			printf("                    C R E D I T                    \n"); 
			printf("                                                  \n"); 
			printf("                      E X I T                      \n"); 
			printf("                                                  \n"); 
			printf("                                                  \n"); 
			printf("                                        I N F O\n"); 
			printf("                                                  \n"); 
		}
		
		void mainMenu(){
			char key;
			PlaySound(TEXT("Assets/Songs/mainSong.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
			do{
				setWindowSize("51", "25");
				setFontSize(18, 36, 600);
				SetConsoleTitle("                                                                                                                                       || B O M B C A B E ||");
				moveExactCenter();
				printf("\n");
				int i = 0;
				printf("     %c%c%c", 200, 187, 201); cout << string(35, 205); printf("%c%c%c\n", 187, 201, 188);
				printf("    %c%c%c%c  %c%c%c  %c", 202, 187, 200, 185, 201, 205, 187, 218); setcolor(4); printf("*    *"); setcolor(7); printf("%c     %c%c%c    ", 191, 201, 186, 187); setcolor(4); printf("*"); setcolor(7); printf("%c      %c%c%c%c\n", 191, 204, 188, 201, 202);
				printf("     %c%c%c  %c%c%c %c%c%c %c%c%c %c%c    %c   %c%c%c %c%c %c%c  %c%c%c\n", 206, 205, 185, 204, 205, 185, 201, 202, 187, 201, 203, 187, 204, 187, 186, 201, 205, 187, 204, 187, 201, 187, 204, 205, 206);
				printf("    %c%c%c%c  %c%c%c %c%c%c %c%c%c %c%c    %c%c%c %c%c%c %c%c %c%c  %c%c%c%c\n", 203, 188, 201, 185, 200, 205, 188, 200, 205, 188, 186, 186, 186, 200, 188, 200, 186, 188, 200, 205, 185, 200, 188, 200, 205, 204, 187, 200, 203);
				printf("     %c%c%c", 201, 188, 200); cout << string(35, 205); printf("%c%c%c\n", 188, 200, 187);
				setcolor(4);
				printf("\n\n\t       >> N E W   G A M E <<");
				setcolor(15);
				printf("\n\n\t         H I G H S C O R E"); 
				printf("\n\n\t          S E T T I N G S"); 
				printf("\n\n\t            C R E D I T");
				printf("\n\n\t              E X I T\n\n\n");
				printf("\t\t\t\t\tI N F O");
				chooseMenu:
				int currMenu = 1;
				changeCursorPosition(36, 8);
				key = getch();
				while(key != ENTER){
					if(key == UP){
						if(currMenu == 1){
							changeCursorPosition(15, 8);
							setcolor(15);
							printf("   N E W   G A M E   ");
							changeCursorPosition(37, 19);
							setcolor(4);
							printf(">> I N F O <<");
							currMenu = 6;
							setcolor(15);
						}else if(currMenu == 2){
							changeCursorPosition(14, 10);
							setcolor(15);
							printf("   H I G H S C O R E   ");
							changeCursorPosition(15, 8);
							setcolor(4);
							printf(">> N E W   G A M E <<");
							currMenu--;
							setcolor(15);
						}else if(currMenu == 3){
							changeCursorPosition(15, 12);
							setcolor(15);
							printf("   S E T T I N G S   ");
							changeCursorPosition(14, 10);
							setcolor(4);
							printf(">> H I G H S C O R E <<");
							currMenu--;
							setcolor(15);
						}else if(currMenu == 4){
							changeCursorPosition(17, 14);
							setcolor(15);
							printf("   C R E D I T   ");
							changeCursorPosition(15, 12);
							setcolor(4);
							printf(">> S E T T I N G S <<");
							currMenu--;
							setcolor(15);
						}else if(currMenu == 5){
							changeCursorPosition(19, 16);
							setcolor(15);
							printf("   E X I T   ");
							changeCursorPosition(17, 14);
							setcolor(4);
							printf(">> C R E D I T <<");
							currMenu--;
							setcolor(15);
						}else{
							changeCursorPosition(37, 19);
							setcolor(15);
							printf("   I N F O   ");
							changeCursorPosition(19, 16);
							setcolor(4);
							printf(">> E X I T <<");
							currMenu = 5;
							setcolor(15);
						}
					}else if(key == DOWN){
						if(currMenu == 1){
							changeCursorPosition(15, 8);
							setcolor(15);
							printf("   N E W   G A M E   ");
							changeCursorPosition(14, 10);
							setcolor(4);
							printf(">> H I G H S C O R E <<");
							currMenu++;
							setcolor(15);
						}else if(currMenu == 2){
							changeCursorPosition(14, 10);
							setcolor(15);
							printf("   H I G H S C O R E   ");
							changeCursorPosition(15, 12);
							setcolor(4);
							printf(">> S E T T I N G S <<");
							currMenu++;
							setcolor(15);
						}else if(currMenu == 3){
							changeCursorPosition(15, 12);
							setcolor(15);
							printf("   S E T T I N G S   ");
							changeCursorPosition(17, 14);
							setcolor(4);
							printf(">> C R E D I T <<");
							currMenu++;
							setcolor(15);
						}else if(currMenu == 4){
							changeCursorPosition(17, 14);
							setcolor(15);
							printf("   C R E D I T   ");
							changeCursorPosition(19, 16);
							setcolor(4);
							printf(">> E X I T <<");
							currMenu++;
							setcolor(15);
						}else if(currMenu == 5){
							changeCursorPosition(19, 16);
							setcolor(15);
							printf("   E X I T   ");
							setcolor(4);
							changeCursorPosition(37, 19);
							printf(">> I N F O <<");
							currMenu++;
							setcolor(15);
						}else{
							changeCursorPosition(37, 19);
							setcolor(15);
							printf("   I N F O   ");
							changeCursorPosition(15, 8);
							setcolor(4);
							printf(">> N E W   G A M E <<");
							currMenu = 1;
							setcolor(15);
						}
					}
					key = getch();
				}
				/*
					currMenu
					1 As New Game
					2 As Highscore
					3 As Settings
					4 As Credit
					5 As Exit
					6 As Info
				*/
				switch(currMenu){
					case 1:
						newGame();
						break;
					case 2:
						scoreBoard();
						goto chooseMenu;
						break;
					case 3:
						settings();
						break;
					case 4:
						credit();
						break;
					case 5:
						exitMenu();
						goto chooseMenu;
						break;
					case 6:
						info();
						goto chooseMenu;
						break;
				}
			}while(true);
		}
		
		void clearMenu(){
			changeCursorPosition(15, 8);
			for(int i = 0; i < 22; i++) printf(" ");
			changeCursorPosition(15, 10);
			for(int i = 0; i < 20; i++) printf(" ");
			changeCursorPosition(15, 12);
			for(int i = 0; i < 21; i++) printf(" ");
			changeCursorPosition(15, 14);
			for(int i = 0; i < 20; i++) printf(" ");
			changeCursorPosition(15, 16);
			for(int i = 0; i < 20; i++) printf(" ");
			changeCursorPosition(35, 19);
			for(int i = 0; i < 15; i++) printf(" ");
		}
		
		void newGame(){
			clearMenu();
			changeCursorPosition(14, 11);
			printf("%c", 201); cout << string(10, 205); printf("%c", 202); cout << string(10, 205); printf("%c\n", 187);
			cout << string(14, 32); printf("%c", 186); cout << string(21, 32); printf("%c\n", 186);
			cout << string(14, 32); printf("%c", 186); cout << string(21, 32); printf("%c\n", 186);
			cout << string(14, 32); printf("%c", 186); cout << string(21, 32); printf("%c\n", 186);
			cout << string(14, 32); printf("%c", 200); cout << string(21, 205); printf("%c\n", 188);
			playerName = getName(); 
			transform(playerName.begin(), playerName.end(), playerName.begin(), ::toupper);
			printf("\n\n\n\n"); cout << string(16, 32); printf("Success Create Name");
			printf("\n\n"); cout << string(18, 32);
			string animation = "Creating A Map!";
			int len = animation.size();
			for(int i = 0; i < len; i++){
				cout << animation[i];
				Sleep(200);
			}
			Sleep(500);
			startGame();
		}
		
		void startGame(){
			setWindowSize("31", "35");
			setFontSize(30, 30, 600);
			char key;
			life = 2;
			score = 0;
			level = 1;
			while(life >= 0){
				system("cls");
				changeCursorPosition(12, 1);
				printf("Level %d\n\n", level);
				scanMap();
				printMap();
				changeCursorPosition(11, 24);
				printf("Score : %d", score);
				changeCursorPosition(6, 4);
				posY = 1; posX = 1;
				curX = 6; curY = 4;
				key = getch();
				bool levelUp = false;
				while(!levelUp){
					this_thread::sleep_for(chrono::milliseconds(100));
					key = getch();
					moveEnemy();
					if(key == UP){
						if(map[posY - 1][posX] == SPACE || map[posY - 1][posX] == DOOR|| map[posY-1][posX]==ENEMY){
							if(map[posY-1][posX]==ENEMY){
								gameOver();
							}
							else if(map[posY - 1][posX] == DOOR){
								level++;
								levelUp = true;
							}else{
								map[posY--][posX] = SPACE;
								map[posY][posX] = PLAYER;
								changeCursorPosition(curX, curY--);
								printf(" ");
								changeCursorPosition(curX, curY);
								printf("%c", PLAYER);
								changeCursorPosition(curX, curY);
							}
						}
					}else if(key == DOWN){
						if(map[posY + 1][posX] == SPACE || map[posY + 1][posX] == DOOR|| map[posY+1][posX]==ENEMY){
							if(map[posY+1][posX]==ENEMY){
								gameOver();
							}
							else if(map[posY + 1][posX] == DOOR){
								level++;
								levelUp = true;
							}else{
								map[posY++][posX] = SPACE;
								map[posY][posX] = PLAYER;
								changeCursorPosition(curX, curY++);
								printf(" ");
								changeCursorPosition(curX, curY);
								printf("%c", PLAYER);
								changeCursorPosition(curX, curY);
							}
						}
					}else if(key == LEFT){
						if(map[posY][posX - 1] == SPACE || map[posY][posX - 1] == DOOR|| map[posY][posX-1]==ENEMY){
							if(map[posY][posX-1]==ENEMY){
								gameOver();
							}
							else if(map[posY][posX - 1] == DOOR){
								level++;
								levelUp = true;
							}else{
								map[posY][posX--] = SPACE;
								map[posY][posX] = PLAYER;
								changeCursorPosition(curX, curY);
								curX--;
								printf(" ");
								changeCursorPosition(curX, curY);
								printf("%c", PLAYER);
								changeCursorPosition(curX, curY);
							}
						}
					}else if(key == RIGHT){
						if(map[posY][posX + 1] == SPACE || map[posY][posX + 1] == DOOR|| map[posY][posX+1]==ENEMY){
							if(map[posY][posX+1]==ENEMY){
								gameOver();
							}
							else if(map[posY][posX + 1] == DOOR){
								level++;
								levelUp = true;
							}else{
								map[posY][posX++] = SPACE;
								map[posY][posX] = PLAYER;
								changeCursorPosition(curX, curY);
								curX++;
								printf(" ");
								changeCursorPosition(curX, curY);
								printf("%c", PLAYER);
								changeCursorPosition(curX, curY);
							}
						}
					}else if(key == ESC){ //PAUSE A GAME
						gameOver();
					}else if(key == SPACE){ //PLACE A BOMB
						if(maxPlaceBomb > 0){
							map[posY][posX]=207;
							maxPlaceBomb--;
							thread plan(planABomb, posY, posX);
							plan.detach();
						}
					}
					if(life==0){
						gameOver();
					}
				}
			}
		}
		
		void scoreBoard(){
			int player=0,key;
			changeCursorPosition(6, 6);
			printf("\t\t     HIGHSCORE\n");
			changeCursorPosition(6, 7);
			printf("%c", 201); cout << string(2, 205); printf("%c",203); cout << string(34, 205); printf("%c\n", 187);
			printf("      %c",186); printf("NO"); printf("%c  NAMA             SCORE          %c\n",186,186);
			printf("      %c",204); printf("%c%c",205,205); printf("%c", 206); cout << string(34, 205); printf("%c\n", 185);
			printf("      %c01",186); printf("%c                                  %c\n",186,186);
			printf("      %c02",186); printf("%c                                  %c\n",186,186);
			printf("      %c03",186); printf("%c                                  %c\n",186,186);
			printf("      %c04",186); printf("%c                                  %c\n",186,186);
			printf("      %c05",186); printf("%c                                  %c\n",186,186);
			printf("      %c06",186); printf("%c                                  %c\n",186,186);
			printf("      %c07",186); printf("%c                                  %c\n",186,186);
			printf("      %c08",186); printf("%c                                  %c\n",186,186);
			printf("      %c09",186); printf("%c                                  %c\n",186,186);
			printf("      %c10",186); printf("%c                                  %c\n",186,186);
			printf("      %c", 200); cout << string(2, 205); printf("%c",202); cout << string(34, 205); printf("%c\n", 188);
			changeCursorPosition(46,19);
			for(int i = 0; i < 5; i++) printf(" ");
			char nama[50];
			int score;
			resetdata();
			FILE *file=fopen("Scoreboard/data.txt","r");
			while(fscanf(file,"%[^#]#%d\n",&nama,&score)!=EOF){
				insert(nama,score);
				player++;
			}
			
			fclose(file);
			int y=10;
			int x = 0;
			if(head!=NULL){
				struct node *curr=head;
				while(curr!=NULL){
					changeCursorPosition(10, y);
					printf("%s",curr->nama);
					changeCursorPosition(30, y);
					printf("%d",curr->score);
					curr=curr->next;
					changeCursorPosition(10, y++);
					x++;
					if(x == 10) break;
				}
			}
			changeCursorPosition(1,36);
			getch();
			backMenu();
		}
		
		
		void gameOver(){
			system("cls");
			setWindowSize("51", "25"); 
			setFontSize(18, 36, 600);       
			moveExactCenter();
			char over[11] = {"GAME  OVER"};
			changeCursorPosition(20, 12);
			for(int i = 0; i < 10; i++){
				printf("%c", over[i]);
				Sleep(100);
			}
			FILE *file=fopen("Scoreboard/data.txt","a");
			char pName[50];
			for(int i=0;i<playerName.length();i++){
				pName[i]=playerName[i];
			}
			fprintf(file,"%s#%d\n",pName,score);
			getch();
			getch();
			fclose(file);
			system("cls");
			mainMenu();
		}
		
		void exitMenu(){
			printf("\a");
			char key;
			changeCursorPosition(35, 19);
			for(int i = 0; i < 15; i++) printf(" ");
			changeCursorPosition(0, 8);
			setcolor(15);
			printf(" %c", 201); cout << string(47, 205); printf("%c\n", 187);
			printf(" %c                                               %c\n", 186, 186);
			printf(" %c    A R E  Y O U  S U R E                      %c\n", 186, 186);
			printf(" %c       Y O U  W A N T  T O  E X I T            %c\n", 186, 186);
			printf(" %c                        B O M B  C A B E  ?    %c\n", 186, 186);
			printf(" %c                                               %c\n", 186, 186);
			printf(" %c           Y E S              ", 186); setcolor(4); printf(">> N O <<"); setcolor(15); printf("        %c\n", 186); 
			printf(" %c                                               %c\n", 186, 186);
			printf(" %c", 200); cout << string(47, 205); printf("%c\n", 188);
			bool isExit = false;
			key = getch();
			while(key != ENTER){
				if(key == LEFT){
					if(isExit){
						changeCursorPosition(10, 14);
						setcolor(15);
						printf("   Y E S   ");
						changeCursorPosition(32, 14);
						setcolor(4);
						printf(">> N O <<");
						isExit = false;
					}else{
						changeCursorPosition(32, 14);
						setcolor(15);
						printf("   N O   ");
						changeCursorPosition(10, 14);
						setcolor(4);
						printf(">> Y E S <<");
						isExit = true;
					}
				}else if(key == RIGHT){
					if(!isExit){
						changeCursorPosition(32, 14);
						setcolor(15);
						printf("   N O   ");
						changeCursorPosition(10, 14);
						setcolor(4);
						printf(">> Y E S <<");
						isExit = true;
					}else{
						changeCursorPosition(10, 14);
						setcolor(15);
						printf("   Y E S   ");
						changeCursorPosition(32, 14);
						setcolor(4);
						printf(">> N O <<");
						isExit = false;
						
					}
				}
				key = getch();
			}
			switch(isExit){
				case true:
					exit(0);
				case false:
					break;
			}
			backMenu();
		}
		
		void credit(){
			system("cls");
			printf("\n\t\t     BOMB CABE\n\n");
			printf("\n\t\t   -- CREDITS --\n\n");
			printf("\t\t     KELOMPOK 4\n");
			printf("\t2440021230 - Juan Trilnardo Defrin\n");
			printf("\t2440023886 - Andros Clarence Chen\n");
			printf("\t2440065264 - Julian Alifirman Wardana\n");
			printf("\t2440064204 - Kevin Axel\n");
			printf("\t2440108824 - Stanislaus Fanuel Winoto\n");
			printf("\t2440046076 - Mirza Mauntanazar\n");
			printf("\n\n  \nMusic by  Toby Fox - Megalovania -  \n");
			
			printf("\n\n");
			
			getch();
			system("cls");
		}
		
		void info(){
			char key=LEFT;
			clearMenu();
			while (key != ENTER){
				if(key == RIGHT){
					changeCursorPosition(20, 6);
					for(int i = 0; i < 11; i++) printf(" ");
					changeCursorPosition(21, 8);
					for(int i = 0; i < 1; i++) printf(" ");
					changeCursorPosition(5, 9);
					for(int i = 0; i < 19; i++) printf(" ");
					changeCursorPosition(5, 12);
					for(int i = 0; i < 32; i++) printf(" ");
					changeCursorPosition(5, 15);
					for(int i = 0; i < 30; i++) printf(" ");
					changeCursorPosition(43, 19);
					for(int i = 0; i < 6; i++) printf(" ");
					
					changeCursorPosition(21, 6);
					printf("GAME INFO\n\n");
					printf("     1. The game consist of THREE levels\n");
					printf("\n\n");
					printf("     2. Destroy the walls (#) to find the portal\n");
					printf("\n\n");
					printf("     3. Each wall you destroyed, give you scores\n");
					printf("\n\n");
					printf("     4. Avoid the ghost to stay alive\n");
					printf("\n\n");
					changeCursorPosition(2, 19);
					printf("%c PREV",17);
					
				}else if(key == LEFT){
					changeCursorPosition(21, 6);
					for(int i = 0; i < 9; i++) printf(" ");
					changeCursorPosition(5, 8);
					for(int i = 0; i < 35; i++) printf(" ");
					changeCursorPosition(5, 11);
					for(int i = 0; i < 43; i++) printf(" ");
					changeCursorPosition(5, 14);
					for(int i = 0; i < 43; i++) printf(" ");
					changeCursorPosition(5, 17);
					for(int i = 0; i < 32; i++) printf(" ");
					changeCursorPosition(2, 19);
					for(int i = 0; i < 6; i++) printf(" ");
		
					changeCursorPosition(20, 6);			
					printf("HOW TO PLAY\n");
					changeCursorPosition(21, 8);
					printf("%c\n", 30);
					printf("     1. Move with  %c %c %c\n", 17, 31, 16);
					printf("\n\n");
					printf("     2. Press SPACE to place the bomb\n");
					printf("\n\n");
					printf("     3. Press ESC to exit the game\n");
					printf("\n\n");
					changeCursorPosition(43, 19);
					printf("NEXT %c",16);
				}
				key = getch();//ganti getch key right
//				if(key==ENTER){
//					break;
//				}
			}
			changeCursorPosition(20, 6);
			for(int i = 0; i < 11; i++) printf(" ");
			changeCursorPosition(2, 19);
			for(int i = 0; i < 47; i++) printf(" ");
			backMenu();
		}
		
		void settings(){
			clearMenu();
			changeCursorPosition(21, 6);
			printf("SETTINGS\n\n");
			printf("    PLAY SONG = %s", playSong ? "TRUE" : "FALSE");
			char key;
			key = getch();
			do{
				if(key == 32){
					if(playSong){
						playSong = false;
						changeCursorPosition(16, 8);
						printf("FALSE");
						PlaySound(NULL, 0, 0);
					}else{
						playSong = true;
						changeCursorPosition(16, 8);
						printf("TRUE \b");
						PlaySound(TEXT("Assets/Songs/mainSong.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
					}
				}else if(key == ESC){
					break;
				}
				key = getch();
			}while(true);
		}
};

int main(){
	new Main();
	return 0;
}
