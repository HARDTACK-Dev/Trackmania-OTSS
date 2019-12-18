#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


#define COL                   GetStdHandle(STD_OUTPUT_HANDLE)        							// 콘솔창의 핸들정보 받기

#define BLACK                SetConsoleTextAttribute(COL, 0x0000);        						// 검정색  
#define DARK_BLUE         SetConsoleTextAttribute(COL, 0x0001);       							// 파란색  
#define GREEN                SetConsoleTextAttribute(COL, 0x0002);        						// 녹색    
#define BLUE_GREEN        SetConsoleTextAttribute(COL, 0x0003);       							// 청녹색  
#define BLOOD               SetConsoleTextAttribute(COL, 0x0004);        						// 검붉은색
#define PURPLE               SetConsoleTextAttribute(COL, 0x0005);        						// 보라색  
#define GOLD                 SetConsoleTextAttribute(COL, 0x0006);        						// 금색    
#define ORIGINAL            SetConsoleTextAttribute(COL, 0x0007);        						// 밝은 회색 (ORIGINAL CONSOLE COLOR)
#define GRAY                 SetConsoleTextAttribute(COL, 0x0008);        						// 회색    
#define BLUE                  SetConsoleTextAttribute(COL, 0x0009);       						// 파란색  
#define HIGH_GREEN       SetConsoleTextAttribute(COL, 0x000a);        							// 연두색  
#define SKY_BLUE           SetConsoleTextAttribute(COL, 0x000b);        						// 하늘색  
#define RED                   SetConsoleTextAttribute(COL, 0x000c);       						// 빨간색  
#define PLUM                SetConsoleTextAttribute(COL, 0x000d);       						// 자주색  
#define YELLOW             SetConsoleTextAttribute(COL, 0x000e);        						// 노란색  
#define WHITE                SetConsoleTextAttribute(COL, 0x000f);        						// 흰색    

#define WHITE_MODE 			system("color F0");


#define _CRT_SECURE_NO_WARNINGS																	//fopen 컴파일 에러방지 


void dedicated_cfg();																				//dedicated_cfg 초기화 


