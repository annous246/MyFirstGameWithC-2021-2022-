
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<process.h>
#include<windows.h>
#include<MMsystem.h>
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "shlwapi.lib")


int dk=0;
void affichage(int n,char m[][8]){
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		printf("%c\t",m[i][j]);
	
	}
	printf("\n\n");
}}





void affichageh(int n,char m[],int s){

	printf("\n\n");
	printf("HP  :   ");
	for(int i=0;i<n;i++){
		printf("%c  ",m[i]);}	
		
printf("  |  \t score is : -->  %d",s);printf("\n\n");}

int breaker(int n){
	if(n==0){
		return 1;
	}
}




void checker(int s,int n){
	if(s==40){
		PlaySound("win SFX",NULL,SND_ASYNC);
		printf(" YOU WON !");
		printf(" Good Game");
	}
	else if(n==0){
		printf("you lost ,good luck next time");
		dk=0;
    }}
    






int outer(int s){
	if(s==40){
		return 1;
	}
	return 0;
}











void movectr(char mat[][8],int i,int j,char x,char ht[3] ,int s,int ok,int n,int k){
	dk=1;

	switch(n){
		    case(3):system("Color 7");break;
			case(2):system("Color 6");break;
			case(1):system("Color 4");break;
		}
	if(mat[i][j]=='o'){
	
		PlaySound("psfx",NULL,SND_ASYNC);
		
		int rd1=rand()%10;
		int rd2=rand()%10;
		s+=10;
		mat[abs(rd1-2)][abs(rd2-2)]='o';
		

}

	
	if(k==1){
		
	   if(i%2!=0)	{
	   	
	   for(int i=0;i<8;i++){
			mat[3][i]='X';
			mat[i][3]='.';}
		}
		else{
		for(int i=0;i<8;i++){
			mat[i][3]='X';
			mat[3][i]='.';
		}}
		if (mat[i][j]=='I'){
			k=5;
		}
			mat[1][7]='I';
	}

		if (mat[i][j]=='X'){
		n-- ;
		PlaySound("error",NULL,SND_ASYNC);
	}
	
if(n!=0){
mat[i][j]='8';}

else{
	mat[i][j]='.';
	dk=0;
	
}

		system("cls");
		
	printf("\t\tWELCOME TO CYBERMONSTER\n");
affichageh(n,ht,s);
printf("\n\n\n\n\ngive pos\n");
affichage(8,mat);
scanf("%c",&x);

checker(s,n)
;
breaker(n);




  if(outer(s)!=1&&n!=0){
  	dk=0;
	switch(x){
		
		case('q'): if(j>0){mat[i][j]='.';movectr(mat,i,j-1,x,ht,s,ok,n,k);}else {
			movectr(mat,i,j,x,ht,s,ok,n,k)
		;}break;
		case('d'):if(j!=7){mat[i][j]='.';movectr(mat,i,j+1,x,ht,s,ok,n,k);}else {
			movectr(mat,i,j,x,ht,s,ok,n,k);
		}break;
		case('s'):if(i!=7){mat[i][j]='.';movectr(mat,i+1,j,x,ht,s,ok,n,k);}else {
			movectr(mat,i,j,x,ht,s,ok,n,k);
		}break;
		case('z'):if(i>0){mat[i][j]='.';movectr(mat,i-1,j,x,ht,s,ok,n,k);}else {
			movectr(mat,i,j,x,ht,s,ok,n,k);
		}break;
		default:movectr(mat,i,j,x,ht,s,ok,n,k);break;}}
		
		mat[i][j]='.';
}




















int main(){
	char mat[8][8],p,rep='8';
		char ht[3];
		
	char ma[11][11];
	
	

	
	
	
	
	
	
	
	
	
	/*loading screen*/
	for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
           ma[i][j]=' ';
          
    }}
    int k=0;
    int l=0;
    do{
    	if(k==6){
    		for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
           ma[i][j]=' ';
          
    }}
    k=0;
    l++;
		}
		
	ma[5+k][5+k]='X';
	ma[5][5+k]='X';
	ma[5+k][5]='X';
	ma[5+k][5-k]='X';
	ma[5-k][5-k]='X';
	ma[5-k][5]='X';
	ma[5][5-k]='X';
	ma[5-k][5+k]='X';
	ma[5][2]='L';
	ma[5][3]='O';
	ma[5][4]='A';
	ma[5][5]='D';
	ma[5][6]='I';
	ma[5][7]='N';
	ma[5][8]='G';
	
	ma[5][9]='|';
	ma[5][1]='|';
	ma[4][1]='[';
	ma[6][1]='[';
	ma[6][2]='_';
	ma[6][3]='_';
	ma[6][4]='_';
	ma[6][5]='_';
	ma[6][6]='_';
	ma[6][7]='_';
	ma[6][8]='_';
	ma[6][9]=']';
	ma[4][2]='_';
	ma[4][3]='_';
	ma[4][4]='_';
	ma[4][5]='_';
	ma[4][6]='_';
	ma[4][7]='_';
	ma[4][8]='_';
	ma[4][9]=']';
	
	k++;
  
	for(int i=0;i<50000000;i++);
	for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
            printf("\t%c",ma[i][j]);
          
    }printf("\n\n");}
	}while(l!=3);
	for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
           ma[i][j]=' ';}}
	ma[5][2]=' ';
	ma[5][3]='D';
	ma[5][4]='O';
	ma[5][5]='N';
	ma[5][6]='E';
	ma[5][7]=' ';
	ma[5][8]='!';
	ma[5][9]='|';
	ma[5][1]='|';
	ma[4][1]='[';
	ma[6][1]='[';
	ma[6][2]='_';
	ma[6][3]='_';
	ma[6][4]='_';
	ma[6][5]='_';
	ma[6][6]='_';
	ma[6][7]='_';
	ma[6][8]='_';
	ma[6][9]=']';
	ma[4][2]='_';
	ma[4][3]='_';
	ma[4][4]='_';
	ma[4][5]='_';
	ma[4][6]='_';
	ma[4][7]='_';
	ma[4][8]='_';
	ma[4][9]=']';
	for(int i=0;i<11;i++){
       for(int j=0;j<11;j++){
            printf("\t%c",ma[i][j]);
          
    }printf("\n\n");}
	for(int i=0;i<500000000;i++);












	
