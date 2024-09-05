#include<stdio.h>

main(){

	union tag {
	
		char name[15] = "Shirpa";
		int age;

	}rec;

rec.age = 24;

printf("%d\n",rec.name);
}
