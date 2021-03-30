#include <stdio.h>

struct student {
    char name[50];
    char gen[50];
    char fa[50];
    char mo[50];
} s[5];

int main() {
	char person[10];
	for(int i=0;i<5;i++){
		scanf("%s,%s,%s,%s", &s[i].name,&s[i].gen,&s[i].fa,&s[i].mo);
	}
	scanf("Person name: %s",person);
	for(int i=0;i<5;i++){
		if(s[i].name == person){
			for(int j=0;j<5;j++){
				if(s[i].fa != s[j].name || s[i].mo != s[j].name){
					printf("%s",s[j].name);
				}	
			}
		}
	}
    return 0;
}