int main()
{
	SetConsoleTitle("Trackmania OneType Server Setup [1.0]");
	
	int ESC;																						//뒤로 빠져나가기(메뉴들)
	
	
	int MAIN_INPUT=-1;																				//1.메인화면 메뉴숫자 선택 
	
	int SETTING_INPUT= -1;																			//3.설정메뉴 숫자 선택 
	int SETTING_COLOR= -1;																			//3.설정 -> 콘솔색상 
	int SETTING_RESET= -1;																				//3.설정 -> 리셋 
	
	
	int SERVERLIST_QUIT;																				//2번 ServerList 나가기 
	int MORE_QUIT; 																					//4번 MORE 나가기 
	
	
	
	
	
	MAIN_SCREEN:																					//메인메뉴로 goto 
	system("cls");
	
	
	
	
	
	RED COL;
	printf("[←]ESC");
	ORIGINAL COL;
	
	printf("\n\n");
	printf("					┌─────────────────────────────┐ \n");
	printf(" 					│   TM One Type Server Setup  │ \n");						
	printf("					└─────────────────────────────┘ \n");
	printf("						      	      v1.0(Beta)\n");
	printf("							\n\n");
	printf("					 ──────────────────────────────\n");
	printf("					       1. Setup New Server\n\n");
	printf("					       2. Server List\n\n");
	printf("					       3. Settings\n\n");
	printf("					       4. More\n");
	printf("					 ──────────────────────────────\n\n");
	
	printf("					  =>");
	
	do
	{
		MAIN_INPUT = getch()-'0';	
		
		if(MAIN_INPUT == -21)																//esc를 눌렀을 경우 
			return 0;
	}while(MAIN_INPUT < 1 || MAIN_INPUT > 4);
	printf("%d", MAIN_INPUT);
	
	
	
	//																1번 																									 
	if(MAIN_INPUT == 1)
		{
			system("cls"); 
			
			RED COL;
			printf("[←]ESC");
			ORIGINAL COL;
		}
		
		
	//																2번																										 
	else if(MAIN_INPUT == 2)
		{
			system("cls"); 
			
			RED COL;
			printf("[←]ESC");
			ORIGINAL COL;
			
			do{
				SERVERLIST_QUIT = getch();
			}while(SERVERLIST_QUIT != 27);
				 goto MAIN_SCREEN;
			
		}
		
		
	//																3번																										 
	else if(MAIN_INPUT == 3)
		{
			system("cls");
			
			printf("\n						 	SΞTINGS\n");
			printf("────────────────────────────────────────────────────────────");
			printf("────────────────────────────────────────────────────────────\n\n");
			
			
			printf("					     1. Console Color  - ");
			WHITE COL;
			printf("  Default \n");
			ORIGINAL COL;
			
			RED COL;
			printf("\n\n					      9. Reset Server Files    \n\n");
			ORIGINAL COL;
			printf("						=>");
			
			do
			{
				SETTING_INPUT = getch()-'0';
			}while(SETTING_INPUT < 1 || SETTING_INPUT > 9);
			printf("%d", SETTING_INPUT);
			
			if(SETTING_INPUT ==1)
			{
				WHITE_MODE;
				goto MAIN_SCREEN;
			}	
			
			if(SETTING_INPUT == 9)
			{
				system("cls");
				printf("\n						 	SΞTINGS\n");
				printf("────────────────────────────────────────────────────────────");
				printf("────────────────────────────────────────────────────────────\n\n");
				
				RED COL;
				printf("					  If you Reset the Server, You can't revert!    \n\n");
				printf("					      	  Are You Sure? (y/n)    \n\n");
				ORIGINAL COL;
				printf("					   =>");
				
				do
				{
					SETTING_RESET = getche()-0;
					if(SETTING_RESET == 'n' || SETTING_RESET == 'N')
						goto MAIN_SCREEN;
					
					if(SETTING_RESET == 'y' || SETTING_RESET == 'Y')
					{
					
						system("cls");
						dedicated_cfg();																//dedicated_cfg 함수로 이동
						
						
					}
						
				}while(SETTING_RESET != 9999); 														//다른키는 입력받지 않으려고! 
			} 
						
		}
		//																4번																										 
		if(MAIN_INPUT == 4)
			{
				system("cls");
				
				RED COL;
				printf("\n[←]ESC");
				ORIGINAL COL;
			
				printf("						 	INFOMATION\n");
				printf("────────────────────────────────────────────────────────────");
				printf("────────────────────────────────────────────────────────────");
			
				printf("\n\n						Developer : ");
				GREEN COL;	
				printf("Hardtack\n");
				ORIGINAL COL;
				printf("						──────────────────────\n");
	
			
				printf("\n			 			Dev Lang : ");
				SKY_BLUE COL;
				printf("C (GCC 4.9.2)\n");
				ORIGINAL COL;
			
				printf("\n			 			Version : ");
				RED COL;
				printf("1.0 (Beta)\n");
				ORIGINAL COL;
			
				printf("\n			 			Server Version : ");
				GRAY COL;
				printf("TMNF");
				ORIGINAL COL;

				printf("\n\n────────────────────────────────────────────────────────────");
				printf("────────────────────────────────────────────────────────────");
				
				printf("\n\n\n\n					If you want to Contact Me Or Report Bugs,");
			
				GRAY COL;
				printf("\n\n						Discord : ");
				ORIGINAL COL;
				printf("Hardtack#1342  ");
			
				GRAY COL;
				printf("\n\n						Email : ");
				ORIGINAL COL;
				printf("rjsdn827@gmail.com  \n\n\n\n\n\n\n");
			
				do{
					MORE_QUIT = getch();
				}while(MORE_QUIT != 27);
				 goto MAIN_SCREEN;
			
				system("pause>null");
			}
			

}



//																dedicated_cfg함수 시작																			

