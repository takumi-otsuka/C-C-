#include "BattleProcess.h"
#include "DxLib.h"
#include "KeyFlame.h"

void BattleProcess(int *SelectNum,Enemy *MonsterCopyData,MainCharacter *Hero1,char *AllKey,int *EnemyAllNumber,tatakaimenu *list,int *EnemyNumber,int *Keyflame,int tatakauMenuflg,int *EnemySelect){
	int i;

	switch (*SelectNum) {
	case 0://たたかうのとき
		if (AllKey[KEY_INPUT_RETURN] == 1) {
			MonsterCopyData[*EnemySelect].HP = MonsterCopyData[*EnemySelect].HP - Hero1[0].ATTACK;
		}
		break;
	case 1://じゅもんのとき
		break;
	case 2://とくぎのとき
		break;
	case 3://どうぐのとき
		break;
	case 4://にげるのとき
		break;
	case 5://さくせんのとき
		break;
	default:
		break;
	}
}