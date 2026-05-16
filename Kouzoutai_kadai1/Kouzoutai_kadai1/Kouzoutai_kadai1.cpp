
#include <stdio.h>

// パラメーターの構造体の定義
struct Parameter {
	
	char name[10];
	int hp;
	int attack;
	int defense;
};
void DispParameter(Parameter param) {
	printf("NAME:%s ----------\n", param.name);
	printf("HP:%d\n", param.hp);
	printf("攻撃力:%d\n", param.attack);
	printf("防御力:%d\n", param.defense);
}
int main()
{
	Parameter Fast_param = {
	"mike",
	100,
	30,
	10,
    };

	DispParameter(Fast_param);

	Parameter Secand_param = {
     "jan",
	 100,
	 30,
	 10,
	};
	DispParameter(Secand_param);
	return 0;
}