void dedicated_cfg()
{
			FILE *fp; 																																//파일 포인터
			
			fp = fopen("TrackmaniaServer_2011-02-21\\GameData\\Config\\dedicated_cfg.txt", "wt");
			if(fp == NULL)
			{
				printf("\n\n				 Reset Dedicated_cfg.txt -");
				RED COL;
				printf("  Failed!");
				Sleep(5);
				ORIGINAL COL;
				return 0;
			 } 
			 else
			 {
			 	printf("\n\n				  Reset Dedicated_cfg.txt -");
				BLUE COL;
				printf("  Done!");
				_sleep(5000);
			 	
			 
			 
			 fprintf(fp, "	<?xml version=\"1.0\" encoding=utf-8\" ?> \n"); 													//"붙일때 /를 앞에 붙여서 활성화
			 fprintf(fp, "\n");																						  
			 fprintf(fp, "<dedicated> \n");																			  	
			 fprintf(fp, "	<authorization_levels> \n");
			 fprintf(fp, "		<level> \n");
			 fprintf(fp, "			<name>SuperAdmin</name> \n");
			 fprintf(fp, "			<password>SuperAdmin</password> \n");
			 fprintf(fp, "		</level> \n");
			 fprintf(fp, "		<level> \n");
			 fprintf(fp, "			<name>Admin</name> \n");
			 fprintf(fp, "			<password>Admin</password> \n");
			 fprintf(fp, "		</level> \n");
			 fprintf(fp, "		<level> \n");
			 fprintf(fp, "			<name>User</name> \n");
			 fprintf(fp, "			<password>User</password> \n");
			 fprintf(fp, "		</level>\n ");
			 fprintf(fp, "	</authorization_levels> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "	<masterserver_account> \n");
			 fprintf(fp, "		<login></login> \n");
			 fprintf(fp, "		<password></password> \n");
			 fprintf(fp, "		<validation_key></validation_key> \n");
			 fprintf(fp, "	</masterserver_account> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "	<server_options> \n");
			 fprintf(fp, "		<name></name> \n");
			 fprintf(fp, "		<comment></comment>\n");
			 fprintf(fp, "		<hide_server>0</hide_server>					<!-- value is 0 (always shown), 1 (always hidden), 2 (hidden from nations) --> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "		<max_players>32</max_players> \n");
			 fprintf(fp, "		<password></password> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "		<max_spectators>32</max_spectators> \n");
			 fprintf(fp, "		<password_spectator></password_spectator> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "		<ladder_mode>forced</ladder_mode>				<!-- value between 'inactive', 'forced' (or '0', '1') --> \n");
			 fprintf(fp, "		<ladder_serverlimit_min>0</ladder_serverlimit_min>		<!-- Those values will be clamped to the limits authorized on http://official.trackmania.com/tmf-ladderserver/ --> \n");
			 fprintf(fp, "		<ladder_serverlimit_max>50000</ladder_serverlimit_max> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "		<enable_p2p_upload>True</enable_p2p_upload> \n");
			 fprintf(fp, "		<enable_p2p_download>True</enable_p2p_download> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "		<callvote_timeout>60000</callvote_timeout> \n");			 
			 fprintf(fp, "		<callvote_ratio>0.5</callvote_ratio>				<!-- default ratio. value in [0..1], or -1 to forbid. --> \n");
			 fprintf(fp, "		<callvote_ratios> \n");
			 fprintf(fp, "			<voteratio command=\"Ban\" ratio=\"0.65\"/> \n");
			 fprintf(fp, "			<!-- commands can be \"Ban\", \"Kick\", \"ChallengeRestart\", \"NextChallenge\", ... --> \n");
			 fprintf(fp, "		</callvote_ratios> \n");
			 fprintf(fp, "\n");	
			 fprintf(fp, "		<allow_challenge_download>True</allow_challenge_download> \n");
			 fprintf(fp, "		<autosave_replays>False</autosave_replays> \n");
			 fprintf(fp, "		<autosave_validation_replays>False</autosave_validation_replays> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "		<referee_password></referee_password> \n");
			 fprintf(fp, "		<referee_validation_mode>0</referee_validation_mode>		<!-- value is 0 (only validate top3 players),  1 (validate all players) --> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "		<use_changing_validation_seed>False</use_changing_validation_seed> \n");
			 fprintf(fp, "	</server_options> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "	<system_config> \n");
			 fprintf(fp, "		<connection_uploadrate>512</connection_uploadrate>		<!-- Kbps (kilo bits per second) --> \n");
			 fprintf(fp, "		<connection_downloadrate>8192</connection_downloadrate>		<!-- Kbps --> \n");
			 fprintf(fp, "\n");
		 	 fprintf(fp, "	<force_ip_address></force_ip_address> \n");
		 	 fprintf(fp, "		<server_port>2350</server_port> \n");
			 fprintf(fp, "		<server_p2p_port>3450</server_p2p_port> \n");
			 fprintf(fp, "		<client_port>0</client_port> \n");
			 fprintf(fp, "		<bind_ip_address></bind_ip_address> \n");
			 fprintf(fp, "		<use_nat_upnp></use_nat_upnp> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "		<p2p_cache_size>600</p2p_cache_size> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "		<xmlrpc_port>5000</xmlrpc_port> \n");
			 fprintf(fp, "		<xmlrpc_allowremote>False</xmlrpc_allowremote>			<!-- If you specify an ip adress here, it'll be the only accepted adress. this will improve security. --> \n");
			 fprintf(fp, "\n");		
			 fprintf(fp, "		<blacklist_url></blacklist_url> \n");
			 fprintf(fp, "		<guestlist_filename></guestlist_filename> \n");
			 fprintf(fp, "		<blacklist_filename></blacklist_filename> \n");
			 fprintf(fp, "\n");		
			 fprintf(fp, "		<packmask>stadium</packmask> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "		<allow_spectator_relays>False</allow_spectator_relays> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "		<!-- <minimum_client_build>2009-10-01</minimum_client_build> --> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "		<!-- <disable_coherence_checks>laps</disable_coherence_checks> --> \n");
			 fprintf(fp, "\n");
			 fprintf(fp, "		<use_proxy>False</use_proxy> \n");
			 fprintf(fp, "		<proxy_login></proxy_login> \n");
			 fprintf(fp, "		<proxy_password></proxy_password> \n");
			 fprintf(fp, "	</system_config> \n");
			 fprintf(fp, "</dedicated> \n");
			 
			fclose(fp);
			
			printf("\n :o");
			}
} 

 