do{		
	for(int i=0;i<3;i++){
		ht[i]=(char)3;
	}
	for(int i=0;i<8;i++){
	for(int j=0;j<8;j++){
	mat[i][j]='.';
	
	}}

	int k=4;

do{
		
k--;
	switch(k){
	case(3):
	do{
		
		PlaySound("lvl SFX",NULL,SND_ASYNC);
	printf("\nLEVEL 1\n");
	mat[0][0]='8';
	mat[5][0]='o';
	mat[5][5]='o';
	mat[4][7]='X';
	mat[4][6]='X';
	mat[3][7]='X';
movectr(mat,0,0,'g',ht,0,0,3,k);}while(dk==0);break;



	case(2):
do{
		PlaySound("lvl SFX",NULL,SND_ASYNC);
	printf(" \nLEVEL 2\n");
	mat[0][0]='8';
	mat[5][0]='o';
	mat[5][5]='o';
	mat[5][1]='X';
	mat[4][1]='X';
	mat[4][0]='X';
	mat[6][1]='X';
	mat[3][3]='X';
	mat[2][2]='X';
movectr(mat,0,0,'g',ht,0,0,2,k);}while(dk==0);break;

	case(1):
		PlaySound("lvl SFX",NULL,SND_ASYNC);
	printf("\nFinal level: 3\n");
	mat[0][0]='8';
	mat[5][0]='o';
	mat[5][5]='o';
	mat[4][7]='X';
	mat[4][6]='X';
	mat[3][7]='X';
	mat[5][7]='X';
	mat[4][4]='X';
	mat[6][7]='X';
	mat[2][7]='X';
	mat[7][1]='X';
	mat[0][1]='X';
movectr(mat,0,0,'g',ht,0,0,1,k);break;
default:break;


}

}while(k>1);

do{

printf("play again?");
printf("\n 1:yes  2:no");
rep=getchar();}while(rep!='1' && rep!='2');
}while(rep=='1');

		system("\\cls");
int w=0;

		PlaySound("cbp",NULL,SND_ASYNC);

do{
w++;
for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
           ma[i][j]=' ';}}
	ma[5][2]=' ';
	ma[5][2]='I';
	ma[5][3]='N';
	ma[5][4]='S';
	ma[5][5]='E';
	ma[5][6]='R';
	ma[5][7]='T';
   	ma[5][8]=' ';
	if(w%2==0){
   system("Color 6F");
	ma[5][8]='©';}
	else{
	 system("Color 2F");
	}
	puts(" _________        ___.                       _____                          __                ");
puts(" \\_   ___ \\___.__.\\_ |__   ___________      \\     \\   ____   ____   _______/  |_  ___________ ");
puts(" /    \\  \\<   |  | | __ \\_/ __ \\_  __ \\    /  \\ /  \\ /  _ \\ /    \\ /  ___/\\   __\\/ __ \\_  __ \\ ");
puts("\\     \\___\\___  | | \\_\\ \\  ___/|  | \\/   /    Y    (  <_> )   |  \\___ \\  |  | \\  ___/|  | \\/");
puts(" \\______  / ____| |___  /\\___  >__|       \\____|__  /\\____/|___|  /____  > |__|  \\___  >__|   ");
     puts("         \\/\\/         \\/     \\/                  \\/           \\/     \\/           \\/       ");
	ma[5][9]='|';
	ma[5][1]='|';
	ma[4][1]='[';
	ma[6][1]='[';
	ma[6][2]='_';
	ma[6][3]='_';
	ma[6][4]='_';
	ma[6][5]='_';
	ma[6][6]='_';
	ma[6][7]='_';
	ma[6][8]='_';
	ma[6][9]=']';
	ma[4][2]='_';
	ma[4][3]='_';
	ma[4][4]='_';
	ma[4][5]='_';
	ma[4][6]='_';
	ma[4][7]='_';
	ma[4][8]='_';
	ma[4][9]=']';
	for(int i=0;i<11;i++){
       for(int j=0;j<11;j++){
            printf("\t%c",ma[i][j]);
          
    }printf("\n\n");}
	for(int i=0;i<500000000;i++);}while(1==1);
	return 0;

}
