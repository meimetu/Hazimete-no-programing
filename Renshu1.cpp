#include <stdio.h>

int main(void)
{
	char name[10];
	char confirmation;
	
	printf("見習い魔導師イーノ最初の受難\n\n");
	printf("キャラクターの名前を入力してください:");
	scanf("%s", name);
	printf("キャラクターの名前は[%s]でよいですか? (Y/N)\n", name);
	scanf("%*c%c", &confirmation);
	if (confirmation == 'y') printf("了解しました。名前を確定します\n");
	
}