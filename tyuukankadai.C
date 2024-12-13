#include <stdio.h>
#include <string.h>
#include <ctype.h>

void checkPasswordStrength(const char *password) {
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0;
    
    for(int i = 0; i< length; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        } else if (islower(password[i])){
            hasLower = 1;
        }
    }
    
    if (length >=8 && hasUpper && hasLower) {
        printf("このパスワードは強いです。\n");
    } else {
        printf("このパスワードは強くありません。改善点:\n");
        if (length<8) {
            printf("パスワードを八文字以上にしてください\n");
        }
        if (!hasUpper) {
            printf("パスワードに少なくとも一つの大文字を含めてください。\n");
        }
        if (!hasLower) {
            printf("パスワードに少なくとも一つの小文字を含めてください。\n");
        }
    }
}

int main() {
    char password[100];
    
    printf("パスワードを入力してください。:");
    scanf("%s",password);
    
    checkPasswordStrength(password);
    
    return 0;
}
