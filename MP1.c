 #include <stdio.h>


//prototypes of each choices
int logBase10Estimate(int n); //1
int floor(float x);             //2
int ceiling(float x);           //3
int isAlnum(char ch);           //4
int isAlpha(char ch);           //5
int isUpper(char ch);           //6
int isLower(char ch);           //7
char toUpper(char ch);          //8
char toLower(char ch);          //9
int isPunctuation(char ch);     //10
int toInteger(char st[]);       //11
float toFloat(char st[]);       //12
int abs(int x);                 //13
void stringCopy(char src[], char dest[]); //14
int substring(char s1[], char s2[]);//15
int stringCompare(char s1[], char s2[]);//16
void camelCase(char st[]); //17
void reverse(char st[]);//18
int humbleNumber(int x);//19
int revers(int x);//20
void intro(void); //Introduction
void closing(void);//termination

int main(void){
    int input;
    intro();

    do {

        printf("\n\n\t\t\t\t\t\t\t");
        for(int i = 0; i<55; i++){
            printf("*");
        }
        printf("\n\t\t\t\t\t\t\t");
        for(int i = 0; i<55; i++){
            printf("_");
        }
        printf("\n\t\t\t\t\t\t\tMenu:\n");
        printf("\t\t\t\t\t\t\t\t1. logBase10Estimate\n\t\t\t\t\t\t\t\t2. floor\n\t\t\t\t\t\t\t\t3. ceiling\n\t\t\t\t\t\t\t\t4. isAlNum\n\t\t\t\t\t\t\t\t5. isAlpha\n\t\t\t\t\t\t\t\t6. isUpper\n\t\t\t\t\t\t\t\t7. isLower\n\t\t\t\t\t\t\t\t8. toUpper\n\t\t\t\t\t\t\t\t9. toLower\n\t\t\t\t\t\t\t\t10. isPunctuation\n");
        printf("\t\t\t\t\t\t\t\t11. toInteger\n\t\t\t\t\t\t\t\t12. toFloat\n\t\t\t\t\t\t\t\t13. abs\n\t\t\t\t\t\t\t\t14. stringCopy\n\t\t\t\t\t\t\t\t15. substring\n\t\t\t\t\t\t\t\t16. stringCompare\n\t\t\t\t\t\t\t\t17. camelCase\n\t\t\t\t\t\t\t\t18. reverse(s)\n\t\t\t\t\t\t\t\t19. humbleNumber\n\t\t\t\t\t\t\t\t20. revers(i)\n");
        printf("\t\t\t\t\t\t\t\tAny number outside 1 to 20. Exit\n\n\t\t\t\t\t\t\tChoose one:");
        scanf(" %d", &input);
        printf("\n\t\t\t\t\t\t\t");
        for(int i = 0; i<55; i++){
            printf("*");
        }
        printf("\n\t\t\t\t\t\t\t");
        for(int i = 0; i<55; i++){
            printf("_");
        }
        printf("\n\n");
        if(input==1){
            int num;
            printf("\n");
            printf("Input a number and we'll give its log to the base of 10: ");
            scanf("%d", &num);
            printf("\nAns: %d", logBase10Estimate(num));
        }else if(input==2){
            float num;
            printf("Input a float number:");
            scanf("%f", &num);
            printf("\Ans: %d", floor(num));
        }else if(input==3){
            float num;
            printf("Input a float number:");
            scanf("%f", &num);
            printf("\nAns: %d", ceiling(num));
        }else if(input==4){
            char num;
            printf("Input only one character: ");
            scanf(" %c", &num);
            printf("\nAns: %d", isAlnum(num));
        }else if(input==5){
            char num;
            printf("Input only one character: ");
            scanf(" %c", &num);
            printf("\nAns: %d", isAlpha(num));
        }else if(input==6){
            char num;
            printf("Input only one character: ");
            scanf(" %c", &num);
            printf("\nAns: %d", isUpper(num));
        }else if(input==7){
            char num;
            printf("Input only one character: ");
            scanf(" %c", &num);
            printf("\nAns: %d", isLower(num));
        }else if(input == 8){
            char num;
            printf("Input only one character: ");
            scanf(" %c", &num);
            printf("\nAns: %c", toUpper(num));
        }else if(input == 9){
            char num;
            printf("Input only one character: ");
            scanf(" %c", &num);
            printf("\nAns: %c", toLower(num));
        }else if(input == 10){
            char num;
            printf("Input only one character: ");
            scanf(" %c", &num);
            printf("\nAns: %d", isPunctuation(num));
        }else if(input == 11){
            char num[100];
            int newLineIndex0, newLineIndex;
            printf("Input a string: ");
            scanf(" %[^\n]", &num);
            newLineIndex = strcspn(num, "\n");
            printf("\nAns : %d", toInteger(num));
        }else if(input == 12){
            char num[100];
            int countDeciPoints = 0, countAlpha = 0;
            int newLineIndex;
            float x = 0.0;
            printf("Input a string: ");
            scanf(" %[^\n]", &num);
            newLineIndex = strcspn(num, "\n");
            for(int i = 0; i<newLineIndex; i++){
                if((num[i] <= 'Z' && num[i] >= 'A') || (num[i] <= 'z' && num[i] >= 'a')){
                    countAlpha = 1;
                }else if(num[i] == '.'){
                    countDeciPoints = countDeciPoints + 1;
                }
            }
            for(int i=newLineIndex-1; i>=0; i--){
                if(num[i] >= '0' && num[i] <= '9'){
                    break;
                }else{
                    num[i] = '\0';
                }
            }
            for(int i=newLineIndex-1; i>=0; i--){
                if(num[i] != '.'){
                    x++;
                }else{
                    break;
                }
            }
            if(x>9){
                x=x*10;
            }else{
                x = x*10;
            }
            if(countAlpha == 0 && countDeciPoints == 1){
                printf("\nAns: %f", toFloat(num));
            }else if(countAlpha > 0){
                printf("\nAns: Invalid input, non-digits character/s are found!");
            }else if(countDeciPoints > 1){
                printf("\nAns: Invalid input, to much decimal points.");
            }

        }else if(input == 13){
            int num;
            printf("Input an integer: ");
            scanf(" %d", &num);
            printf("\nAns: %d", abs(num));
        }else if(input == 14){
            char num[100], copy[100];
            printf("Input a string: ");
            scanf(" %[^\n]", &num);
            stringCopy(num, copy);
        }else if(input == 15){
            char num0[100], num1[100];
            printf("Input a Universal string: ");
            scanf(" %[^\n]", &num0);
            printf("Input a string to determine whether is a substring of the Universal string: ");
            scanf(" %[^\n]", &num1);
            printf("\nAns: %d", substring(num0, num1));
        }else if(input == 16){
            char num0[100], num2[100];
            printf("Input the first string: ");
            scanf(" %[^\n]", &num0);
            printf("Input the second string: ");
            scanf(" %[^\n]", &num2);
            printf("\nAns: %d", stringCompare(num0, num2));



        }else if(input == 17){
            char num[100];
            printf("Input a string: ");
            scanf(" %[^\n]", &num);
            camelCase(num);

        }else if(input == 18){
            char num[100];
            printf("Input a string: ");
            scanf(" %[^\n]", &num);
            reverse(num);
        }else if(input == 19){
            int num;
            printf("Input a integer: ");
            scanf(" %d", &num);
            printf("\nAns: %d", humbleNumber(num));
        }else if(input == 20){
            int num;
            printf("Input a integer: ");
            scanf(" %d", &num);
            printf("\nAns: %d", revers(num));
        }






    }while(input<21 && input>0);

    closing();
    return 0;
}

