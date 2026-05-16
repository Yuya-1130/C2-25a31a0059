// kouzoutai.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>

// 構造体「パラメーター型」を定義する
struct Parameter{
    int   hp;     // HP
    int   mp;     // MP
    char  speed;  // 素早さ
    int   attack; // 攻撃力
    int   defense;// 防御力
    float magic;  // 魔法
};


// ---------------------------------------------------------
/**
 * @brief   各パラメータを表示する関数
 * @param   hp      HP
 * @param   mp      MP
 * @param   speed   素早さ
 * @param   attack  攻撃力
 * @param   defense 防御力
 * @param   magic   魔力
 */
void DispParameter(Parameter param)
{
    printf("HP:%d\n", param.hp);
    printf("MP:%d\n", param.mp);
    printf("素早さ:%c\n", param.speed);
    printf("攻撃力:%d\n", param.attack);
    printf("防御力:%d\n", param.defense);
    printf("魔力:%2.1f\n", param.magic);
}

// ---------------------------------------------------------
/**
 * @brief   main 関数
 */
int main()
{
    Parameter player_param = { // パラメーター型の変数を宣言する
        100,50,'A',11,15,20.5f,
    };
   /* Parameter player_param;
    player_param.hp = 100;
    player_param.mp = 50;
    player_param.speed = 'A';
    player_param.attack = 11;
    player_param.defense = 15;
    player_param.magic = 20.5;*/

    // プレイヤーのパラメーター表示
    DispParameter(player_param);

    Parameter enemy_param;
    enemy_param.hp = 110;
    enemy_param.mp = 20;
    enemy_param.speed = 'B';
    enemy_param.attack = 30;
    enemy_param.defense = 1;
    enemy_param.magic = 0;

    DispParameter(enemy_param);

    /*int player_hp = 100;
    int player_mp = 50;
    char player_speed = 'A';
    int player_attack = 11;
    int player_defense = 15;
    float player_magic = 20.5;*/

    // プレイヤーのパラメータ表示
   // DispParameter(player_hp, player_mp, player_speed, player_attack, player_defense, player_magic);

  /*  int enemy_hp = 110;
    int enemy_mp = 20;
    char enemy_speed = 'B';
    int enemy_attack = 30;
    int enemy_defense = 1;
    float enemy_magic = 0;*/

    // 敵のパラメータ表示
  //  DispParameter(enemy_hp, enemy_mp, enemy_speed, enemy_attack, enemy_defense, enemy_magic);

    Parameter p;
    int parameter_size = sizeof(p);
    printf("Parameter型変数のサイズは %d", parameter_size);

    return 0;
}