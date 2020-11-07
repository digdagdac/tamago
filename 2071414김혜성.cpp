#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 타마고치 가즈아
// 이 게임은 타마고치 겜으로 10분만에 기획했습니다
//자세한 기획안은 아래 드라이브에서 확인해주세요. https://drive.google.com/file/d/12bhaaOg9gkl6jh9wzg6i6nWDFN5ineqv/view?usp=sharing
//이겜의 핵심 value값은 100일 동안 배고픔 목마름 청결도 멘탈이라는 값들을 지키면서 알을 부화시키는게 목적입니다. 
int main()
{
    int hungry=50; //배고픔
    int drink=50; //목마름
    int clear=50; //청결도 
    int mental = 50; //멘탈
    int money = 10000; //소지금액

    int day = 1; //플레이 날짜를 의미합니다
    
    int x, y, z,r,p; //변수 값

    printf("           ████████           \n        ██        ██        \n      ██▒▒▒▒        ██       \n    ██▒▒▒▒▒▒      ▒▒▒▒██     \n    ██▒▒▒▒▒▒      ▒▒▒▒██     \n  ██  ▒▒▒▒        ▒▒▒▒▒▒██   \n  ██                ▒▒▒▒██  \n██▒▒      ▒▒▒▒▒▒          ██\n██      ▒▒▒▒▒▒▒▒▒▒        ██\n██      ▒▒▒▒▒▒▒▒▒▒    ▒▒▒▒██\n██▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒██\n  ██▒▒▒▒  ▒▒▒▒▒▒    ▒▒▒▒██  \n  ██▒▒▒▒            ▒▒▒▒██  \n    ██▒▒              ██    \n      ████        ████      \n         ████████              ");
    
    printf("\n이 알은 무엇이 될지는 당신의 따라 달렸습니다. 부디 알을 잘 키워주세요.\n");
    printf("앞으로 100일동안 당신의 선택지에 따라 알이 부화합니다.\n");
    for (day; day<101; day++) 
    {
        
        if ( (day == 7) || (day == 14) || (day == 21) || (day == 28) || (day == 35) || (day == 42) || (day == 49) || (day == 56) || (day == 63) || (day == 70) || (day == 77) || (day == 84) || (day == 91) || (day == 99) ) {
            money += 10000;
        }
        if ((hungry <= 0) || (drink <= 0) || (clear <= 0) || (mental <= 0))
        {
            printf("알의 상태가 급격히 나빠졌다.\n");
            printf("주인의 학대를 더이상 버티지 못한 알은 가출을 하였고 영영 다시 보는일은 없었다.\n");
            break;
        }
        if (money <= 0) 
        {
            printf("돈을 다쓰게된 나는 결국 사채를 썻다.\n");
            printf("사채를 갚지못한 나는 결국 알을 팔아 억만장자가 되었다.\n");
            break;
        }
        printf("오늘은 알을 주운지 %d일째이다.\n",day);
        printf("알의 상태는\n");
        printf("배부름:%d \n",hungry);
        printf("목마름:%d \n", drink);
        printf("청결도:%d \n", clear);
        printf("멘탈:%d \n", mental);
        printf("용돈:%d \n", money);

        printf("알이 뭔가 필요로 하는것 같다. 무엇을 할까?\n");
        printf("1. 먹이 주기\n");
        printf("2. 물 주기\n");
        printf("3. 청소 하기\n");
        printf("4. 놀아 주기\n");
        printf("당신의 선택은?\n");
        scanf("%d", &x);
        if (x == 1)
        {
            printf("어떤 먹이를 주시겠습니까?\n");
            printf("1. 우유를 준다.\n");
            printf("2. 고기를 준다.\n");
            printf("3. 라면을 준다.\n");
            printf("4. 치킨을 준다.\n");
            scanf("%d", &y);
           
            if (y == 1)
            {
                printf("알이 미세하게 움직였다.\n");
                printf("맛있게 먹은것 같다.\n");
                hungry -= 10;
                drink -= 10;
                clear -= 10;
                mental -= 10;
                hungry += 20;

            }
            if (y == 2) 
            {
                money -= 2000;
                printf("용돈에서 2000원이 깍였다.\n");
                printf("알이 움직였다.\n");
                printf("알은 자신이 먹은 음식에 만족한것 같다.\n");
                hungry -= 10;
                drink -= 10;
                clear -= 10;
                mental -= 10;
                hungry += 30;

            }
            if (y == 3) 
            {
                money -= 1000;
                printf("용돈에서 1000원이 깍였다.\n");
                printf("알이 전율했다.\n");
                printf("마치 유기농 딸기를 먹은거 같다.\n");
                hungry -= 10;
                drink -= 10;
                clear -= 10;
                mental -= 10;
                hungry -= 10;

            }
            if (y == 4) 
            {
                money -= 10000;
                printf("용돈에서 10000원이 도둑맞았다. 버근가...\n");
                printf("알이 세번 백덤블링을하고 경건한 자세로 치킨을 먹었다.\n");
                printf("도대체 입이 어디있는건지;;\n");
                hungry -= 10;
                drink -= 10;
                clear -= 10;
                mental -= 10;
                hungry += 110;

            }
            else {
                printf("아무것도 하지않고 하루를 보냈습니다.\n");
            }
        }


        if (x == 2) 
        {
            printf("어떤 음료를 주시겠습니까?\n");
            printf("1. 맹물을 준다.\n");
            printf("2. 비타500을 준다.\n");
            printf("3. 핫세븐을 준다.\n");
            printf("4. 커피를 준다.\n");
            scanf("%d", &z);
            if(z==1)
            {
                printf("알은 아무런 반응을 하지않았다\n");
                printf("살짝 미세하게 움직였다.\n");
                hungry -= 10;
                drink -= 10;
                clear -= 10;
                mental -= 10;
                drink += 20;
            }
            if(z==2)
            {

                money -= 500;
                printf("용돈에서 500원이 깍였다.");
                printf("알이 황당하듯이 쳐다보는것 같았다.\n");
                printf("알은 기운차게 흔들었다.\n");
                hungry -= 10;
                drink -= 10;
                clear -= 10;
                mental -= 10;
                drink += 30;

            }


            if (z == 3)
            {
                money -= 3000;
                printf("용돈에서 3000원이 깍였다.\n");
                printf("알이 엄청나게 흥분상태가 되었다.\n");
                printf("알은 엄청나게 돌아다니다가 잠들었다...\n");
                hungry -= 10;
                drink -= 10;
                clear -= 10;
                mental -= 10;
                mental -= 10;
                drink += 60;
            }
            if (z == 4)
            {
                money -= 3000;
                printf("용돈에서 3000원이 깍였다.\n");
                printf("알이 엄청나게 차분해졌다.n");
                printf("무슨알인지 몰라도 커피를 좋아하다니 버근가?,,,\n");
                hungry -= 10;
                drink -= 10;
                clear -= 10;
                mental -= 10;
                drink += 110;
            }
            else
            {
                printf("아무것도 하지않고 하루를 보냈습니다.\n");
            }
        }
        if (x == 3)
        {
            money += 1000;
            printf("오랜만에 청소를 해서 그런지 부모님이 용돈을 주셨다.\n");
            printf("1000원겟또다제!!\n");
            printf("알에서 광택이 번뜩인다.\n");
            hungry -= 10;
            drink -= 10;
            clear += 50;
            mental -= 10;

        }
        if (x == 4)
        {

            printf("어떤 놀이를 하시겠습니까?\n");
            printf("1. 공굴리기 놀이를 해준다.\n");
            printf("2. 책 읽어주기.\n");
            printf("3. 라디오 드라마 또는 오디오북을 들려준다.\n");
            printf("4. 호흡하기.\n");
            scanf("%d", &r);

            if (r == 1) 
            {   
                printf("알로 공굴리기 놀이를 했다.\n");
                printf("알이 뭔가 힘든듯이 천천히 움직인다.\n");
                hungry -= 10;   
                drink -= 10;
                clear -= 10;
                mental -= 20;
               
            }
            if (r == 2)
            {
   
                printf("알앞에서 책을 읽어주기로 결정했다.\n");
                printf("무슨 책이 좋을까 고민하다 디지몬 어드벤처를 읽어주었다.\n");
                printf("알은 자신이 디지몬인가 하고 생각하다 잠들었다.\n");
                hungry -= 10;
                drink -= 10;
                clear -= 10;
                mental -= 10;
                mental += 30;
                
            }
            if (r == 3)
            {
                money -= 3000;
                printf("용돈에서 3000원이 깍였다.\n");
                printf("알이 전율했다.\n");
                printf("알은 이야기에 감동한것 같았다.\n");
                hungry -= 10;
                drink -= 10;
                clear -= 10;
                mental += 100;
                

            }
            if (r == 4)
            {
                printf("어떤 호흡을 하시겠습니까?\n");
                printf("1. 번개의 호흡.\n");
                printf("2. 까치의 호흡.\n");
                printf("3. 하임리히법 호흡.\n");
                printf("4. 복식 호흡.\n");
                scanf("%d", &p);
                switch (p)
                {
                    case 1:
                        printf("번개의 호흡 제1형 벽력일섬!!\n");
                        break;
                    case 2:
                        printf("외인구단 주인공의 호흡법이다.\n");
                        break;
                    case 3:
                        printf("미음이 차분해졌다.\n");
                        break;
                    case 4:
                        printf("복식호흡으로 폐활량이 늘었다.\n");
                        break;
                default:
                    break;
                }
         /*       if (p == 1)
                {
                    printf("번개의 호흡 제1형 벽력일섬!!");
                }
                if (p == 2)
                {
                    printf("외인구단 주인공의 호흡법이다.");
                }
                if (p == 3)
                {
                    printf("미음이 차분해졌다");
                }
                if (p == 4)
                {
                    printf("복식호흡으로 폐활량이 늘었다.");
                }*/

            }
            
            else
            {
                printf("아무것도 하지않고 하루를 보냈습니다.\n");
            }
        }
        if (x == 500)
        {
            hungry += 90;
            drink += 90;
            clear += 90;
            mental += 90;
            day += 97;


        }
       


        
     
    }
    

   

    if ((hungry >= 70) || (drink >= 70) || (clear >= 70) || (mental >= 70))
    {
        printf("어어 알에서 빛이난다.\n");
        printf("         ,\n        /|      __\n       / |   ,-~ /\n      Y :|  //  /\n      | jj /( .^\n      >-'~'-v'\n     /       Y    jo  o    |\n   ( ~T~     j\n    >._-' _./\n   /   ;~;  |\n  Y     _,  |\n /| ;-;~_  l\n");
        printf("/ l/ ,-;~W;\nW//W/      .- W\n Y        /    Y    -Row\n l       I     !\n ]\      _\    /;W\n(; ~----(~Y.)");
        printf("\n빠라빠라빠밤 토끼가 탄생하였습니다!!!");
        printf("\n앞으로도 토끼와 같이 잘 지내길 부탁드립니다.");
        printf("\n 이게임을 플레이해주신 조교님과 교수님께 이영광을 돌리겠습니다.");
    }
    else {
        printf("알이 부화하지못헀습니다...\n");
        printf("게임을 다시 도전하여 이번에는 알의 정체를 알아봅시다.\n");
        printf("업적: 알을 부화하지 못한자!\n");
        printf("엔딩을 보기위한 힌트!!.\n");
        printf("100일이 되는날 배고픔 목마름 멘탈 청결도를 일정수치이상 끌어올리면 엔딩이 나옵니다.\n");

    }



   
    return 0;
}