int logBase10Estimate(int n){
    int count = 0, quotient = n;
    do{
        quotient = quotient/10;
        count++;
    }while(quotient>0);
    return count-1;
}

int floor(float x){
    int y;
    y = x;

    return y;
}

int ceiling(float x){
    int y;
    y = x;
    if(x-(float)y == 0){
        y -= 1;
    }
    return y + 1;
}

int isAlnum(char ch){
    int y;
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        y = 1;
    }else if(ch <= '9' && ch >= '0'){
        y = 1;
    }else{
       y = 0;
    }
    return y;
}

int isAlpha(char ch){
    int y;
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        y = 1;
    }else{
        y = 0;
    }
    return y;
}
//6
int isUpper(char ch){
    int y;
    if(ch >= 'A' && ch <= 'Z'){
       y = 1;
    }else{
        y = 0;
    }
    return y;
}
//7
int isLower(char ch){
    int y;
    if(ch >= 'a' && ch <= 'z'){
       y = 1;
    }else{
        y = 0;
    }
    return y;
}
//8
char toUpper(char ch){
    char y;
    if(ch >= 'a' && ch <= 'z'){
        y = ch - 32;
    }else if(ch >= 'A' && ch <= 'Z'){
        y = ch;
    }
    return y;
}
//9
char toLower(char ch){
    char y;
    if(ch >= 'A' && ch <= 'Z'){
        y = ch + 32;
    }else if(ch >= 'a' && ch <= 'z'){
        y = ch;
    }
    return y;
}
//10
int isPunctuation(char ch){
    int y;
    if(ch == '.' ||  ch == '?' || ch == '!' || ch == ',' || ch == ';' || ch == ':' || ch == '_' || ch == '_' || ch == '{' || ch == '}' || ch == '(' || ch == ')' || ch == '['|| ch == ']' || ch == '"'){
        y = 1;
    }else{
        y = 0;
    }
    return y;
}
//11
int toInteger(char st[]){
    int y, count;

    int newLineIndex, newLineIndex1;
    count = 1;
    newLineIndex = strcspn(st, "\n");
    for(int i = newLineIndex - 1; i >= 0; i--){
        if(st[i] >= '0' && st[i] <= '9'){
            newLineIndex1 = i;
            break;
        }
    }
    for(int i = newLineIndex1; i >= 0; i--){
        if(i == newLineIndex1){
            y = st[i] - '0';
        }else{
            y = y + ((st[i] - '0') * pow(10, count));
            count++;

        }
    }

    while(st[newLineIndex1] - '0' != y%10){
        y++;
    }

    return y;
}

