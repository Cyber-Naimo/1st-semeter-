#include <stdio.h>
int main () {
char size,coffee;
printf("What coffee would you like White or black\nPress W/w for white\nPress B/b for black ");
scanf(" %c",&coffee);
printf("What size of coffe would you like, small or double.\nPress S/s for small\nPress D/d for Double ");
scanf(" %c",&size);
switch (size) {
case 's':
case 'S':
if (coffee=='W' || coffee=='w') {
printf("It will take 15 minutes for putting Water\n15 minutes for putting Sugar\n20 minutes for mixing\n2 minutes for adding coffee\n4 minutes for adding milk\n20 minutes for mixing well\nTotal Time is 78");
}
else if (coffee=='B' || coffee=='b') {
printf("It will take 20 minutes for putting Water\n20 minutes for putting Sugar\n25 minutes for mixing\n15 minutes for adding coffee\n25 minutes for mixing well\nTotal Time is 105");
}
break;
case 'D':
case 'd':
if (coffee=='W' || coffee=='w') {
printf("It will take 30 minutes for putting Water\n30 minutes for putting Sugar\n40 minutes for mixing\n4 minutes for adding coffee\n8 minutes for adding milk\n40 minutes for mixing well\nTotal Time is 156");
}
else if (coffee=='B' || coffee=='b') {
printf("It will take 40 minutes for putting Water\n40 minutes for putting Sugar\n50 minutes for mixing\n30 minutes for adding coffee\n50 minutes for mixing well\nTotal Time is 210");
}


break;
default: if(coffee=='B' || coffee=='b' || coffee =='W' || coffee=='w') {
	printf("Not a valid size");
break;
}
}
}
