#ifndef SHOOT_H_INCLUDED
#define SHOOT_H_INCLUDED

typedef struct gulli gulli;
struct gulli{
	int x1 = 0, y1 = 0;
	bool gulliOn = false;
	
};
struct bossbullet{
	int xb = 0, yb = 0;
	bool bossshoot = false;
	bool setPosition = false;
};
int bosstotal = 20;
bossbullet bb[20];

int boss = 0;
int bx = 500, by = 450;
//int firestart = 0;
int totalBullet = 20;
gulli s[20];
int bbindex = 0;
int gulliIndex = 0;
void shoot(){
	for (int j = 0; j <totalBullet; j++){
		if (s[j].gulliOn == true && s[j].y1 <= 720){ s[j].y1 += 30; }
		if (s[j].y1 >= 720&&s[j].gulliOn==true){
			//s[j].y1 -=10 ;
			s[j].gulliOn = false;
		}

	}
	if (boss == 1){
		for (int i = 0; i <= bosstotal; i++){
			if (bb[i].setPosition){
				//printf("%d\n", bb[1].yb);
				if (bb[i].bossshoot == true && bb[i].yb >= 0){
					bb[i].yb -= 30;

				}

				if (bb[i].yb < 0 && bb[i].bossshoot == true){
					bb[i].bossshoot = false;
					bb[i].setPosition = false;
				}
			}
		}
	}
	
}
#endif