//12
float toFloat(char st[]){
    double z = 0.0, count1 = 0.1, x;
    int y;
    int count;

    int decimalPoint, newLineIndex1;
    count = 0;
    decimalPoint = strcspn(st, ".");
    newLineIndex1 = strcspn(st, "\n");

    for(int i = decimalPoint - 1; i >= 0; i--){
        z = z + ((st[i] - '0') * (pow(10, count)));
        count++;
    }

    count = -1;
    for(int j = decimalPoint + 1; j<=newLineIndex1-1; j++){
        z = z + ((st[j] - '0') * pow(10,count));
        count--;
    }
    return z;
}
//13
int abs(int x){
    if(x < 0){
        x *= -1;
    }
    return x;
}
//14
void stringCopy(char src[],char dest[]){
     int newLineIndex;
     newLineIndex = strcspn(src, "\n");
     for(int i = 0; i<newLineIndex; i++){
        dest[i] = src[i];
     }
     printf("\nCopied string: ");
     for(int i =0; i<newLineIndex; i++){
        printf("%c", dest[i]);
     }
}
//15
int substring(char s1[], char s2[]){
    int x, y, z, count;
    int newLineIndex0, newLineIndex1;
    newLineIndex0 = strcspn(s1, "\n");
    newLineIndex1 = strcspn(s2, "\n");
    y = 0;
    count = 0;
    for(int i=0; i<newLineIndex0; i++){
        if(s1[i] == s2[y]){
            y++;
            if(y==newLineIndex1){
                break;
            }
        }else{
            y = 0;
        }
    }
    if(y == newLineIndex1){
        z = 1;
    }else{
        z = 0;
    }
    return z;
}
//16
int stringCompare(char s1[], char s2[]){
    int newLineIndex1, newLineIndex2, x;
    newLineIndex1 = strcspn(s1, "\n");
    newLineIndex2 = strcspn(s2, "\n");

    for(int i = 0; i<newLineIndex1; i++){
        if(s1[i] >= 'A' && s1[i] <= 'Z'){
            s1[i] = s1[i] + 32;
        }
    }
    for(int i = 0; i<newLineIndex2; i++){
        if(s2[i] >= 'A' && s2[i] <= 'Z'){
            s2[i] = s2[i] + 32;
        }
    }
    for(int i = 0; i < newLineIndex1; i++){
        if(s1[i] > s2[i]){
            x = 1;
            break;
        }else if(s1[i] < s2[i]){
            x = -1;
            break;
        }else{
            x = 0;
        }
    }

    return x;
}
//17
void camelCase(char st[]){
    int newLineIndex, count = 1;
    newLineIndex = strcspn(st, "\n");
    for(int i = 0; i<newLineIndex; i++){
        if((i%2 == 0) && ((st[i] >= 'a' && st[i] <= 'z') || (st[i] >= 'A' && st[i] <= 'Z'))){
            if(st[i] >= 'a' && st[i] <= 'z'){
                st[i] = st[i] - 32;

            }
            count = 0;
        }else if((i%2 != 0) && ((st[i] >= 'a' && st[i] <= 'z') || (st[i] >= 'A' && st[i] <= 'Z'))){
            if(st[i] >= 'A' && st[i] <= 'Z'){
                st[i] = st[i] + 32;

            }
            count = 1;
        }
    }
    printf("\nAns: ");
    for(int i = 0; i<newLineIndex; i++){
        printf("%c", st[i]);
    }

}
//18
void reverse(char st[]){
    int newLineIndex;
    newLineIndex = strcspn(st, "\n");
    printf("\nAns: ");
    for(int i = newLineIndex -1; i>=0; i--){
        printf("%c", st[i]);
    }
}
//19
int humbleNumber(int x){
    int count = 0, count1 = 0, z;
    for(int i=1; i<= x; i++){
        count1 = 0;
        for(int j=i; j>0; j--){
            if(i%j == 0 && j != 1 && i!=j){
                count1++;
            }
        }
        if(count1 == 0){
            count++;
        }
    }
    int prime[count];
    int y = 0;
    for(int i=1; i<= x; i++){
        count1 = 0;
        for(int j=i; j>0; j--){
            if(i%j == 0 && j != 1 && i!=j){
                count1++;
            }
        }
        if(count1 == 0){
            prime[y] = i;
            y++;
        }


    }
    count1 = 0;
    if(x >10){
        for(int i=count; i>4; i--){
            if(x%prime[i] == 0){
                count1 = 1;
                break;
            }
        }
    }
    if(count1 == 1){
        z = 0;
    }else{
        z = 1;
    }
    return z;
}
//20
int revers(int x){
    int count = 0, y, a, count1;
    y = x;
    while(y>0){
        y /= 10;
        count++;
    }
    int z[count];

    for(int i=0; i<=count; i++){
        z[i] = x%10;
        x /= 10;
    }

    a = 0;
    count1 = 1;
    for(int i=count - 1; i>=0; i--){
        a = a + z[i]*count1;
        count1 *= 10;
    }
    return a;
}
//Introduction


