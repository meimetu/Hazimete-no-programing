#include <stdio.h>

void show_title (void);
void make_character(void);

int main(void)
{
	show_title();
	make_character();
}

void show_title(void)
{
	printf("見習い魔導師イーノ最初の受難\n\n");
}

void make_character()
{
	char name[10];
	char confirmation;
	
	printf("キャラクターの名前を入力してください:");
	scanf("%s", name);
	printf("キャラクターの名前は[%s]でよいですか? (Y/N)\n", name);
	scanf("%*c%c", &confirmation);
	if (confirmation == 'y') printf("了解しました。名前を確定します\n");
	
}