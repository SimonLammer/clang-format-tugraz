int counter = 0;
// There are spaces between operators like = and arguments 
for(counter=0;counter<LOOP_REPETITIONS;counter++){
  printf("Please enter two integer numbers:\n");
  scanf("%d %d", &number_1, &number_2.number_);
  sum = addTwoNumbers(number_1, number_2.number_);
  printf("The sum is: %d\n", sum);
}

for(counter=0;counter<4;counter++){printf("%d",counter);}

while(counter<4){counter++;}

while(counter<5){
  counter++;
}

do{
  counter++;
}while(counter<4);