void intro(void){
    printf("\n\n");
    for(int i= 1; i<=9; i++){
        printf("\t\t\t\t\t\t");
        for(int j=1; j<=70; j++){

            if(i == 1){
                if(j==1 || j==2 || j==8 || j==9 || (j>=11 && j<=19) || (j>=21 && j<=23) || (j>=31 && j<=39) || (j>=41 && j<=49) || (j>=51 && j<=53) || (j>=57 && j<=59) || (j>=61 && j<=69)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==2){
                if(j==1 || j==2 || j==8 || j==9 || (j>=11 && j<=19) || (j>=21 && j<=23) || (j>=31 && j<=39) || (j>=41 && j<=49) || (j>=51 && j<=54) || (j>=56 && j<=59) || (j>=61 && j<=69)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==3){
                if(j==1 || j==2 || j==8 || j==9 || (j>=11 && j<=13) || j==17 || j==18 || j== 19 || (j>=21 && j<=23) || (j>=31 && j<=39) || (j>=41 && j<=49) || (j>=51 && j<=59) || (j>=61 && j<=63) || j==67 || j==68 || j==69){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==4){
                if(j==1 || j==2 || j== 5 || j==8 || j==9 || (j>=11 && j<=15) || (j>=21 && j<=23) || (j>=31 && j<=33) || (j>=37 && j<=39) || (j>=41 && j<=43) || (j>=47 && j<=49) || (j>=51 && j<=59) || (j>=61 && j<=65)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==5){
                if(j==1 || j==2 || (j>=4 && j<=6) || j==8 || j==9 || (j>=11 && j<=15) || (j>=21 && j<=23) || (j>=31 && j<=33) || (j>=41 && j<=43) || (j>=47 && j<=49) || j==51 || j==52 || (j>=54 && j<=56) || j==58 || j==59 || (j>=61 && j<=65)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==6){
                if((j>=1 && j<=9) || (j>=11 && j<=15) || (j>=21 && j<=23) || (j>=31 && j<=33) || (j>=37 && j<=39) || (j>=41 && j<=43) || (j>=47 && j<=49) || j==51 || j==52 || j==55 || j==58 || j==59 || (j>=61 && j<=65)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==7){
                if((j>=1 && j<=9) || (j>=11 && j<=13) || j==17 || j==18 || j== 19 || (j>=21 && j<=29) || (j>=31 && j<=39) || (j>=41 && j<=49) || j==51 || j==52 || j==58 || j==59 || (j>=61 && j<=63) || (j>=67 && j<= 69)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==8){
                if((j>=1 && j<=4) || (j>=6 && j<=9) || (j>=11 && j<=19) || (j>=21 && j<=29) || (j>=31 && j<=39) || (j>=41 && j<=49) || j==51 || j==52 || j==58 || j==59 || (j>=61 && j<=69)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==9){
                if(j==2 || j== 3 || j==7 || j==8 || (j>=11 && j<=19) || (j>=21 && j<=29) || (j>=31 && j<=39) || (j>=41 && j<=49) || j==51 || j==52 || j==58 || j==59 || (j>=61 && j<=69)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }

        }
        printf("\n");
    }
    printf("\n");
    for(int i=1; i<=6; i++){
        printf("\t\t\t\t\t\t");
        for(int j=1; j<=70; j++){

            if(i==1){
                if((j>=29 && j<=34) || (j>=36 && j<=41) || (j>=1 && j<= 27) || (j>=43 && j<=69)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==2){
                if((j>=29 && j<=34) || (j>=36 && j<=41) || (j>=1 && j<= 27) || (j>=43 && j<=69)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==3){
                if((j>=31 && j<=32) || j==36 || j==37 || j==40 || j==41 || (j>=1 && j<= 27) || (j>=43 && j<=69)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==4){
                if((j>=31 && j<=32) || j==36 || j==37 || j==40 || j==41 || (j>=1 && j<= 27) || (j>=43 && j<=69)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==5){
                if((j>=31 && j<=32) ||(j>=36 && j<=41) || (j>=1 && j<= 27) || (j>=43 && j<=69)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==6){
                if((j>=31 && j<=32) ||(j>=36 && j<=41) || (j>=1 && j<= 27) || (j>=43 && j<=69)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }

        }
        printf("\n");
    }
    printf("\n");
    for(int i=1; i<=15; i++){
        printf("\t\t\t\t\t\t");
        for(int j=1; j<=70; j++){
            if(i==1){
                if((j>=2 && j<=16) || (j>=19 && j<=23)|| (j>=29 && j<=33) || (j>=38 && j<=50) || (j>=54 && j<=68)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==2){
                if((j>=2 && j<=16) || (j>=19 && j<=24)|| (j>=28 && j<=33) || (j>=37 && j<=51) || (j>=54 && j<=68)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==3){
                if((j>=2 && j<=16) || (j>=19 && j<=25)|| (j>=27 && j<=33) || (j>=37 && j<=51) || (j>=54 && j<=68)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==4){
                if((j>=2 && j<=16) || (j>=19 && j<=33) || (j>=37 && j<=41) || (j>=47 && j<=51) || (j>=54 && j<=68)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==5){
                if((j>=2 && j<=16) || (j>=19 && j<=33) || (j>=37 && j<=41) || (j>=54 && j<=68)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==6){
                if((j>=2 && j<=6) || (j>=12 && j<=16) || (j>=19 && j<=33) || (j>=37 && j<=50) || (j>=54 && j<=58) || (j>= 64 && j<=68)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==7){
                if((j>=2 && j<=6) || (j>=19 && j<=22) || (j>=24 && j<=28) || (j>=30 && j<=33) || (j>=37 && j<=51) || (j>=54 && j<=58)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==8){
                if((j>=2 && j<=6) || (j>=19 && j<=22) || (j>=25 && j<=27) || (j>=30 && j<=33) || (j>=37 && j<=51) || (j>=54 && j<=58)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==9){
                if((j>=2 && j<=6) || (j>=19 && j<=22) || j==26 || (j>=30 && j<=33) || (j>=47 && j<=51) || (j>=54 && j<=58)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==10){
                if((j>=2 && j<=6) || (j>=12 && j<=16) || (j>=19 && j<=22) || (j>=30 && j<=33) || (j>=47 && j<=51) || (j>=54 && j<=58) || (j>=64 &&j<=68)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==11){
                if((j>=2 && j<=16) || (j>=19 && j<=22) || (j>=30 && j<=33) || (j>=47 && j<=51) || (j>=54 && j<=68)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==12){
                if((j>=2 && j<=16) || (j>=19 && j<=22) || (j>=30 && j<=33) || (j>=37 && j<=41) || (j>=47 && j<=51) || (j>=54 && j<=68)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==13){
                if((j>=2 && j<=16) || (j>=19 && j<=22) || (j>=30 && j<=33) || (j>=37 && j<=51) || (j>=54 && j<=68)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==14){
                if((j>=2 && j<=16) || (j>=19 && j<=22) || (j>=30 && j<=33) || (j>=37 && j<=51) || (j>=54 && j<=68)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i==15){
                if((j>=2 && j<=16) || (j>=19 && j<=22) || (j>=30 && j<=33) || (j>=38 && j<=50) || (j>=54 && j<=68)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1; i<=27; i++){
        printf("\t\t\t\t\t\t");
        for(int j=1; j<=70; j++){
            if(i>=1 && i<=10){
                if((j>=19 && j<=34) || (j>=36 && j<=51)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i>=11 && i<=27){
                if((j>=24 && j<=34) || (j>=41 && j<=51)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

}
//termination
void closing(void){

    for(int i=1; i<=6; i++){
        printf("\t\t");
        for(int j=1; j<=130; j++){
            if(i==1){
                if((j>=1 && j<=6) || (j>=8 && j<=13) || (j>=15 && j<=20) || (j>=22 && j<=27) || (j>=29 && j<=34) || (j>=36 && j<=41) || j==43 || j==44 || j==50 || j==51 || (j>=57 && j<=62) || (j>=64 && j<=69) || (j>=71 && j<=76) || j==78 || j==79 || j==85 || j==86 || (j>=89 && j<=92) || j==95 || j==96 || j==100 || j==101 || (j>=103 && j<=108) || (j>=110 && j<=115) || (j>=117 && j<=122) || (j>=124 && j<=128)){
                    printf("#");
                }else{
                    printf(" ");
                }

            }else if(i==2){
                if((j>=1 && j<=2) || (j>=5 && j<=6) || (j>=8 && j<=9) || (j>=12 && j<=13) || (j>=15 && j<=20) || (j>=22 && j<=23) || (j>=26 && j<=27) || (j>=29 && j<=30) || (j>=33 && j<=34) || (j>=36 && j<=37) || (j>=40 && j<=41) || (j>=43 && j<=45) || (j>=49 && j<=51) || (j>=57 && j<=62) || (j>=64 && j<=65) || (j>=71 && j<=72) || (j>=75 && j<=76) || (j>=78 && j<=80) || (j>=84 && j<=86) || (j>=90 && j<=91) || (j>=95 && j<=97) || (j>=100 && j<=101) || (j>=103 && j<=104) || (j>=107 && j<=108) || (j>=110 && j<=115) || (j>=117 && j<=118) || (j>=124 && j<=125) || (j>=128 && j<=129)){
                    printf("#");
                }else{
                    printf(" ");
                }
            }else if(i==3){
                if((j>=1 && j<=2) || (j>=5 && j<=6) || (j>=8 && j<=9) || (j>=12 && j<=13) || (j>=15 && j<=16) || (j>=19 && j<=20) || (j>=22 && j<=23) || (j>=29 && j<=30) || (j>=33 && j<=34) || (j>=36 && j<=37) || (j>=40 && j<=41) || (j>=43 && j<=46) || (j>=48 && j<=51) || (j>=59 && j<=60) || (j>=64 && j<=67) || (j>=71 && j<=72) || (j>=75 && j<=76) || (j>=78 && j<=81) || (j>=83 && j<=86) || (j>=90 && j<=91) || (j>=95 && j<=98) || (j>=100 && j<=101) || (j>=103 && j<=104) || (j>=107 && j<=108) || (j>=112 && j<=113) || (j>=117 && j<=120) || (j>=124 && j<=125) || (j>=128 && j<=129)){
                    printf("#");
                }else{
                    printf(" ");
                }
            }else if(i==4){
                if((j>=1 && j<=6) || (j>=8 && j<=13) || (j>=15 && j<=16) || (j>=19 && j<=20) || (j>=22 && j<=23) || (j>=25 && j<=27) || (j>=29 && j<=34) || (j>=36 && j<=41) || (j>=43 && j<=44)|| (j>=46 && j<=48) || (j>=50 && j<=51) || (j>=59 && j<=60) || (j>=64 && j<=65) || (j>=71 && j<=76) || (j>=78 && j<=79) || (j>=81 && j<=83) || (j>=85 && j<=86) || (j>=90 && j<=91) || (j>=95 && j<=96) || (j>=98 && j<=101) || (j>=103 && j<=108) || (j>=112 && j<=113) || (j>=117 && j<=118) || (j>=124 && j<=125) || (j>=128 && j<=129)){
                    printf("#");
                }else{
                    printf(" ");
                }
            }else if(i==5){
                if((j>=1 && j<=2) || (j>=8 && j<=9) || (j>=11 && j<=12) || (j>=15 && j<=20) || (j>=22 && j<=23) || (j>=26 && j<=27) || (j>=29 && j<=30) || (j>=32 && j<=33) || (j>=36 && j<=37) || (j>=40 && j<=41) || (j>=43 && j<=44)|| j==47 || (j>=50 && j<=51) || (j>=59 && j<=60) || (j>=64 && j<=65) || (j>=71 && j<=72) || (j>=74 && j<=75) || (j>=78 && j<=79) || j==82 || (j>=85 && j<=86) || (j>=90 && j<=91) || (j>=95 && j<=96) || (j>=99 && j<=101) || (j>=103 && j<=104) || (j>=107 && j<=108) || (j>=112 && j<=113) || (j>=117 && j<=118) || (j>=124 && j<=125) || (j>=128 && j<=129)){
                    printf("#");
                }else{
                    printf(" ");
                }
            }else if(i==6){
                if((j>=1 && j<=2) || (j>=8 && j<=9) || (j>=12 && j<=13) || (j>=15 && j<=20) || (j>=22 && j<=27) || (j>=29 && j<=30) || (j>=33 && j<=34) || (j>=36 && j<=37) || (j>=40 && j<=41) || (j>=43 && j<=44) || (j>=50 && j<=51) || (j>=59 && j<=60) || (j>=64 && j<=69) || (j>=71 && j<=72) || (j>=75 && j<=76) || (j>=78 && j<=79) || (j>=85 && j<=86) || (j>=89 && j<=92) || (j>=95 && j<=96) || (j>=100 && j<=101) || (j>=103 && j<=104) || (j>=107 && j<=108) || (j>=112 && j<=113) || (j>=117 && j<=122) || (j>=124 && j<=128)){
                    printf("#");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
