#include <stdio.h>

int jogox[5];
int jogoy[4];
int ganhou = 0;
char ver[2];
char jogo[35] = "1 / 2 / 3\n"
                "4 / 5 / 6\n"
                "7 / 8 / 9\n";

char substitui(){

    for(int i = 0; i<=30;i++){

        if(jogo[i] == ver[0]){

        jogo[i] = ver[1];

        }

    }

    return printf("%s", jogo);
}

int verificax(int j1,int j2,int j3){

    for(int ver1 = 0; ver1 < 5; ver1++ ){

        if(jogox[ver1] == j1){

            for(int ver2 = 0; ver2 < 5; ver2++){

                if(jogox[ver2] == j2){

                    for(int ver3 = 0; ver3 <5; ver3++){

                        if(jogox[ver3] == j3){

                            return printf("x ganhou");

                        }

                    }

                }

            }

        }

    }
    return 0;
}

int verificay(int j4,int j5,int j6){

    for(int ver1 = 0; ver1 < 5; ver1++ ){

        if(jogoy[ver1] == j4){

            for(int ver2 = 0; ver2 < 5; ver2++){

                if(jogoy[ver2] == j5){

                    for(int ver3 = 0; ver3 <5; ver3++){

                        if(jogoy[ver3] == j6){

                            ganhou = 1;

                            return printf("y ganhou");
                        }

                    }

                }

            }

        }

    }
    return 0;
}

int main() {

    int x = 0;
    int y = 0;

    printf("%s", jogo);

    for (int i = 0; i < 9; i++) {

        if (i % 2 == 0) {

            scanf("%d", &jogox[x]);

            ver[0] = jogox[x] + '0';
            ver[1] = 'x';

            substitui();

            x++;

            if(verificax(1,2,3)){return 0;}

            if(verificax(4,5,6)){return 0;}

            if(verificax(7,8,9)){return 0;}

            if(verificax(1,4,7)){return 0;}

            if(verificax(2,5,8)){return 0;}

            if(verificax(3,6,9)){return 0;}

            if(verificax(1,5,9)){return 0;}

            if(verificax(3,5,7)){return 0;}

        }
        if(i % 2 == 1){

            scanf("%d", &jogoy[y]);

            ver[0] = jogoy[y] + '0';
            ver[1] = 'O';

            substitui();

            y++;

            verificay(1,2,3);

            verificay(4,5,6);

            verificay(7,8,9);

            verificay(1,4,7);

            verificay(2,5,8);

            verificay(3,6,9);

            verificay(1,5,9);

            verificay(3,5,7);

            if(ganhou == 1){return 0;}

        }
    }


    return printf("deu velha");
}